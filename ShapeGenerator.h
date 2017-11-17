//
// Created by heroadm on 12.11.17.
//

#ifndef OPENGLTUTORIAL_SHAPEGENERATOR_H
#define OPENGLTUTORIAL_SHAPEGENERATOR_H


#include "ShapeData.h"


class ShapeGenerator {
public:
    static ShapeData createCube();

    static ShapeData createTriangle();

    static ShapeData createFloor();

    static ShapeData createArrow();
};


#endif //OPENGLTUTORIAL_SHAPEGENERATOR_H
