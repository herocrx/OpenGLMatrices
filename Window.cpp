//
// Created by heroadm on 02.11.17.
//
#include <GL/glew.h>
#include <iostream>
#include <glm/vec3.hpp>
#include <glm/vec4.hpp>
#include <glm/mat4x4.hpp>
#include "Vertex.h"
#include "Window.h"
#include "ShapeData.h"
#include "ShapeGenerator.h"
#include <glm/gtc/matrix_transform.hpp>
#include <fstream>

GLuint programID;
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

const GLuint NUMBER_ELEMENTS_PER_VERTICE = 9;
const GLuint VERTEX_BYTE_SIZE = NUMBER_ELEMENTS_PER_VERTICE * sizeof(float);

void sendDataToOpenGL();

void displayMatrix(glm::mat4 matrix)
{
    matrix = glm::transpose(matrix);
    std::cout  << std::endl << "MATRIX" << std::endl;

    std::cout << "[" << matrix[0][0] << "] [" <<  matrix[0][1] << "] [" <<  matrix[0][2] << "] [" << matrix[0][3] << "] " << std::endl;
    std::cout << "[" << matrix[1][0] << "] [" <<  matrix[1][1] << "] [" <<  matrix[1][2] << "] [" << matrix[1][3] << "] " << std::endl;
    std::cout << "[" << matrix[2][0] << "] [" <<  matrix[2][1] << "] [" <<  matrix[2][2] << "] [" << matrix[2][3] << "] " << std::endl;
    std::cout << "[" << matrix[3][0] << "] [" <<  matrix[3][1] << "] [" <<  matrix[3][2] << "] [" << matrix[3][3] << "] " << std::endl;
}




void Window::paintGL() {
    glClear(GL_DEPTH_BUFFER_BIT | GL_COLOR_BUFFER_BIT);
    glViewport(0, 0, width(), height());

    glm::mat4 modelTransformMatrix =  glm::translate(glm::mat4(1.0f), glm::vec3(2.0f, 0.0f, 0.0f));
    modelTransformMatrix = glm::rotate(modelTransformMatrix,glm::radians(30.0f),glm::vec3(0,1,0));
    modelTransformMatrix = glm::rotate(modelTransformMatrix,glm::radians(70.0f),glm::vec3(1,0,0));
    modelTransformMatrix = glm::rotate(modelTransformMatrix,glm::radians(60.0f),glm::vec3(0,0,1));


    displayMatrix(modelTransformMatrix);
    glm::mat4 projectionMatrix = glm::perspective(glm::radians(60.0f), float(width()) / height(), 0.1f, 25.0f);
    glm::mat4 viewMatrix = glm::lookAt(glm::vec3(10.0f,3.0f,3.0f),glm::vec3(0.0f,0.0f,0.0f),glm::vec3(0,1,0));
    GLint modelTransformMatrixLocation = glGetUniformLocation(programID, "modelTransformMatrix");
    GLint projectionMatrixLocation = glGetUniformLocation(programID,"projectedMatrix");
    GLint projectToViewMatrixLocation = glGetUniformLocation(programID, "viewMatrix");
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
    glDrawArrays(GL_LINES,0,ground.numberVertices);


    modelTransformMatrix = glm::translate(glm::mat4(1.0f),glm::vec3(-2.0f,-3.0f,2.0f));
    modelTransformMatrix = glm::rotate(modelTransformMatrix,glm::radians(90.0f),glm::vec3(1,0,0));
    glUniformMatrix4fv(modelTransformMatrixLocation, 1, GL_FALSE, &modelTransformMatrix[0][0]);
    glBindVertexArray(arrowVertexIndex);
    glDrawElements(GL_TRIANGLES,numIndicesArrow,GL_UNSIGNED_SHORT,0);

}

void initalizeVAO()
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
;
}


void sendDataToOpenGL()
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

bool checkShaderStatus(GLuint shaderID, char *shaderName) {
    GLint compileStatus;
    glGetShaderiv(shaderID, GL_INFO_LOG_LENGTH, &compileStatus);
    if (compileStatus != GL_NO_ERROR) {
        std::cout << shaderName << " shader has a bug" << std::endl;
        GLint infoLogLength;
        glGetShaderiv(shaderID, GL_INFO_LOG_LENGTH, &infoLogLength);
          GLchar *buffer = new GLchar[infoLogLength];
        GLsizei bufferSize;
        glGetShaderInfoLog(shaderID, infoLogLength, &bufferSize, buffer);
        std::cout << buffer << std::endl;
        delete[] buffer;
        return false;
    } else
        std::cout << shaderName << " shader is compiled" << std::endl;
    return true;
}

std::string ReadShaderCode(const char *filename) {
    std::cout << "Your file to read: " << filename << std::endl;
    std::ifstream meInput(filename);
    if (!meInput.good()) {
        std::cout << " File failed to load!" << std::endl;
        exit(1);
    } else
        std::cout << "Shader file is readable" << std::endl;
    return std::string((std::istreambuf_iterator<char>(meInput)),
                       (std::istreambuf_iterator<char>()));
}

void installShaders() {
    GLuint vertexShaderID = glCreateShader(GL_VERTEX_SHADER);
    GLuint fragmentShaderID = glCreateShader(GL_FRAGMENT_SHADER);
    const GLchar *adapter[1];
    std::string temp = ReadShaderCode("VertexShaderCode.glsl");
    adapter[0] = temp.c_str();
    glShaderSource(vertexShaderID, 1, adapter, 0);
    temp = ReadShaderCode("FragmentShaderCode.glsl");
    adapter[0] = temp.c_str();
    glShaderSource(fragmentShaderID, 1, adapter, 0);
    glCompileShader(vertexShaderID);
    glCompileShader(fragmentShaderID);
    if (!checkShaderStatus(fragmentShaderID, "Fragment") ||
        !checkShaderStatus(vertexShaderID, "Vertex"))
      return;
    programID = glCreateProgram();

    glAttachShader(programID, vertexShaderID);
    glAttachShader(programID, fragmentShaderID);
    glLinkProgram(programID);
    std::cout << "Program ID = " << programID << std::endl;
    glUseProgram(programID);
}


void Window::initializeGL() {
    glewInit();
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glViewport(0,0,width(),height());
    glEnable(GL_DEPTH_TEST);
    installShaders();
    initalizeVAO();
    sendDataToOpenGL();
}


