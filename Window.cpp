//
// Created by heroadm on 02.11.17.
//
#include <GL/glew.h>
#include <iostream>

#include "Window.h"

extern const char * vertexShaderCode;
extern const char * fragmentShaderCode;


GLuint indexBufferID;

void Window::paintGL() {
    glViewport(0,0,width(),height());
    glDrawArrays(GL_TRIANGLES, 0, 3);


}

void sendDataToOpenGL()
{
    GLfloat verts [] =
            {
                    +0.0f, +1.0f,
                    +1.0f, +0.0f, +0.0f,
                    -1.0f, -1.0f,
                    +0.0f, +1.0f, +0.0f,
                    +1.0f, -1.0f,
                    +0.0f, +0.0f, +1.0f,

            };
    GLuint triangleBufferID;


    glGenVertexArrays(1,&triangleBufferID);
    glBindVertexArray(triangleBufferID);

    glGenBuffers(1, &triangleBufferID);
    glBindBuffer(GL_ARRAY_BUFFER,triangleBufferID);
    glBufferData(GL_ARRAY_BUFFER, sizeof(verts), &verts, GL_STATIC_DRAW);

    glVertexAttribPointer(0, 2, GL_FLOAT, GL_FALSE, sizeof(float) * 5, 0);
    glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, sizeof(float) * 5, (char *) (sizeof(float) * 2));
    glEnableVertexAttribArray(0);
    glEnableVertexAttribArray(1);
    //glDrawElements(GL_TRIANGLES,3,GL_UNSIGNED_SHORT,&indexBufferID );


    GLushort indices[] = { 0 , 1 , 2};
    glGenBuffers(1, &indexBufferID);
    glGenVertexArrays(1,&indexBufferID);
    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER,indexBufferID);
    glBufferData(GL_ELEMENT_ARRAY_BUFFER,sizeof(indices),indices,GL_STATIC_DRAW);


}

bool checkShaderStatus(GLuint shaderID, char *shaderName) {
    if (glGetError() != GL_NO_ERROR) {
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

void installShaders()
{
    GLuint vertexShaderID = glCreateShader(GL_VERTEX_SHADER);
    glShaderSource(vertexShaderID, 1, &vertexShaderCode, 0);
    glCompileShader(vertexShaderID);
    if (!checkShaderStatus(vertexShaderID, static_cast<char *>("Vertex")))
        return;

    GLuint fragmentShaderID = glCreateShader(GL_FRAGMENT_SHADER);
    glShaderSource(fragmentShaderID, 1, &fragmentShaderCode, 0);
    glCompileShader(fragmentShaderID);

    if (!checkShaderStatus(fragmentShaderID, static_cast<char *>("Fragment")))
        return;

    GLuint programID = glCreateProgram();
    glAttachShader(programID,vertexShaderID);
    glAttachShader(programID,fragmentShaderID);
    glLinkProgram(programID);
    glUseProgram(programID);
}

void Window::initializeGL() {
    glewInit();
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    installShaders();
    sendDataToOpenGL();

}


