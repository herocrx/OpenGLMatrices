//
// Created by heroadm on 02.11.17.
//

#include "Window.h"
#include <QtGui/QMouseEvent>






Window::Window() : worldManager(width(),height())
{

}


void Window::paintGL() {
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    worldManager.drawObjects();
}



void Window::initializeGL() {
    worldManager.init();
}

void Window::mouseMoveEvent(QMouseEvent * e) {
    worldManager.updateCameraOrientation(e);
    repaint();
}

void Window::keyPressEvent(QKeyEvent * e ) {
    worldManager.updateCameraPosition(e);
    repaint();
}


