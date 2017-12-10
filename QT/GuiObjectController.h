//
// Created by heroadm on 09.12.17.
//

#ifndef OPENGLTUTORIAL_GUIOBJECTCONTROLLER_H
#define OPENGLTUTORIAL_GUIOBJECTCONTROLLER_H


#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QVBoxLayout>
#include "../QT/ControlStrip.h"
#include "../QT/ObjectMatrix.h"
#include "ModelData.h"

class  GuiObjectController : public QHBoxLayout
{
public:
    GuiObjectController(ModelData *);
    ~GuiObjectController();
    void updateMatrixData(float values[4][4]);
    ControlStrip * getTranslateStrip();
    ControlStrip * getScaleStrip();
    ControlStrip * getRotateStrip();
private:
    ModelData * attachedModel;
    QVBoxLayout * TransRotateScaleLayout;
    ControlStrip * translate;
    ControlStrip * scale;
    ControlStrip * rotate;
    ObjectMatrix * matrixObject;
    void setupSignals(ControlStrip *,float,float,float);
};

#endif //OPENGLTUTORIAL_GUIOBJECTCONTROLLER_H
