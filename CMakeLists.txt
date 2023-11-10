cmake_minimum_required(VERSION 3.10.0)
project(wwWidgets VERSION 0.1.0 LANGUAGES C CXX)


set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

set(QT_VERSION_BASE Qt5)

# Find the QtWidgets library
find_package(${QT_VERSION_BASE} COMPONENTS Core Gui Widgets OpenGL Charts Network REQUIRED)

add_library(wwWidgets STATIC 
    widgets/wwglobal_p.cpp 
    widgets/wwglobal_p.h 

    widgets/colormodel.cpp
    widgets/colormodel.h

    widgets/qwwcolorcombobox/qwwcolorcombobox.cpp
    widgets/qwwcolorcombobox/qwwcolorcombobox.h

    widgets/qwwcolorbutton/qwwcolorbutton.cpp
    widgets/qwwcolorbutton/qwwcolorbutton.h

    widgets/qwwlistwidget/qwwlistwidget.cpp 
    widgets/qwwlistwidget/qwwlistwidget.h

    widgets/qwwlistnavigator/qwwlistnavigator.cpp
    widgets/qwwlistnavigator/qwwlistnavigator.h

    ./widgets/qwwhuesatpicker/qwwhuesatpicker.cpp
    ./widgets/qwwhuesatpicker/qwwhuesatpicker.h

    ./widgets/qwwhuesatradialpicker/qwwhuesatradialpicker.cpp
    ./widgets/qwwhuesatradialpicker/qwwhuesatradialpicker.h

    ./widgets/qwwtwocolorindicator/qwwtwocolorindicator.cpp
    ./widgets/qwwtwocolorindicator/qwwtwocolorindicator.h

    ./widgets/qwwnumpad/qwwnumpad.cpp
    ./widgets/qwwnumpad/qwwnumpad.h

    ./widgets/qwwrichtextedit/qwwrichtextedit.cpp
    ./widgets/qwwrichtextedit/qwwrichtextedit.h

    ./widgets/qwwbuttonlineedit/qwwbuttonlineedit.cpp
    ./widgets/qwwbuttonlineedit/qwwbuttonlineedit.h

    ./widgets/qwwclearlineedit/qwwclearlineedit.cpp
    ./widgets/qwwclearlineedit/qwwclearlineedit.h

    ./widgets/qwwfilechooser/qwwfilechooser.cpp
    ./widgets/qwwfilechooser/qwwfilechooser.h

    ./widgets/qwwled/qwwled.cpp
    ./widgets/qwwled/qwwled.h

    ./widgets/qwwlongspinbox/qwwlongspinbox.cpp
    ./widgets/qwwlongspinbox/qwwlongspinbox.h

    ./widgets/qwwnavigationbar/qwwnavigationbar.cpp
    ./widgets/qwwnavigationbar/qwwnavigationbar.h


    ./widgets/qwwresetlineedit/qwwresetlineedit.cpp
    ./widgets/qwwresetlineedit/qwwresetlineedit.h

    ./widgets/qwwrichtextbutton/qwwrichtextbutton.cpp
    ./widgets/qwwrichtextbutton/qwwrichtextbutton.h

    ./widgets/qwwtextspinbox/qwwtextspinbox.cpp
    ./widgets/qwwtextspinbox/qwwtextspinbox.h



    )


target_include_directories(wwWidgets PUBLIC 
    ./widgets
    ./widgets/qwwhuesatpicker
    ./widgets/qwwcolorcombobox
    ./widgets/qwwcolorbutton
    ./widgets/qwwlistwidget
    ./widgets/qwwlistnavigator
    ./widgets/qwwhuesatradialpicker
    ./widgets/qwwtwocolorindicator
    ./widgets/qwwnumpad
    ./widgets/qwwrichtextedit
    ./widgets/qwwbuttonlineedit
    ./widgets/qwwclearlineedit
    ./widgets/qwwfilechooser
    ./widgets/qwwled
    ./widgets/qwwlongspinbox
    ./widgets/qwwnavigationbar
    ./widgets/qwwresetlineedit
    ./widgets/qwwrichtextbutton
    ./widgets/qwwtextspinbox

    )

target_compile_definitions(wwWidgets PRIVATE WW_BUILD_WWWIDGETS)


target_link_libraries(wwWidgets
	${QT_VERSION_BASE}::Core
	${QT_VERSION_BASE}::Widgets
)

add_executable(colorpickers  
    examples/colorpickers/main.cpp
    examples/colorpickers/colorpickers.ui
    )
target_link_libraries(colorpickers PUBLIC wwWidgets)


add_executable(listwidget  
    examples/listwidget/main.cpp
)
target_link_libraries(listwidget PUBLIC wwWidgets)


add_executable(pinpad  
    examples/pinpad/main.cpp
)
target_link_libraries(pinpad PUBLIC wwWidgets)


add_executable(texteditor  
    examples/texteditor/main.cpp
)
target_link_libraries(texteditor PUBLIC wwWidgets)



add_executable(widgetgallery  
    examples/widgetgallery/main.cpp
    examples/widgetgallery/gallery.ui
)
target_link_libraries(widgetgallery PUBLIC wwWidgets)



add_executable(buttonlineedit  
    examples/widgets/buttonlineedit/main.cpp
    examples/widgets/buttonlineedit/window.cpp
    examples/widgets/buttonlineedit/window.h
)
target_link_libraries(buttonlineedit PUBLIC wwWidgets)