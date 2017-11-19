//
// Created by heroadm on 17.11.17.
//

#include "GL/glew.h"
#include "WorldManager.h"
#include "WorldPrmitives/ShapeGenerator.h"
#include <glm/vec4.hpp>
#include <glm/mat4x4.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include "Shaders/ShadersManager.h"

WorldManager::WorldManager(int width, int height) : width(width),height(height){

}




void WorldManager::sendDataToOpenGL()
{
    glBindVertexArray(floorVertexIndex);
    glBindBuffer(GL_ARRAY_BUFFER, floorBufferID);
    ground = ShapeGenerator::createFloor();
    glBufferData(GL_ARRAY_BUFFER, ground.vertexBufferSize(), ground.vertices, GL_STATIC_DRAW);


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

    glm::mat4 modelTransformMatrix = glm::translate(glm::mat4(1.0f), glm::vec3(2.0f, 0.0f, 0.0f));
    modelTransformMatrix = glm::rotate(modelTransformMatrix, glm::radians(30.0f), glm::vec3(0, 1, 0));
    modelTransformMatrix = glm::rotate(modelTransformMatrix, glm::radians(70.0f), glm::vec3(1, 0, 0));
    modelTransformMatrix = glm::rotate(modelTransformMatrix, glm::radians(60.0f), glm::vec3(0, 0, 1));


   // displayMatrix(modelTransformMatrix);
    glm::mat4 projectionMatrix = glm::perspective(glm::radians(60.0f), float(width) / height, 0.1f, 25.0f);
    glm::mat4 viewMatrix = glm::lookAt(glm::vec3(10.0f, 3.0f, 3.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(0, 1, 0));
    GLint modelTransformMatrixLocation = glGetUniformLocation(shadersManager.getCurrentProgramID(), "modelTransformMatrix");
    GLint projectionMatrixLocation = glGetUniformLocation(shadersManager.getCurrentProgramID(), "projectedMatrix");
    GLint projectToViewMatrixLocation = glGetUniformLocation(shadersManager.getCurrentProgramID(), "viewMatrix");
    glUniformMatrix4fv(modelTransformMatrixLocation, 1, GL_FALSE, &modelTransformMatrix[0][0]);
    glUniformMatrix4fv(projectToViewMatrixLocation, 1, GL_FALSE, &viewMatrix[0][0]);
    glUniformMatrix4fv(projectionMatrixLocation, 1, GL_FALSE, &projectionMatrix[0][0]);


    glBindVertexArray(CubeVertexIndex);
    glDrawElements(GL_TRIANGLES, numIndicesCube, GL_UNSIGNED_SHORT, 0);


    modelTransformMatrix = glm::translate(glm::mat4(1.0f), glm::vec3(-2.0f, 4.0f, 3.0f));
    glUniformMatrix4fv(modelTransformMatrixLocation, 1, GL_FALSE, &modelTransformMatrix[0][0]);
    glBindVertexArray(CubeVertexIndex);
    glDrawElements(GL_TRIANGLES, numIndicesCube, GL_UNSIGNED_SHORT, 0);


    modelTransformMatrix = glm::mat4(1.0f);
    glUniformMatrix4fv(modelTransformMatrixLocation, 1, GL_FALSE, &modelTransformMatrix[0][0]);
    glBindVertexArray(floorVertexIndex);
    glDrawArrays(GL_LINES, 0, ground.numberVertices);


    modelTransformMatrix = glm::translate(glm::mat4(1.0f), glm::vec3(-2.0f, -3.0f, 2.0f));
    modelTransformMatrix = glm::rotate(modelTransformMatrix, glm::radians(90.0f), glm::vec3(1, 0, 0));
    glUniformMatrix4fv(modelTransformMatrixLocation, 1, GL_FALSE, &modelTransformMatrix[0][0]);
    glBindVertexArray(arrowVertexIndex);
    glDrawElements(GL_TRIANGLES, numIndicesArrow, GL_UNSIGNED_SHORT, 0);

}

void WorldManager::init() {
    shadersManager.installShaders();
    initalizeVAO();
    sendDataToOpenGL();
}



void WorldManager::initalizeVAO()
{
    //floor
    glGenBuffers(1, &floorBufferID);
    glGenVertexArrays(1,&floorVertexIndex);
    glBindVertexArray(floorVertexIndex);
    glBindBuffer(GL_ARRAY_BUFFER, floorBufferID);
    glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, VERTEX_BYTE_SIZE, 0);
    glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, VERTEX_BYTE_SIZE, (char *) (sizeof(float) * 3));
    glEnableVertexAttribArray(0);
    glEnableVertexAttribArray(1);
    glLineWidth(1);

    //Cube
    glGenVertexArrays(1,&CubeVertexIndex);
    glBindVertexArray(CubeVertexIndex);
    glGenBuffers(1, &cubeBufferID);
    glBindBuffer(GL_ARRAY_BUFFER, cubeBufferID);
    glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, VERTEX_BYTE_SIZE, 0);
    glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, VERTEX_BYTE_SIZE, (char *) (sizeof(float) * 3));
    glEnableVertexAttribArray(0);
    glEnableVertexAttribArray(1);

    //arrow
    glGenVertexArrays(1,&arrowVertexIndex);
    glBindVertexArray(arrowVertexIndex);
    glGenBuffers(1, &arrowBufferID);
    glBindBuffer(GL_ARRAY_BUFFER,arrowBufferID);
    glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, VERTEX_BYTE_SIZE, 0);
    glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, VERTEX_BYTE_SIZE, (char *) (sizeof(float) * 3));
    glEnableVertexAttribArray(0);
    glEnableVertexAttribArray(1);

}