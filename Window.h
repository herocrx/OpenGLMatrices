//
// Created by heroadm on 02.11.17.
//

#ifndef OPENGLTUTORIAL_WINDOW_H
#define OPENGLTUTORIAL_WINDOW_H


#include <QtOpenGL/QGLWidget>


class Window : public QGLWidget {
public:

private:

private:
    void paintGL();
    void initializeGL();
};


#endif //OPENGLTUTORIAL_WINDOW_H
