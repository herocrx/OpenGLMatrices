//
// Created by heroadm on 09.12.17.
//

#ifndef OPENGLTUTORIAL_MODELDATA_H
#define OPENGLTUTORIAL_MODELDATA_H

#include <stdlib.h>     /* srand, rand */

#include "StripData.h"

struct ModelData {
    ModelData()
    {
        const int maxValue = 10;

        translate.valueX = static_cast <float> (rand()) / (static_cast <float> (RAND_MAX/maxValue));
        translate.valueY = static_cast <float> (rand()) / (static_cast <float> (RAND_MAX/maxValue));
        translate.valueZ = static_cast <float> (rand()) / (static_cast <float> (RAND_MAX/maxValue));
        scale.valueX =  static_cast <float> (rand()) / (static_cast <float> (RAND_MAX/3));
        scale.valueY =  static_cast <float> (rand()) / (static_cast <float> (RAND_MAX/3));
        scale.valueZ =  static_cast <float> (rand()) / (static_cast <float> (RAND_MAX/3));
        rotate.valueX =  rand() % 90;
        rotate.valueY =  rand() % 90;
        rotate.valueZ =  rand() % 90;
    }
    void setTranslate(float x, float y, float z);
    void setScale(float x, float y, float z);
    void setRotate(float x, float y, float z);
    void setObjectMatrix(float [4][4]);
    StripData translate;
    StripData scale;
    StripData rotate;
    float objectMatrix[4][4];
};


#endif //OPENGLTUTORIAL_MODELDATA_H
