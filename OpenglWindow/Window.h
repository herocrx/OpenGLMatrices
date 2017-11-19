//
// Created by heroadm on 02.11.17.
//

#ifndef OPENGLTUTORIAL_WINDOW_H
#define OPENGLTUTORIAL_WINDOW_H


#include <QtOpenGL/QGLWidget>

#include "World/WorldManager.h"
//#include <GL/glew.h>

class Window : public QGLWidget {
public:
    Window();
private:

    void paintGL();
    void initializeGL();
    WorldManager worldManager;
    //todo
    //add interaction with keyboard
    //add interaction with mouse
};



#endif //OPENGLTUTORIAL_WINDOW_H
