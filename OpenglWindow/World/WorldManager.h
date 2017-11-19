//
// Created by heroadm on 17.11.17.
//

#ifndef OPENGLTUTORIAL_WORLD_H
#define OPENGLTUTORIAL_WORLD_H


#ifndef __glew_h__
#define __glew_h__
#include "GL/glew.h"
#endif /* __glew_h__ */

#include "WorldPrmitives/ShapeData.h"
#include "Shaders/ShadersManager.h"
#include "Camera/Camera.h"
#include <QtGui/QMouseEvent>
//


class WorldManager {

public:
    WorldManager(int, int);
    void init();
    void drawObjects();
    void updateMousePosition(QMouseEvent *);

private:
    int width;
    int height;

    GLuint numIndicesArrow;
    GLuint numIndicesCube;

    GLuint CubeVertexIndex;
    GLuint cubeBufferID;

    GLuint floorVertexIndex;
    GLuint floorBufferID;

    GLuint arrowVertexIndex;
    GLuint arrowBufferID;

    ShapeData ground;
    ShapeData arrow;
    ShapeData Cube;

    ShadersManager shadersManager;
    Camera mainCamera;

    const GLuint NUMBER_ELEMENTS_PER_VERTICE = 9;
    const GLuint VERTEX_BYTE_SIZE = NUMBER_ELEMENTS_PER_VERTICE * sizeof(float);
    void sendDataToOpenGL();
    void initalizeVAO();
};



#endif //OPENGLTUTORIAL_WORLD_H
