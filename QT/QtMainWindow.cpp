

//
// Created by heroadm on 19.11.17.
//

#include "QtMainWindow.h"
#include <ctime>
QtMainWindow::QtMainWindow() {

}

QtMainWindow::QtMainWindow(int width, int height) {

}

void QtMainWindow::changeSize() {

}

void QtMainWindow::init() {
    const int elementNumber = 2;
    for(int i = 0 ; i<elementNumber ; i++)
    {
        ModelData * ObjectModelData = new ModelData;
        ModelDataContainer.push_back(ObjectModelData);
        GuiObjectControllerList.push_back(new GuiObjectController(ObjectModelData));
    }
    myGlWindow = new Window(ModelDataContainer) ;
    myGlWindow->setFixedSize(width(),height());
    QHBoxLayout * controllerLayout = new QHBoxLayout;
    for(std::list<GuiObjectController *>::const_iterator object = GuiObjectControllerList.begin(); object != GuiObjectControllerList.end() ; object++) {
        controllerLayout->addLayout(*object);

    }
    QVBoxLayout * mainLayout = new QVBoxLayout;
    mainLayout->addLayout(controllerLayout);
    mainLayout->addWidget(myGlWindow);
    this->setLayout(mainLayout);
    setupSignals();
}

void QtMainWindow::setupSignals() {


}


void QtMainWindow::keyPressEvent(QKeyEvent * e ) {
    myGlWindow->keyPressEvent(e);
    repaint();
}