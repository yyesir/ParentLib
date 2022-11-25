#ifndef EXPORTWIDGET_H
#define EXPORTWIDGET_H

#include <QtCore/qglobal.h>

#if defined(EXPORTWIDGET_LIBRARY)
#  define EXPORTWIDGETSHARED_EXPORT Q_DECL_EXPORT
#else
#  define EXPORTWIDGETSHARED_EXPORT Q_DECL_IMPORT
#endif

class QApplication;

namespace ExportWidget
{
    extern "C"
    {
        EXPORTWIDGETSHARED_EXPORT void Init();

        EXPORTWIDGETSHARED_EXPORT void ShowWidget();

        EXPORTWIDGETSHARED_EXPORT void unInit();
    }
}

#endif // EXPORTWIDGET_H
