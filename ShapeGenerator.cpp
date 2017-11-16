//
// Created by heroadm on 12.11.17.
//
#include <vector>
#include "ShapeData.h"
#include "ShapeGenerator.h"

#include <iostream>


ShapeData ShapeGenerator::createTriangle() {
    ShapeData returnObject;

    Vertex vertices[] =
            {
                    glm::vec3(-1.0f, +1.0f, +0.0f),
                    glm::vec3(+0.0f, +0.0f, +1.0f),
                    glm::vec3(+0.0f, +0.0f, +1.0f),
                    glm::vec3(+1.0f, +1.0f, +0.0f),
                    glm::vec3(+1.0f, +0.0f, +0.0f),
                    glm::vec3(+0.0f, +0.0f, +1.0f),
                    glm::vec3(+0.0f, -1.0f, +0.0f),
                    glm::vec3(+0.0f, +1.0f, +0.0f),
                    glm::vec3(+0.0f, +0.0f, +1.0f),
            };
    returnObject.numberVertices = sizeof(vertices) / sizeof(*vertices);
    returnObject.vertices = new Vertex[returnObject.numberVertices];
    memcpy(returnObject.vertices, vertices, sizeof(vertices));


    GLushort indices[] = {0, 1, 2};
    returnObject.numIndices = (sizeof(indices) / sizeof(*indices));
    returnObject.indices = new GLushort[returnObject.numIndices];
    memcpy(returnObject.indices, indices, sizeof(indices));
    return returnObject;
}


ShapeData ShapeGenerator::createCube() {
    ShapeData returnObject;

    Vertex vertices[] =
            {
                    glm::vec3(-1.0f, +1.0f, +1.0f),  // 0
                    glm::vec3(+1.0f, +0.0f, +0.0f),    // Color
                    glm::vec3(+0.0f, +1.0f, +0.0f),  // Normal
                    glm::vec3(+1.0f, +1.0f, +1.0f),  // 1
                    glm::vec3(+0.0f, +1.0f, +0.0f),    // Color
                    glm::vec3(+0.0f, +1.0f, +0.0f),  // Normal
                    glm::vec3(+1.0f, +1.0f, -1.0f),  // 2
                    glm::vec3(+0.0f, +0.0f, +1.0f),  // Color
                    glm::vec3(+0.0f, +1.0f, +0.0f),  // Normal
                    glm::vec3(-1.0f, +1.0f, -1.0f),  // 3
                    glm::vec3(+1.0f, +1.0f, +1.0f),  // Color
                    glm::vec3(+0.0f, +1.0f, +0.0f),  // Normal
                    glm::vec3(-1.0f, +1.0f, -1.0f),  // 4
                    glm::vec3(+1.0f, +0.0f, +1.0f),  // Color
                    glm::vec3(+0.0f, +0.0f, -1.0f),  // Normal
                    glm::vec3(+1.0f, +1.0f, -1.0f),  // 5
                    glm::vec3(+0.0f, +0.5f, +0.2f),  // Color
                    glm::vec3(+0.0f, +0.0f, -1.0f),  // Normal
                    glm::vec3(+1.0f, -1.0f, -1.0f),  // 6
                    glm::vec3(+0.8f, +0.6f, +0.4f),  // Color
                    glm::vec3(+0.0f, +0.0f, -1.0f),  // Normal
                    glm::vec3(-1.0f, -1.0f, -1.0f),  // 7
                    glm::vec3(+0.3f, +1.0f, +0.5f),  // Color
                    glm::vec3(+0.0f, +0.0f, -1.0f),  // Normal
                    glm::vec3(+1.0f, +1.0f, -1.0f),  // 8
                    glm::vec3(+0.2f, +0.5f, +0.2f),  // Color
                    glm::vec3(+1.0f, +0.0f, +0.0f),  // Normal
                    glm::vec3(+1.0f, +1.0f, +1.0f),  // 9
                    glm::vec3(+0.9f, +0.3f, +0.7f),  // Color
                    glm::vec3(+1.0f, +0.0f, +0.0f),  // Normal
                    glm::vec3(+1.0f, -1.0f, +1.0f),  // 10
                    glm::vec3(+0.3f, +0.7f, +0.5f),  // Color
                    glm::vec3(+1.0f, +0.0f, +0.0f),  // Normal
                    glm::vec3(+1.0f, -1.0f, -1.0f),  // 11
                    glm::vec3(+0.5f, +0.7f, +0.5f),  // Color
                    glm::vec3(+1.0f, +0.0f, +0.0f),  // Normal
                    glm::vec3(-1.0f, +1.0f, +1.0f),  // 12
                    glm::vec3(+0.7f, +0.8f, +0.2f),  // Color
                    glm::vec3(-1.0f, +0.0f, +0.0f),  // Normal
                    glm::vec3(-1.0f, +1.0f, -1.0f),  // 13
                    glm::vec3(+0.5f, +0.7f, +0.3f),  // Color
                    glm::vec3(-1.0f, +0.0f, +0.0f),  // Normal
                    glm::vec3(-1.0f, -1.0f, -1.0f),  // 14
                    glm::vec3(+0.4f, +0.7f, +0.7f),  // Color
                    glm::vec3(-1.0f, +0.0f, +0.0f),  // Normal
                    glm::vec3(-1.0f, -1.0f, +1.0f),  // 15
                    glm::vec3(+0.2f, +0.5f, +1.0f),  // Color
                    glm::vec3(-1.0f, +0.0f, +0.0f),  // Normal
                    glm::vec3(+1.0f, +1.0f, +1.0f),  // 16
                    glm::vec3(+0.6f, +1.0f, +0.7f),  // Color
                    glm::vec3(+0.0f, +0.0f, +1.0f),  // Normal
                    glm::vec3(-1.0f, +1.0f, +1.0f),  // 17
                    glm::vec3(+0.6f, +0.4f, +0.8f),  // Color
                    glm::vec3(+0.0f, +0.0f, +1.0f),  // Normal
                    glm::vec3(-1.0f, -1.0f, +1.0f),  // 18
                    glm::vec3(+0.2f, +0.8f, +0.7f),  // Color
                    glm::vec3(+0.0f, +0.0f, +1.0f),  // Normal
                    glm::vec3(+1.0f, -1.0f, +1.0f),  // 19
                    glm::vec3(+0.2f, +0.7f, +1.0f),  // Color
                    glm::vec3(+0.0f, +0.0f, +1.0f),  // Normal
                    glm::vec3(+1.0f, -1.0f, -1.0f),  // 20
                    glm::vec3(+0.8f, +0.3f, +0.7f),  // Color
                    glm::vec3(+0.0f, -1.0f, +0.0f),  // Normal
                    glm::vec3(-1.0f, -1.0f, -1.0f),  // 21
                    glm::vec3(+0.8f, +0.9f, +0.5f),  // Color
                    glm::vec3(+0.0f, -1.0f, +0.0f),  // Normal
                    glm::vec3(-1.0f, -1.0f, +1.0f),  // 22
                    glm::vec3(+0.5f, +0.8f, +0.5f),  // Color
                    glm::vec3(+0.0f, -1.0f, +0.0f),  // Normal
                    glm::vec3(+1.0f, -1.0f, +1.0f),  // 23
                    glm::vec3(+0.9f, +1.0f, +0.2f),  // Color
                    glm::vec3(+0.0f, -1.0f, +0.0f),  // Normal
            };

    returnObject.numberVertices = sizeof(vertices) / sizeof(Vertex);
    returnObject.vertices = new Vertex[returnObject.numberVertices];
    memcpy(returnObject.vertices, vertices, sizeof(vertices));


    unsigned short stackIndices[] = {
            0, 1, 2, 0, 2, 3, // Top
            4, 5, 6, 4, 6, 7, // Front
            8, 9, 10, 8, 10, 11, // Right
            12, 13, 14, 12, 14, 15, // Left
            16, 17, 18, 16, 18, 19, // Back
            20, 22, 21, 20, 23, 22, // Bottom
    };
    returnObject.numIndices = sizeof(stackIndices) / sizeof(unsigned short);
    returnObject.indices = new GLushort[returnObject.numIndices];
    memcpy(returnObject.indices, stackIndices, sizeof(stackIndices));

    return returnObject;

}
ShapeData ShapeGenerator::createFloor()
    {
    ShapeData returnObject;
    const float SpaceBetweenLines = 1.0f;
    const float minX = -10;
    const float maxX = 10;
    const float minY = -10;
    const float maxY = 10;
    int Occurences = 0;
    for ( float i = minY ; i<=maxY; i+=SpaceBetweenLines)
        Occurences+=2;
    for ( float i = minX ; i<=maxX; i+=SpaceBetweenLines)
        Occurences+=2;
    Vertex myVector[Occurences];

    int lineVertex = 0;
        for ( float i = minY ; i<=maxY; )
    {
        myVector[lineVertex].position   = glm::vec3(minX, i, +0.0f);
        myVector[lineVertex].color      = glm::vec3(+1.0f, +0.0f, +0.0f);
        myVector[lineVertex].normal     = glm::vec3(+0.0f, +1.0f, +0.0f);
        myVector[lineVertex+1].position = glm::vec3(maxX, i, +0.0f);
        myVector[lineVertex+1].color    = glm::vec3(+1.0f, +0.0f, +0.0f);
        myVector[lineVertex+1].normal   = glm::vec3(+0.0f, +1.0f, +0.0f);
        std::cout <<  "Your position to draw: " << i << std::endl;
        i+=SpaceBetweenLines;
        lineVertex+=2;
    }
        for ( float i = minX ; i<=maxX;)
    {
        myVector[lineVertex].position   = glm::vec3(i,minY, +0.0f);
        myVector[lineVertex].color      = glm::vec3(+1.0f, +0.0f, +0.0f);
        myVector[lineVertex].normal     = glm::vec3(+0.0f, +1.0f, +0.0f);
        myVector[lineVertex+1].position = glm::vec3(i, maxY, +0.0f);
        myVector[lineVertex+1].color    = glm::vec3(1.0f,  +0.0f, +0.0f);
        myVector[lineVertex+1].normal   = glm::vec3(+0.0f, +1.0f, +0.0f);
        i+=SpaceBetweenLines;
        lineVertex+=2;
    }
        lineVertex-=2;
    returnObject.numberVertices = Occurences;
    returnObject.vertices = new Vertex[Occurences];
    memcpy(returnObject.vertices,myVector,sizeof(myVector));
    return returnObject;


}
