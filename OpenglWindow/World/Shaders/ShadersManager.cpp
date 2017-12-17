//
// Created by heroadm on 17.11.17.
//

#include "ShadersManager.h"
#include <fstream>

#define C_TEXT( text ) ((char*)std::string( text ).c_str())

bool ShadersManager::checkShaderStatus(GLuint shaderID, char *shaderName) {
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

std::string ShadersManager::ReadShaderCode(const char *filename) {
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

void ShadersManager::installShaders() {
    vertexShaderID = glCreateShader(GL_VERTEX_SHADER);
    fragmentShaderID = glCreateShader(GL_FRAGMENT_SHADER);

    const GLchar *adapter[1];
    std::string temp = ReadShaderCode("Shaders/VertexShaderCode.glsl");
    adapter[0] = temp.c_str();
    glShaderSource(vertexShaderID, 1, adapter, 0);
    temp = ReadShaderCode("Shaders/FragmentShaderCode.glsl");
    adapter[0] = temp.c_str();
    glShaderSource(fragmentShaderID, 1, adapter, 0);
    glCompileShader(vertexShaderID);
    glCompileShader(fragmentShaderID);
    if (!checkShaderStatus(fragmentShaderID, C_TEXT("Fragment")) ||
        !checkShaderStatus(vertexShaderID, C_TEXT("Vertex")))
        return;
    programShaderID = glCreateProgram();
    glLinkProgram(programShaderID);
    glAttachShader(programShaderID, vertexShaderID);
    glAttachShader(programShaderID, fragmentShaderID);
    glLinkProgram(programShaderID);
    std::cout << "Program ID = " << programShaderID << std::endl;
    glUseProgram(programShaderID);

    vertexTextureShaderID = glCreateShader(GL_VERTEX_SHADER);
    fragmentTextureShaderID = glCreateShader(GL_FRAGMENT_SHADER);
    temp = ReadShaderCode("Shaders/FragmentTextureShaderCode.glsl");
    adapter[0] = temp.c_str();
    glShaderSource(fragmentTextureShaderID, 1, adapter, 0);
    temp = ReadShaderCode("Shaders/VertexTextureShaderCode.glsl");
    adapter[0] = temp.c_str();
    glShaderSource(vertexTextureShaderID, 1, adapter, 0);
    glCompileShader(vertexTextureShaderID);
    glCompileShader(fragmentTextureShaderID);
    glAttachShader(programTextureShaderID, vertexTextureShaderID);
    glAttachShader(programTextureShaderID, fragmentTextureShaderID);
    glLinkProgram(programTextureShaderID);
    if (!checkShaderStatus(fragmentTextureShaderID, C_TEXT("FragmentTexture")) ||
        !checkShaderStatus(vertexTextureShaderID, C_TEXT("VertexTexture")))
        return;
    programTextureShaderID = glCreateProgram();
    glLinkProgram(programTextureShaderID);
}


int ShadersManager::getCurrentProgramID() {
    return programUsed;
}

void ShadersManager::attachTextureShaders() {
    programUsed = programTextureShaderID;
    glUseProgram(programTextureShaderID);
}

void ShadersManager::attachShaders() {
    programUsed = programShaderID;
    glUseProgram(programShaderID);
}
