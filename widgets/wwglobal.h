//
// C++ Interface: wwglobal
//
// Description:
//
//
// Author: Witold Wysota <wysota@wysota.eu.org>, (C) 2007
//
// Copyright: See COPYING file that comes with this distribution
//
//
#ifndef __WW_GLOBAL_H
#define __WW_GLOBAL_H

#include <QString>
#include <QColor>

#ifdef PROBLEM_FIX_2
    #ifdef WW_BUILD_WWWIDGETS
    #define Q_WW_EXPORT Q_DECL_EXPORT
    #else
    #define Q_WW_EXPORT Q_DECL_IMPORT
    #endif
#else
    #define Q_WW_EXPORT 
#endif

class QwwPrivate;
/**
 * \internal
 * @class QwwPrivatable
 */
class Q_WW_EXPORT QwwPrivatable {
protected:
    QwwPrivatable(QwwPrivate *p);
    ~QwwPrivatable();
    QwwPrivate *d_ww_ptr;
};


#define WW_DECLARE_PRIVATE(Class) \
    inline Class##Private* d_func() { return reinterpret_cast<Class##Private *>(d_ww_ptr); } \
    inline const Class##Private* d_func() const { return reinterpret_cast<const Class##Private *>(d_ww_ptr); } \
    friend class Class##Private;


 Q_WW_EXPORT QString wwFindStandardColorName(const QColor &);




#endif
