//
// Created by heroadm on 09.12.17.
//

#ifndef OPENGLTUTORIAL_GUIOBJECTCONTROLLER_H
#define OPENGLTUTORIAL_GUIOBJECTCONTROLLER_H


#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QVBoxLayout>
#include "../QT/ControlStrip.h"
#include "../QT/ObjectMatrix.h"

class  GuiObjectController : public QHBoxLayout
{
public:
    GuiObjectController();
    ~GuiObjectController();
    void updateMatrixData(float values[4][4]);
private:
    QVBoxLayout * TransRotateScaleLayout;
    ControlStrip * translate;
    ControlStrip * scale;
    ControlStrip * rotate;
    ObjectMatrix * matrixObject;
};

#endif //OPENGLTUTORIAL_GUIOBJECTCONTROLLER_H
