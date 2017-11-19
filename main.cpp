
#include <QtWidgets/qapplication.h>
#include <QtWidgets/qwidget.h>

#include "OpenglWindow/Window.h"

int main(int argc, char **argv)
{
    QApplication application(argc,argv);
    Window myGlWindow;
    myGlWindow.show();
    return application.exec();
}