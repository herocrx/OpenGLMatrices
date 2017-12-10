//
// Created by heroadm on 09.12.17.
//

#include <iostream>
#include "ControlStrip.h"

ControlStrip::ControlStrip(std::string labelName, StripData * stripData){
    stripModelData = stripData;
    nameLabel = new QLabel( QString::fromStdString(labelName));
    sliderX = new DebugSlider;
    sliderY = new DebugSlider;
    sliderZ = new DebugSlider;
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
    std::cout << "Slider X data has changed: " << data <<  std::endl;
    stripModelData->valueX = data;
    return;
}
void ControlStrip::updateSliderYData(float data )
{
    std::cout << "Slider Y data has changed:  " << data << std::endl;
    stripModelData->valueY = data;
    return;
}
void ControlStrip::updateSliderZData(float data )
{
    std::cout << "Slider Z  data has changed: " << data << std::endl;
    stripModelData->valueZ = data;
    return;
}

QHBoxLayout *ControlStrip::getQHBoxLayout() {
    return layout;
}
