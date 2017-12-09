//
// Created by heroadm on 09.12.17.
//

#include "GuiObjectController.h"

GuiObjectController::GuiObjectController()
{
    translate = new ControlStrip("Translate");
    scale = new ControlStrip("Scale:     ");
    rotate = new ControlStrip("Rotate:  ");
    matrixObject = new ObjectMatrix;

    TransRotateScaleLayout = new QVBoxLayout;
    TransRotateScaleLayout->addLayout(translate);
    TransRotateScaleLayout->addLayout(scale);
    TransRotateScaleLayout->addLayout(rotate);

    this->addLayout(TransRotateScaleLayout);
    this->addLayout(matrixObject);
    this->addWidget(new QLabel("   "));

}

void GuiObjectController::updateMatrixData(float (*values)[4]) {

}

GuiObjectController::~GuiObjectController() {
    delete translate;
    delete scale;
    delete rotate;
    delete  matrixObject;
    delete TransRotateScaleLayout;

}
