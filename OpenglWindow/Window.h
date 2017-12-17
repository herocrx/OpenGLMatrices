//
// Created by heroadm on 02.11.17.
//

#ifndef OPENGLTUTORIAL_WINDOW_H
#define OPENGLTUTORIAL_WINDOW_H


#include <QtOpenGL/QGLWidget>
#include "World/WorldManager.h"
#include "../QT/ModelData.h"

class Window : public QGLWidget {
    Q_OBJECT
public:
    Window(std::list<ModelData *> ObjectsData);
    void keyPressEvent(QKeyEvent *) override ;
private slots:
    void updateVerticies();

private:
    void paintGL();
    void initializeGL();
    void mouseMoveEvent(QMouseEvent *) override ;

    WorldManager worldManager;
    std::list<ModelData *> ObjectsToDrawData;
};



#endif //OPENGLTUTORIAL_WINDOW_H
