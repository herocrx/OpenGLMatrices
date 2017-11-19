//
// Created by heroadm on 02.11.17.
//
#include <GL/glew.h>
#include <iostream>
#include <glm/vec3.hpp>
#include <glm/vec4.hpp>
#include <glm/mat4x4.hpp>
#include "World/WorldPrmitives/Vertex.h"
#include "Window.h"
#include "World/WorldPrmitives/ShapeData.h"
#include "World/WorldPrmitives/ShapeGenerator.h"
#include <glm/gtc/matrix_transform.hpp>
#include "World/helpers.h"
#include <fstream>






Window::Window() : worldManager(width(),height())
{

}


void Window::paintGL() {

}



void Window::initializeGL() {
    glewInit();
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glViewport(0,0,width(),height());
    glEnable(GL_DEPTH_TEST);
    worldManager.init();
}

