//
// Created by heroadm on 09.12.17.
//

#ifndef OPENGLTUTORIAL_CONTROLSTRIP_H
#define OPENGLTUTORIAL_CONTROLSTRIP_H

#include <QtWidgets/QLabel>
#include <QtWidgets/qpushbutton.h>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QVBoxLayout>
#include "../GuiComponents/DebugSlider.h"


class ControlStrip : public  QHBoxLayout {
public:
    ControlStrip(std::string);
    ~ControlStrip();
private:
    QLabel      * nameLabel;
    DebugSlider * sliderX;
    DebugSlider * sliderY;
    DebugSlider * sliderZ;
    void init();
};


#endif //OPENGLTUTORIAL_CONTROLSTRIP_H
