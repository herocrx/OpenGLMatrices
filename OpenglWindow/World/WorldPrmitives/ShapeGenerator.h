//
// Created by heroadm on 12.11.17.
//

#ifndef OPENGLTUTORIAL_SHAPEGENERATOR_H
#define OPENGLTUTORIAL_SHAPEGENERATOR_H


#include "ShapeData.h"
#ifndef __glew_h__
#define __glew_h__
#include "GL/glew.h"
#endif /* __glew_h__ */

class ShapeGenerator {
public:
    static ShapeData createCube();

    static ShapeData createTriangle();

    static ShapeData createFloor();

    static ShapeData createArrow();
};


#endif //OPENGLTUTORIAL_SHAPEGENERATOR_H
