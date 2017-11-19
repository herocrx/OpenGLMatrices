


#include "QT/QtMainWindow.h"

int main(int argc, char **argv)
{
    QApplication application(argc,argv);
    QtMainWindow * mainWindow = new QtMainWindow;
    mainWindow->init();
    mainWindow->show();
    return application.exec();
}