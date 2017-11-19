//
// Created by heroadm on 19.11.17.
//

#include "QtMainWindow.h"
#include "../GuiComponents/DebugSlider.h"
#include <QtWidgets/QLabel>


QtMainWindow::QtMainWindow() {

}

QtMainWindow::QtMainWindow(int width, int height) {

}

void QtMainWindow::changeSize() {

}

void QtMainWindow::init() {
    QLabel * scaleTextLabel =new QLabel("Scale        ");
    DebugSlider * scaleX = new DebugSlider();
    DebugSlider * scaleY = new DebugSlider();
    DebugSlider * scaleZ = new DebugSlider();
    QHBoxLayout * scaleHLayout = new QHBoxLayout;
    scaleHLayout->addWidget(scaleTextLabel);
    scaleHLayout->addWidget(scaleX);
    scaleHLayout->addWidget(scaleY);
    scaleHLayout->addWidget(scaleZ);

    QLabel * rotateTextLabel = new QLabel("Rotate     ");
    DebugSlider * rotateX    = new DebugSlider();
    DebugSlider * rotateY    = new DebugSlider();
    DebugSlider * rotateZ    = new DebugSlider();
    QHBoxLayout * rotateHLayout = new QHBoxLayout;
    rotateHLayout->addWidget(rotateTextLabel);
    rotateHLayout->addWidget(rotateX);
    rotateHLayout->addWidget(rotateY);
    rotateHLayout->addWidget(rotateZ);

    QLabel * transitionTextLabel = new QLabel("Transition");
    DebugSlider * transX    = new DebugSlider();
    DebugSlider * transY    = new DebugSlider();
    DebugSlider * transZ    = new DebugSlider();
    QHBoxLayout * transitionHLayout = new QHBoxLayout;
    transitionHLayout->addWidget(transitionTextLabel);
    transitionHLayout->addWidget(transX);
    transitionHLayout->addWidget(transY);
    transitionHLayout->addWidget(transZ);


    QGridLayout * gridLayout = new QGridLayout();
    for (int row = 0; row < 4; ++row) {
        for (int column = 0; column < 4; ++column) {
            auto label = new QLabel();
            gridLayout->addWidget(label, row, column);
            label->setText(QString("%1,%2").arg(row).arg(column));
        }
    }


    Window  * myGlWindow = new Window();
    myGlWindow->setFixedSize(width(),height());



    QVBoxLayout * TransRotateScaleLayout = new QVBoxLayout;
    TransRotateScaleLayout->addLayout(scaleHLayout);
    TransRotateScaleLayout->addLayout(rotateHLayout);
    TransRotateScaleLayout->addLayout(transitionHLayout);

    QHBoxLayout * controlLayout = new QHBoxLayout;
    controlLayout->addLayout(TransRotateScaleLayout);
    controlLayout->addLayout(gridLayout);


    QVBoxLayout * mainLayout = new QVBoxLayout;
    mainLayout->addLayout(controlLayout);
    mainLayout->addWidget(myGlWindow);
    this->setLayout(mainLayout);
    this->setMinimumSize(800,600);
}
