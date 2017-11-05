//
// Created by heroadm on 02.11.17.
//
#include <GL/glew.h>
#include <iostream>

#include "Window.h"

extern const char * vertexShaderCode;
extern const char * fragmentShaderCode;


void Window::paintGL() {

}

void sendDataToOpenGL()
{

    GLfloat vertsW[] =
            {
                -0.8f, +0.5f, +0.0f,
                +0.0f, +0.0f, +1.0f,
                -0.7f, -0.5f, +0.0f,
                +1.0f, +0.0f, +0.0f,

                -0.7f, -0.5f, 0.0f,
                1.0f,  0.0f,0.0f,
                -0.6f, 0.5f, 0.0f,
                0.0f,  0.0f,1.0f,

                -0.5f, -0.5f, 0.0f,
                1.0f,  0.0f,0.0f,
                -0.6f, 0.5f, 0.0f,
                0.0f,  0.0f,1.0f,

                -0.5f, -0.5f, 0.0f,
                1.0f,  0.0f,0.0f,
                -0.4f, 0.5f, 0.0f,
                0.0f,  0.0f,1.0f,

            };

    GLfloat vertwE[]=
            {
                    -0.3f, +0.5f, +0.0f,
                    +0.0f, +0.0f, +1.0f,
                    -0.3f, -0.5f, +0.0f,
                    +0.0f, +0.0f, +1.0f,

                    -0.313f,+0.5f, +0.0f,
                    +0.0f,  +0.0f, +1.0f,
                    -0.10f, +0.5f, +0.0f,
                    +1.0f,  +0.0f, +0.0f,


                    -0.313f, 0.0f, 0.0f,
                    0.0f,  0.0f, 1.0f,
                    -0.10f, 0.0f, 0.0f,
                    1.0f,  0.0f, 0.0f,

                    -0.313f, -0.5f, 0.0f,
                    0.0f,  0.0f, 1.0f,
                    -0.10f, -0.5f, 0.0f,
                    1.0f,  0.0f, 0.0f,


            };

       GLfloat vertsR[] =
            {
                    -0.0f, 0.5f, 0.0f,
                    0.0f,  0.0f, 1.0f,
                    -0.0f, -0.5f, 0.0f,
                    1.0f,  0.0f, 0.0f,

                    -0.0f, 0.5f, 0.0f,
                    0.0f, 0.0f, 1.0f,
                    0.2f, 0.5f, 0.0f,
                    1.0f,  0.0f, 0.0f,

                    0.2f, 0.5f, 0.0f,
                    1.0f,  0.0f, 0.0f,
                    0.2f, -0.05f, 0.0f,
                    0.0f,  0.0f, 1.0f,

                    0.0f, 0.0f, 0.0f,
                    1.0f,  0.0f, 0.0f,
                    0.2f, -0.5f, 0.0f,
                    0.0f,  0.0f, 1.0f,

                    0.0f,  0.0f, 0.0f,
                    1.0f,  0.0f, 0.0f,
                    0.2f,  -0.0f, 0.0f,
                    0.0f,  0.0f, 1.0f,

            };

       GLfloat vertsK[]=
            {
                    0.4f,  0.5f, 0.0f,
                    1.0f,  0.0f, 0.0f,
                    0.4f,  -0.5f, 0.0f,
                    0.0f,  0.0f, 1.0f,

                    0.4f,  0.0f, 0.0f,
                    1.0f,  0.0f, 0.0f,
                    0.6f,  0.5f, 0.0f,
                    0.0f,  0.0f, 1.0f,

                    0.4f,  0.0f, 0.0f,
                    1.0f,  0.0f, 0.0f,
                    0.6f,  -0.5f, 0.0f,
                    0.0f,  0.0f, 1.0f
            };

             GLfloat vertsA[] =
            {
                    0.7f,  -0.5f, 0.0f,
                 1.0f,  0.0f, 0.0f,
                 0.8f,  0.5f, 0.0f,
                 0.0f,  0.0f, 1.0f,

                 0.8f,  0.5f, 0.0f,
                 0.0f,  0.0f, 1.0f,
                 0.9f,  -0.5f, 0.0f,
                 1.0f,  0.0f, 0.0f,

                 0.75f,  0.0f, 0.0f,
                 1.0f,  0.0f, 1.0f,
                 0.85f,  -0.0f, 0.0f,
                 0.0f,  0.0f, 1.0f,
            };



    const int numberBuffers = 2;

    GLuint triangleBufferID0[numberBuffers];
    GLuint triangleBufferID1;


    glGenBuffers(4, triangleBufferID0);
    glGenBuffers(1, &triangleBufferID1);
    std::cout << "First buffer: " << triangleBufferID0[0] << std::endl;
    std::cout << "Second buffer: " <<  triangleBufferID0[1] << std::endl;
    glBindBuffer(GL_ARRAY_BUFFER,triangleBufferID0[0]);
    glBufferData(GL_ARRAY_BUFFER, sizeof(float)*48 , vertsW, GL_STATIC_DRAW);


    glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, sizeof(float) * 6, 0);
    glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, sizeof(float) * 6, (char *) (sizeof(float) * 3));
    glEnableVertexAttribArray(0);
    glEnableVertexAttribArray(1);

    glDrawArrays(GL_LINES,0,24);

    glBindBuffer(GL_ARRAY_BUFFER,triangleBufferID0[1]);
    glBufferData(GL_ARRAY_BUFFER, sizeof(float)*60 , vertsR, GL_STATIC_DRAW);
    glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, sizeof(float) * 6, 0);
    glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, sizeof(float) * 6, (char *) (sizeof(float) * 3));
    glEnableVertexAttribArray(0);
    glEnableVertexAttribArray(1);
    glLineWidth(4.0);
    glDrawArrays(GL_LINES,0,32);


    glBindBuffer(GL_ARRAY_BUFFER,triangleBufferID1);
    glBufferData(GL_ARRAY_BUFFER, sizeof(float)*60, vertwE, GL_STATIC_DRAW);
    glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, sizeof(float) * 6, 0);
    glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, sizeof(float) * 6, (char *) (sizeof(float) * 3));
    glEnableVertexAttribArray(0);
    glEnableVertexAttribArray(1);
    glDrawArrays(GL_LINES,0,8);


    glBindBuffer(GL_ARRAY_BUFFER,triangleBufferID0[2]);
    glBufferData(GL_ARRAY_BUFFER, sizeof(float)*36, vertsK, GL_STATIC_DRAW);
    glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, sizeof(float) * 6, 0);
    glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, sizeof(float) * 6, (char *) (sizeof(float) * 3));
    glEnableVertexAttribArray(0);
    glEnableVertexAttribArray(1);
    glDrawArrays(GL_LINES,0,8);

    glLineWidth(2);
    glBindBuffer(GL_ARRAY_BUFFER,triangleBufferID0[3]);
    glBufferData(GL_ARRAY_BUFFER, sizeof(float)*36, vertsA, GL_STATIC_DRAW);
    glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, sizeof(float) * 6, 0);
    glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, sizeof(float) * 6, (char *) (sizeof(float) * 3));
    glEnableVertexAttribArray(0);
    glEnableVertexAttribArray(1);
    glDrawArrays(GL_LINES,0,8);



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
    glViewport(0,0,width(),height());

    installShaders();
    sendDataToOpenGL();

}


