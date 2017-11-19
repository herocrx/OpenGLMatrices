//
// Created by heroadm on 12.11.17.
//

#include "Camera.h"
#include <glm/gtc/matrix_transform.hpp>
#include <iostream>



glm::mat4 Camera::getViewToWorldMatrix() const {
    return glm::lookAt(position,
                       glm::vec3(position.x + viewDirection.x,position.y + viewDirection.y, position.z + viewDirection.z),
                       up);

}

void Camera::mouseUpdate(const glm::vec2 &newMousePosition) {
    glm::vec3 mouseDelta = glm::vec3(newMousePosition.x-oldMousePosition.x,newMousePosition.y-oldMousePosition.y ,0.0f);
    if(glm::length(mouseDelta) > 80.0f)
    {
        oldMousePosition = newMousePosition;
        return;
    }
    glm::vec3 toRotateAround = glm::cross(viewDirection,up);
    const float factor = 0.2;
    glm::mat4 rotator = glm::rotate(-glm::mat4(1.0f),glm::radians(factor*mouseDelta.x),up)  *
                        glm::rotate(-glm::mat4(1.0f),glm::radians(factor*mouseDelta.y),toRotateAround);
    std::cout << "Mouse delta -> x: " << mouseDelta.x << " " << "y: " << mouseDelta.y << " z: " << mouseDelta.z << std::endl;

    viewDirection = glm::mat3(rotator) * viewDirection;
    oldMousePosition = newMousePosition;
}

Camera::Camera() : position(0.0f, 3.0f, 15.0f),
                   viewDirection(0.0,0.0,-1.0),
                   up(glm::vec3(0,1,0)),
                   oldMousePosition(glm::vec3(0.0f,0.0f,0.0f))
{

}
