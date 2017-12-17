//
// Created by heroadm on 09.12.17.
//

#include "GuiObjectController.h"

void GuiObjectController::updateMatrixData(float (*values)[4]) {

}

GuiObjectController::~GuiObjectController() {
    delete translate;
    delete scale;
    delete rotate;
    delete  matrixObject;
    delete TransRotateScaleLayout;

}

GuiObjectController::GuiObjectController(ModelData * storageData) {
    attachedModel = storageData;
    translate = new ControlStrip("Translate: ",&attachedModel->translate);
    translate->updateValues(&attachedModel->translate);
    scale = new ControlStrip("Scale:     ",&storageData->scale);
    scale->updateValues(&attachedModel->scale);
    rotate = new ControlStrip("Rotate:  ",&attachedModel->rotate,-180.0f,180.0f);
    rotate->updateValues(&attachedModel->rotate);
    matrixObject = new ObjectMatrix(&attachedModel->objectMatrix);
    TransRotateScaleLayout = new QVBoxLayout;

    TransRotateScaleLayout->addLayout(translate->getQHBoxLayout());
    TransRotateScaleLayout->addLayout(scale->getQHBoxLayout());
    TransRotateScaleLayout->addLayout(rotate->getQHBoxLayout());

    this->addLayout(TransRotateScaleLayout);
    this->addLayout(matrixObject);
    this->addWidget(new QLabel("   "));

}


void GuiObjectController::setupSignals(ControlStrip * strip, float x, float y, float z ) {

}

ControlStrip *GuiObjectController::getTranslateStrip() {
    return translate;
}

ControlStrip *GuiObjectController::getScaleStrip() {
    return scale;
}
ControlStrip * GuiObjectController::getRotateStrip() {
    return rotate;
}


void GuiObjectController::updateMatrix() {

}
