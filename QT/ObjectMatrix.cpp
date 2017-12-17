//
// Created by heroadm on 09.12.17.
//

#include "ObjectMatrix.h"
#include <QtCore/QTimer>
#include <iostream>

void ObjectMatrix::updateMatrix() {
    for (int row = 0; row < 4; ++row) {
        for (int column = 0; column < 4; ++column) {
            labelData[row][column].setText(QString::number((*matrixObject)[column][row],'f',2));
        }
    }
}

ObjectMatrix::~ObjectMatrix() {

}

void ObjectMatrix::init() {

}

ObjectMatrix::ObjectMatrix(glm::mat4 * matrix) {
    matrixObject = matrix;
    for (int row = 0; row < 4; ++row) {
        for (int column = 0; column < 4; ++column) {
            this->addWidget(&(labelData[row][column]), row, column);
            labelData[row][column].setText(QString("%1,%2").arg(row).arg(column));
        }
    }
    QTimer *timer = new QTimer(this);
    timer->setInterval(1000);
    connect(timer, SIGNAL(timeout()), this, SLOT(updateMatrix()));
    timer->start(10);
}
