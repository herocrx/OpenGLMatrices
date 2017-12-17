//
// Created by heroadm on 09.12.17.
//

#ifndef OPENGLTUTORIAL_OBJECTMATRIX_H
#define OPENGLTUTORIAL_OBJECTMATRIX_H

#include <QtWidgets/qgridlayout.h>
#include <QtWidgets/QLabel>
#include <glm/gtc/matrix_transform.hpp>

class ObjectMatrix : public  QGridLayout {
    Q_OBJECT
public:
    ObjectMatrix(glm::mat4 *);
    ~ObjectMatrix();
    void init();

private:
    glm::mat4 * matrixObject;
    QLabel labelData[4][4];
    QVBoxLayout * TransRotateScaleLayout;
private slots:
        void updateMatrix();
};


#endif //OPENGLTUTORIAL_OBJECTMATRIX_H
