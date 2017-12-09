//
// Created by heroadm on 09.12.17.
//

#include "ControlStrip.h"


ControlStrip::ControlStrip(std::string labelName){
    nameLabel = new QLabel( QString::fromStdString(labelName));
    sliderX = new DebugSlider;
    sliderY = new DebugSlider;
    sliderZ = new DebugSlider;
    init();
}
ControlStrip::~ControlStrip()
{
    delete nameLabel;
    delete sliderX;
    delete sliderY;
    delete sliderZ;
}


void ControlStrip::init()
{
    this->addWidget(nameLabel);
    this->addWidget(sliderX);
    this->addWidget(sliderY);
    this->addWidget(sliderZ);

}