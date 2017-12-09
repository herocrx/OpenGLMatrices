//
// Created by heroadm on 19.11.17.
//

#include "QtMainWindow.h"


QtMainWindow::QtMainWindow() {

}

QtMainWindow::QtMainWindow(int width, int height) {

}

void QtMainWindow::changeSize() {

}

void QtMainWindow::init() {
    Window  * myGlWindow = new Window();
    GuiObjectControllerList.push_back(new GuiObjectController());
    GuiObjectControllerList.push_back(new GuiObjectController());
 //   GuiObjectControllerList.push_back(new GuiObjectController());
//    GuiObjectControllerList.push_back(new GuiObjectController());
    myGlWindow->setFixedSize(width(),height());
    QHBoxLayout * controllerLayout = new QHBoxLayout;
    for(std::list<GuiObjectController *>::const_iterator object = GuiObjectControllerList.begin(); object != GuiObjectControllerList.end() ; object++) {
        controllerLayout->addLayout(*object);

    }
    QVBoxLayout * mainLayout = new QVBoxLayout;
    mainLayout->addLayout(controllerLayout);
    mainLayout->addWidget(myGlWindow);
    this->setLayout(mainLayout);
}
