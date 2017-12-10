//
// Created by heroadm on 09.12.17.
//

#ifndef OPENGLTUTORIAL_OBJECTMATRIX_H
#define OPENGLTUTORIAL_OBJECTMATRIX_H

#include <QtWidgets/qgridlayout.h>
#include <QtWidgets/QLabel>

class ObjectMatrix : public  QGridLayout {
public:
    ObjectMatrix();
    ~ObjectMatrix();
    void init();
    void updateMatrix(float matrix[4][4]);
private:
    QLabel labelData[4][4];
    QVBoxLayout * TransRotateScaleLayout;
};


#endif //OPENGLTUTORIAL_OBJECTMATRIX_H
