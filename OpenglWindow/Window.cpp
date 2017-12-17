//
// Created by heroadm on 02.11.17.
//

#include "Window.h"
#include <QtCore/QTimer>

Window::Window(std::list<ModelData *> ObjectsData) : worldManager(width(),height(),ObjectsData){
    QTimer *timer = new QTimer(this);
    timer->setInterval(1000);
    connect(timer, SIGNAL(timeout()), this, SLOT(updateVerticies()));
    timer->start(10);


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

void Window::updateVerticies()
{
    worldManager.drawObjects();
    repaint();
}

