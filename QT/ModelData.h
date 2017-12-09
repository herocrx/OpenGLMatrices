//
// Created by heroadm on 09.12.17.
//

#ifndef OPENGLTUTORIAL_MODELDATA_H
#define OPENGLTUTORIAL_MODELDATA_H

#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */

struct ModelData {
    ModelData()
    {
        const int maxValue = 10;
        srand (time(NULL));
        translateX = static_cast <float> (rand()) / (static_cast <float> (RAND_MAX/maxValue));
        translateY = static_cast <float> (rand()) / (static_cast <float> (RAND_MAX/maxValue));
        translateZ = static_cast <float> (rand()) / (static_cast <float> (RAND_MAX/maxValue));
        scaleX =  static_cast <float> (rand()) / (static_cast <float> (RAND_MAX/3));
        scaleY =  static_cast <float> (rand()) / (static_cast <float> (RAND_MAX/3));
        scaleZ = static_cast <float> (rand()) / (static_cast <float> (RAND_MAX/3));
        rotateX =  rand() % 90;
        rotateY =  rand() % 90;
        rotateZ =  rand() % 90;
    }
    void setTranslate(float x, float y, float z);
    void setScale(float x, float y, float z);
    void setRotate(float x, float y, float z);
    void setObjectMatrix(float [4][4]);
    float translateX;
    float translateY;
    float translateZ;
    float scaleX;
    float scaleY;
    float scaleZ;
    float rotateX;
    float rotateY;
    float rotateZ;
    float objectMatrix[4][4];
};


#endif //OPENGLTUTORIAL_MODELDATA_H
