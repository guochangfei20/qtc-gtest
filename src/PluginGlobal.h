#ifndef QTCGTEST_GLOBAL_H
#define QTCGTEST_GLOBAL_H

#include <QtGlobal>

#if defined(QTCGTEST_LIBRARY)
#  define QTCGTESTSHARED_EXPORT Q_DECL_EXPORT
#else
#  define QTCGTESTSHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // QTCGTEST_GLOBAL_H
