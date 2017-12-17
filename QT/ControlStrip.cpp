//
// Created by heroadm on 09.12.17.
//

#include <iostream>
#include "ControlStrip.h"

ControlStrip::ControlStrip(std::string labelName, StripData * stripData, float min, float max){
    stripModelData = stripData;
    nameLabel = new QLabel( QString::fromStdString(labelName));
    sliderX = new DebugSlider(1.0f,min,max);
    sliderY = new DebugSlider(1.0f,min,max);
    sliderZ = new DebugSlider(1.0f,min,max);
    layout = new QHBoxLayout;
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
    layout->addWidget(nameLabel);
    layout->addWidget(sliderX);
    layout->addWidget(sliderY);
    layout->addWidget(sliderZ);
    connect(sliderX,SIGNAL(valueChanged(float)),this,SLOT(updateSliderXData(float)));
    connect(sliderY,SIGNAL(valueChanged(float)),this,SLOT(updateSliderYData(float)));
    connect(sliderZ,SIGNAL(valueChanged(float)),this,SLOT(updateSliderZData(float)));
    return;
}

void ControlStrip::updateValues(StripData * stripRandomData ) {
    sliderX->setValue(stripRandomData->valueX);
    sliderY->setValue(stripRandomData->valueY);
    sliderZ->setValue(stripRandomData->valueZ);
    return;
}


void ControlStrip::updateSliderXData(float data )
{
    stripModelData->valueX = data;
    return;
}
void ControlStrip::updateSliderYData(float data )
{
    stripModelData->valueY = data;
    return;
}
void ControlStrip::updateSliderZData(float data )
{
    stripModelData->valueZ = data;
    return;
}

QHBoxLayout *ControlStrip::getQHBoxLayout() {
    return layout;
}
