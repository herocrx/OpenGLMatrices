//
// Created by heroadm on 09.12.17.
//

#include "ObjectMatrix.h"

void ObjectMatrix::updateMatrix(float (*matrix)[4]) {

}

ObjectMatrix::~ObjectMatrix() {

}

void ObjectMatrix::init() {

}

ObjectMatrix::ObjectMatrix() {
    for (int row = 0; row < 4; ++row) {
        for (int column = 0; column < 4; ++column) {
         //   labelData[row][column].setMaximumHeight(12);
            this->addWidget(&(labelData[row][column]), row, column);
            labelData[row][column].setText(QString("%1,%2").arg(row).arg(column));
        }
    }

}
