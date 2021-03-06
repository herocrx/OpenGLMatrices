//
// Created by heroadm on 12.11.17.
//

#ifndef OPENGLTUTORIAL_SHAPEDATA_H
#define OPENGLTUTORIAL_SHAPEDATA_H

#include "Vertex.h"
#ifndef __glew_h__
#define __glew_h__
#include "GL/glew.h"
#endif /* __glew_h__ */


struct ShapeData {
    Vertex *vertices;
    GLuint numberVertices;
    GLushort *indices;
    GLuint numIndices;

    ShapeData() :
            vertices(0),
            numberVertices(0),
            indices(0),
            numIndices(0) {
    }

    GLsizeiptr vertexBufferSize() const {
        return numberVertices * sizeof(Vertex);
    }

    GLsizeiptr indexBufferSize() const {
        return numIndices * sizeof(GLushort);
    }

    void cleanup() {
        delete[] vertices;
        delete[] indices;
        numberVertices = numIndices = 0;
    }

};



#endif //OPENGLTUTORIAL_SHAPEDATA_H
