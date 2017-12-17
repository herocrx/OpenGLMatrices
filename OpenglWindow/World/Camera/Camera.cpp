//
// Created by heroadm on 12.11.17.
//

#include "Camera.h"
#include <glm/gtc/matrix_transform.hpp>



std::ostream & operator<<(const std::ostream & stream, Camera & camera)
{
    std::cout << "------------------------------------" << std::endl;
    std::cout << "Camera position -> ";
    std::cout <<" x: " << camera.position.x <<  " y: " << camera.position.y <<  " z: "<<  camera.position.z << std::endl;
    std::cout << "Camera pointing direction -> ";
    std::cout <<" x: " << camera.viewDirection.x <<  " y: " << camera.viewDirection.y <<  " z: "<<  camera.viewDirection.z << std::endl;
    std::cout << "------------------------------------" << std::endl;
}

glm::mat4 Camera::getViewToWorldMatrix() const {
    return glm::lookAt(position,
                       glm::vec3(position.x + viewDirection.x,position.y + viewDirection.y, position.z + viewDirection.z),
                       up);

}

void Camera::orientationUpdate(const glm::vec2 &newMousePosition) {
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

void Camera::moveForward() {
    position = position + viewDirection;

}

void Camera::moveBackward() {
    position = position - viewDirection;

}

void Camera::moveLeft() {
    position = position - glm::cross(viewDirection,up);
}

void Camera::moveRight() {
    position = position + glm::cross(viewDirection,up);
}

void Camera::moveUp() {
        position = position +  glm::cross(viewDirection, glm::cross(viewDirection,up));
}

void Camera::moveDown() {
    position = position - glm::cross(viewDirection, glm::cross(viewDirection,up));
}
