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
#include "StripData.h"


class ControlStrip : public QWidget {
    Q_OBJECT
public:
    QHBoxLayout * getQHBoxLayout();
    ControlStrip(std::string, StripData *);
    ~ControlStrip();
    void updateValues(StripData *);
private:
    QLabel      * nameLabel;
    StripData * stripModelData;
    DebugSlider * sliderX;
    DebugSlider * sliderY;
    DebugSlider * sliderZ;
    void init();
    QHBoxLayout * layout;
private slots:
    void updateSliderXData(float);
    void updateSliderYData(float);
    void updateSliderZData(float);
};


#endif //OPENGLTUTORIAL_CONTROLSTRIP_H
