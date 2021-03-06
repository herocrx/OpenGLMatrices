//
// Created by heroadm on 17.11.17.
//

#include "GL/glew.h"
#include "WorldManager.h"
#include "WorldPrmitives/ShapeGenerator.h"
#include <glm/gtc/matrix_transform.hpp>
#include <QtCore/QTimer>

#define STB_IMAGE_IMPLEMENTATION

#include <stb_image.h>

#define STREAM_OUTPUT_VEC3(vector) std::cout <<  "vector -> x: " << vector.x << " " << "y: " << vector.y << " z: " << vector.z << std::endl;



WorldManager::WorldManager(int width, int height, std::list<ModelData *> _modelData) : width(width),height(height), _modelData(_modelData), mainCamera(){
    std::cout << "GL window width: " << width <<  " height: " << height  << std::endl;
}




void WorldManager::sendDataToOpenGL()
{
    ground = ShapeGenerator::createFloor();
    glBindVertexArray(floorVertexIndex);
    glBindBuffer(GL_ARRAY_BUFFER, floorBufferID);
    glBufferData(GL_ARRAY_BUFFER, ground.vertexBufferSize(), ground.vertices, GL_STATIC_DRAW);
    numLinesCube = ground.vertexBufferSize();
/*
    GLuint IndicesFloorBufferID;
    glGenBuffers(1, &IndicesFloorBufferID);
    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, IndicesFloorBufferID);
    glBufferData(GL_ELEMENT_ARRAY_BUFFER, ground.indexBufferSize(), ground.indices, GL_STATIC_DRAW);
    numIndicesFloor = ground.numIndices;
    */
    ground.cleanup();


    Cube = ShapeGenerator::createCube();
    glBindBuffer(GL_ARRAY_BUFFER, cubeBufferID);
    glBindVertexArray(CubeVertexIndex);
    glBufferData(GL_ARRAY_BUFFER, Cube.vertexBufferSize(), Cube.vertices, GL_STATIC_DRAW);
    GLuint IndicesCubeBufferID;
    glGenBuffers(1, &IndicesCubeBufferID);
    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, IndicesCubeBufferID);
    glBufferData(GL_ELEMENT_ARRAY_BUFFER, Cube.indexBufferSize(), Cube.indices, GL_STATIC_DRAW);
    numIndicesCube = Cube.numIndices;
    Cube.cleanup();


    arrow = ShapeGenerator::createArrow();
    glBindBuffer(GL_ARRAY_BUFFER, arrowBufferID);
    glBindVertexArray(arrowVertexIndex);
    glBufferData(GL_ARRAY_BUFFER, arrow.vertexBufferSize(), arrow.vertices, GL_STATIC_DRAW);
    GLuint IndicesArrowBufferID;
    glGenBuffers(1, &IndicesArrowBufferID);
    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, IndicesArrowBufferID);
    glBufferData(GL_ELEMENT_ARRAY_BUFFER, arrow.indexBufferSize(), arrow.indices, GL_STATIC_DRAW);
    numIndicesArrow = arrow.numIndices;
    arrow.cleanup();
}


void WorldManager::drawObjects()
{
    shadersManager.attachShaders();


    glm::mat4 modelTransformMatrix;


   // displayMatrix(modelTransformMatrix);
    glm::mat4 projectionMatrix = glm::perspective(glm::radians(80.0f), float(width) / height, 0.1f, 25.0f);
    glm::mat4 viewMatrix = mainCamera.getViewToWorldMatrix();


    GLint modelTransformMatrixLocation = glGetUniformLocation(shadersManager.getCurrentProgramID(), "modelTransformMatrix");
    GLint projectionMatrixLocation = glGetUniformLocation(shadersManager.getCurrentProgramID(), "projectedMatrix");
    GLint projectToViewMatrixLocation = glGetUniformLocation(shadersManager.getCurrentProgramID(), "viewMatrix");

    glUniformMatrix4fv(modelTransformMatrixLocation, 1, GL_FALSE, &modelTransformMatrix[0][0]);
    glUniformMatrix4fv(projectToViewMatrixLocation, 1, GL_FALSE, &viewMatrix[0][0]);
    glUniformMatrix4fv(projectionMatrixLocation, 1, GL_FALSE, &projectionMatrix[0][0]);

    modelTransformMatrix = glm::mat4(1.0f);
    glUniformMatrix4fv(modelTransformMatrixLocation, 1, GL_FALSE, &modelTransformMatrix[0][0]);
    glBindVertexArray(floorVertexIndex);
    glDrawArrays(GL_LINES, 0, numLinesCube);



    std::list<ModelData *>::iterator it = _modelData.begin();
    modelTransformMatrix = glm::translate(glm::mat4(1.0f),
                                          glm::vec3((*it)->translate.valueX,(*it)->translate.valueY, (*it)->translate.valueZ));
    modelTransformMatrix = glm::rotate(modelTransformMatrix, glm::radians((*it)->rotate.valueX), glm::vec3(1, 0, 0));
    modelTransformMatrix = glm::rotate(modelTransformMatrix, glm::radians((*it)->rotate.valueY), glm::vec3(0, 1, 0));
    modelTransformMatrix = glm::rotate(modelTransformMatrix, glm::radians((*it)->rotate.valueZ), glm::vec3(0, 0, 1));
    modelTransformMatrix = glm::scale(modelTransformMatrix,glm::vec3((*it)->scale.valueX,(*it)->scale.valueY,(*it)->scale.valueZ));

    glUniformMatrix4fv(modelTransformMatrixLocation, 1, GL_FALSE, &modelTransformMatrix[0][0]);
    glBindVertexArray(CubeVertexIndex);
    glDrawElements(GL_TRIANGLES, numIndicesCube, GL_UNSIGNED_SHORT, 0);
    (*it)->objectMatrix = modelTransformMatrix;
    it = std::next(it,1);
    modelTransformMatrix = glm::translate(glm::mat4(1.0f),
                                          glm::vec3((*it)->translate.valueX,(*it)->translate.valueY, (*it)->translate.valueZ));
    modelTransformMatrix = glm::rotate(modelTransformMatrix, glm::radians((*it)->rotate.valueX), glm::vec3(1, 0, 0));
    modelTransformMatrix = glm::rotate(modelTransformMatrix, glm::radians((*it)->rotate.valueY), glm::vec3(0, 1, 0));
    modelTransformMatrix = glm::rotate(modelTransformMatrix, glm::radians((*it)->rotate.valueZ), glm::vec3(0, 0, 1));
    modelTransformMatrix = glm::scale(modelTransformMatrix,glm::vec3((*it)->scale.valueX,(*it)->scale.valueY,(*it)->scale.valueZ));
    (*it)->objectMatrix = modelTransformMatrix;
    glUniformMatrix4fv(modelTransformMatrixLocation, 1, GL_FALSE, &modelTransformMatrix[0][0]);
    glBindVertexArray(arrowVertexIndex);
    glDrawElements(GL_TRIANGLES, numIndicesArrow, GL_UNSIGNED_SHORT, 0);

}

void WorldManager::init() {
    glewInit();
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glEnable(GL_CULL_FACE);
    glViewport(0,0,width,height);
    glEnable(GL_DEPTH_TEST);
    shadersManager.installShaders();
    initalizeVAO();
    sendDataToOpenGL();

}


void WorldManager::initalizeVAO() {
    //floor
    glGenVertexArrays(1, &floorVertexIndex);
    glBindVertexArray(floorVertexIndex);
    glGenBuffers(1, &floorBufferID);
    glBindBuffer(GL_ARRAY_BUFFER, floorBufferID);
    glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, VERTEX_BYTE_SIZE, 0);
    glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, VERTEX_BYTE_SIZE, (char *) (sizeof(float) * 3));
    glEnableVertexAttribArray(0);
    glEnableVertexAttribArray(1);
    glLineWidth(1);

    //Cube
    glGenVertexArrays(1, &CubeVertexIndex);
    glBindVertexArray(CubeVertexIndex);
    glGenBuffers(1, &cubeBufferID);
    glBindBuffer(GL_ARRAY_BUFFER, cubeBufferID);
    glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, VERTEX_BYTE_SIZE, 0);
    glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, VERTEX_BYTE_SIZE, (char *) (sizeof(float) * 3));
    glEnableVertexAttribArray(0);
    glEnableVertexAttribArray(1);

    //arrow
    glGenVertexArrays(1, &arrowVertexIndex);
    glBindVertexArray(arrowVertexIndex);
    glGenBuffers(1, &arrowBufferID);
    glBindBuffer(GL_ARRAY_BUFFER, arrowBufferID);
    glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, VERTEX_BYTE_SIZE, 0);
    glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, VERTEX_BYTE_SIZE, (char *) (sizeof(float) * 3));
    glEnableVertexAttribArray(0);
    glEnableVertexAttribArray(1);
}

void WorldManager::updateCameraPosition(QKeyEvent * e) {
    switch (e->key()) {
        case Qt::Key::Key_W:
            mainCamera.moveForward();
            break;
        case Qt::Key::Key_S:
            mainCamera.moveBackward();
            break;
        case Qt::Key::Key_A:
            mainCamera.moveLeft();
            break;
        case Qt::Key::Key_D:
            mainCamera.moveRight();
            break;
        case Qt::Key::Key_Q:
            mainCamera.moveUp();
            break;
        case Qt::Key::Key_E:
            mainCamera.moveDown();
            break;
    }
    std::cout << mainCamera << std::endl;
}

void WorldManager::updateCameraOrientation(QMouseEvent * e) {
    STREAM_OUTPUT_VEC3(glm::vec3(e->x(),e->y(),0.0));
    mainCamera.orientationUpdate(glm::vec2(e->x(),e->y()));
    std::cout << mainCamera << std::endl;
}


