//
// Created by heroadm on 17.11.17.
//

#ifndef OPENGLTUTORIAL_SHADERS_H
#define OPENGLTUTORIAL_SHADERS_H


#include <iostream>
#include <GL/glew.h>

class ShadersManager {
public:
    void installShaders();
    int getCurrentProgramID();

    void attachTextureShaders();

    void attachShaders();

private:
    bool checkShaderStatus(GLuint shaderID, char *shaderName);
    std::string ReadShaderCode(const char *filename);

    GLuint programShaderID;
    GLuint programTextureShaderID;
    GLuint vertexShaderID;
    GLuint fragmentShaderID;
    GLuint vertexTextureShaderID;
    GLuint fragmentTextureShaderID;
};


#endif //OPENGLTUTORIAL_SHADERS_H
