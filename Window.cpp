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
    glDrawArrays(GL_LINES,0,40);


}

void sendDataToOpenGL()
{

    GLfloat verts [] =
            {
                    -1.0f, +0.5f, +0.0f,
                 +0.0f, +0.0f, +1.0f,
                 -0.9f, -0.5f, +0.0f,
                 +1.0f, +0.0f, +0.0f,

                 -0.9f, -0.5f, 0.0f,
                 1.0f,  0.0f,0.0f,
                 -0.8f, 0.5f, 0.0f,
                 0.0f,  0.0f,1.0f,

                 -0.7f, -0.5f, 0.0f,
                 1.0f,  0.0f,0.0f,
                -0.8f, 0.5f, 0.0f,
                0.0f,  0.0f,1.0f,

                -0.7f, -0.5f, 0.0f,
                1.0f,  0.0f,0.0f,
                -0.6f, 0.5f, 0.0f,
                0.0f,  0.0f,1.0f,

                 -0.5f, 0.5f, 0.0f,
                 0.0f,  0.0f,1.0f,
                 -0.5f, -0.5f, 0.0f,
                 1.0f,  0.0f,0.0f,

                 -0.513f, 0.5f, 0.0f,
                 0.0f,  0.0f, 1.0f,
                 -0.30f, 0.5f, 0.0f,
                 1.0f,  0.0f, 0.0f,


                 -0.513f, 0.0f, 0.0f,
                 0.0f,  0.0f, 1.0f,
                 -0.30f, 0.0f, 0.0f,
                 1.0f,  0.0f, 0.0f,

                 -0.513f, -0.5f, 0.0f,
                 0.0f,  0.0f, 1.0f,
                 -0.30f, -0.5f, 0.0f,
                 1.0f,  0.0f, 0.0f,

                 -0.20f, 0.5f, 0.0f,
                 0.0f,  0.0f, 1.0f,
                 -0.20f, -0.5f, 0.0f,
                 1.0f,  0.0f, 0.0f,

                 -0.20f, 0.5f, 0.0f,
                 0.0f,  0.0f, 1.0f,
                 -0.0f, 0.5f, 0.0f,
                 1.0f,  0.0f, 0.0f,

                 0.0f, 0.5f, 0.0f,
                 1.0f,  0.0f, 0.0f,
                 0.0f, -0.05f, 0.0f,
                 0.0f,  0.0f, 1.0f,

                 0.0f, 0.5f, 0.0f,
                 1.0f,  0.0f, 0.0f,
                 0.0f, -0.02f, 0.0f,
                 0.0f,  0.0f, 1.0f,

                 -0.2f,  0.0f, 0.0f,
                 1.0f,  0.0f, 0.0f,
                 0.0f,  0.0f, 0.0f,
                 0.0f,  0.0f, 1.0f,

                 -0.2f,  0.0f, 0.0f,
                 1.0f,  0.0f, 0.0f,
                 0.0f,  -0.5f, 0.0f,
                 0.0f,  0.0f, 1.0f,

                 0.2f,  0.5f, 0.0f,
                 1.0f,  0.0f, 0.0f,
                 0.2f,  -0.5f, 0.0f,
                 0.0f,  0.0f, 1.0f,

                 0.2f,  0.0f, 0.0f,
                 1.0f,  0.0f, 0.0f,
                 0.4f,  0.5f, 0.0f,
                 0.0f,  0.0f, 1.0f,

                 0.2f,  0.0f, 0.0f,
                 1.0f,  0.0f, 0.0f,
                 0.4f,  -0.5f, 0.0f,
                 0.0f,  0.0f, 1.0f,


                 0.5f,  -0.5f, 0.0f,
                 1.0f,  0.0f, 0.0f,
                 0.6f,  0.5f, 0.0f,
                 0.0f,  0.0f, 1.0f,

                 0.6f,  0.5f, 0.0f,
                 0.0f,  0.0f, 1.0f,
                 0.7f,  -0.5f, 0.0f,
                 1.0f,  0.0f, 0.0f,

                 0.55f,  0.0f, 0.0f,
                 1.0f,  0.0f, 1.0f,
                 0.65f,  -0.0f, 0.0f,
                 0.0f,  0.0f, 1.0f,




            };
    GLuint triangleBufferID;

    glGenVertexArrays(1,&triangleBufferID);
    glBindVertexArray(triangleBufferID);

    glGenBuffers(1, &triangleBufferID);
    glBindBuffer(GL_ARRAY_BUFFER,triangleBufferID);
    glBufferData(GL_ARRAY_BUFFER, sizeof(verts), &verts, GL_STATIC_DRAW);

    glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, sizeof(float) * 6, 0);
    glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, sizeof(float) * 6, (char *) (sizeof(float) * 3));
    glEnableVertexAttribArray(0);
    glEnableVertexAttribArray(1);
    glLineWidth(8.0);
    //glDrawArrays(GL_POINTS,0,3);

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


