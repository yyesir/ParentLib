#include "exportwidget.h"

int main(int argc, char *argv[])
{
    for(int i = 0; i < 1; i++)
    {
        ExportWidget::Init();
        ExportWidget::ShowWidget();
        ExportWidget::unInit();
    }
    return 0;
}
