//
// Created by heroadm on 19.11.17.
//

#ifndef OPENGLTUTORIAL_QTMAINWINDOW_H
#define OPENGLTUTORIAL_QTMAINWINDOW_H
#include <QtWidgets/qwidget.h>

#include <QtWidgets/qapplication.h>
#include <QtWidgets/qwidget.h>
#include "../OpenglWindow/Window.h"
#include <QtWidgets/qpushbutton.h>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QVBoxLayout>

class QtMainWindow : public QWidget {
public:
    QtMainWindow();
    QtMainWindow(int, int);
    void changeSize();
    void init();

private:

};


#endif //OPENGLTUTORIAL_QTMAINWINDOW_H
