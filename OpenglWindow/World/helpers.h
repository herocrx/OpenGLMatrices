//
// Created by heroadm on 17.11.17.
//

#ifndef OPENGLTUTORIAL_HELPERS_H
#define OPENGLTUTORIAL_HELPERS_H

#include <iostream>
#include <glm/mat4x4.hpp>


void displayMatrix(glm::mat4 matrix)
{
    matrix = glm::transpose(matrix);
    std::cout  << std::endl << "MATRIX" << std::endl;

    std::cout << "[" << matrix[0][0] << "] [" <<  matrix[0][1] << "] [" <<  matrix[0][2] << "] [" << matrix[0][3] << "] " << std::endl;
    std::cout << "[" << matrix[1][0] << "] [" <<  matrix[1][1] << "] [" <<  matrix[1][2] << "] [" << matrix[1][3] << "] " << std::endl;
    std::cout << "[" << matrix[2][0] << "] [" <<  matrix[2][1] << "] [" <<  matrix[2][2] << "] [" << matrix[2][3] << "] " << std::endl;
    std::cout << "[" << matrix[3][0] << "] [" <<  matrix[3][1] << "] [" <<  matrix[3][2] << "] [" << matrix[3][3] << "] " << std::endl;
}


#endif //OPENGLTUTORIAL_HELPERS_H
