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
#include "../../QT/ModelData.h"


class WorldManager : public QObject {
    Q_OBJECT
public:
    WorldManager(int, int, std::list<ModelData *>);
    void init();
    void updateCameraOrientation(QMouseEvent *);
    void updateCameraPosition(QKeyEvent *);
    void updateVerticies();

public slots:
        void drawObjects();

private:
    int width;
    int height;

    int numberObject;

    GLuint numIndicesArrow;
    GLuint numIndicesCube;
    GLuint numLinesCube;
    GLuint numIndicesTextureCube;
    GLuint numIndicesFloor;

    GLuint CubeVertexIndex;
    GLuint cubeBufferID;

    GLuint floorVertexIndex;
    GLuint floorBufferID;

    GLuint arrowVertexIndex;
    GLuint arrowBufferID;

    GLuint CubeTextureVertexIndex;
    GLuint cubeTextureBufferID;
    GLuint texBufferID;
    GLuint texCoordID, texID;

    ShapeData ground;
    ShapeData arrow;
    ShapeData Cube;
    ShapeData CubeTexture;

    ShadersManager shadersManager;
    Camera mainCamera;

    std::list<ModelData *> _modelData;

    const GLuint NUMBER_ELEMENTS_PER_VERTICE = 9;
    const GLuint VERTEX_BYTE_SIZE = NUMBER_ELEMENTS_PER_VERTICE * sizeof(float);
    void sendDataToOpenGL();
    void initalizeVAO();

};



#endif //OPENGLTUTORIAL_WORLD_H
