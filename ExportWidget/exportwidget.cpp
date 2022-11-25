#include "exportwidget.h"
#include "form.h"

#include <QApplication>
#include <QDebug>

static QApplication* _Application;

EXPORTWIDGETSHARED_EXPORT void ExportWidget::Init()
{
    _Application = NULL;
}


EXPORTWIDGETSHARED_EXPORT void ExportWidget::ShowWidget()
{
    if(_Application == NULL)
    {
        int argc = 0;
        _Application = new QApplication(argc, NULL);
        Form* _fm = new Form();
        _fm->show();
        _Application->exec();
    }
}

EXPORTWIDGETSHARED_EXPORT void ExportWidget::unInit()
{
    if(_Application != NULL)
    {
        _Application->quit();
        _Application = NULL;
    }
}

