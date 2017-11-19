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

private:
    bool checkShaderStatus(GLuint shaderID, char *shaderName);
    std::string ReadShaderCode(const char *filename);
    GLuint programID;
};


#endif //OPENGLTUTORIAL_SHADERS_H
