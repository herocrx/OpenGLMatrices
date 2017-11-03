//
// Created by heroadm on 02.11.17.
//
#include <GL/glew.h>

#include "Window.h"

extern const char * vertexShaderCode;
extern const char * fragmentShaderCode;


void Window::paintGL() {
    glViewport(0,0,width(),height());
    glDrawArrays(GL_TRIANGLES,0 ,3 );

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
                    +1.0f, +0.0f, +1.0f,

            };
    GLuint triangleBufferID;

   // glGenBuffers(1,&triangleBufferID);
    glGenVertexArrays(1,&triangleBufferID);
    glBindBuffer(GL_ARRAY_BUFFER,triangleBufferID);
    glBufferData(triangleBufferID,sizeof(verts),verts,GL_STATIC_DRAW);

    glEnableVertexAttribArray(0);
    glVertexAttribPointer(0,2,GL_FLOAT,GL_FALSE,0, 0);
    glEnableVertexAttribArray(1);
    glVertexAttribPointer(1,3,GL_FLOAT,GL_FALSE,sizeof(float)*3,0) ;

    GLushort indices[] = { 0 , 1 , 2};
    GLuint indexBufferID;
  //  glGenBuffers(1,&indexBufferID);
    glGenVertexArrays(1,&indexBufferID);
    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER,indexBufferID);
    glBufferData(GL_ELEMENT_ARRAY_BUFFER,sizeof(indices),indices,GL_STATIC_DRAW);

}
void installShaders()
{
    GLuint vertexShaderID = glCreateShader(GL_FRAGMENT_SHADER);
    GLuint  fragmentShaderID = glCreateShader(GL_VERTEX_SHADER);
    glShaderSource(vertexShaderID,1,(const GLchar * const *)vertexShaderCode,0);
    glShaderSource(fragmentShaderID,1,(const GLchar * const *)fragmentShaderCode,0);
    glCompileShader(vertexShaderID);
    glCompileShader(fragmentShaderID);
    GLuint programID = glCreateProgram();
    glAttachShader(programID,vertexShaderID);
    glAttachShader(programID,fragmentShaderID);
    glLinkProgram(programID);
    glUseProgram(programID);
}

void Window::initializeGL() {
    glewInit();
    sendDataToOpenGL();
    installShaders();

}


