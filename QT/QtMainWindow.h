//
// Created by heroadm on 19.11.17.
//

#ifndef OPENGLTUTORIAL_QTMAINWINDOW_H
#define OPENGLTUTORIAL_QTMAINWINDOW_H
#include <QtWidgets/qwidget.h>

#include <QtWidgets/qapplication.h>
#include <QtWidgets/qwidget.h>
#include "../OpenglWindow/Window.h"
#include "GuiObjectController.h"

class QtMainWindow : public QWidget {
public:
    QtMainWindow();
    QtMainWindow(int, int);
    void changeSize();
    void init();

private:
    std::list<GuiObjectController *> GuiObjectControllerList;
};


#endif //OPENGLTUTORIAL_QTMAINWINDOW_H
