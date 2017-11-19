//
// Created by heroadm on 12.11.17.
//

#ifndef OPENGLTUTORIAL_CAMERA_H
#define OPENGLTUTORIAL_CAMERA_H

#include <glm/vec3.hpp>
#include <glm/mat4x4.hpp>



class Camera {
public:
    Camera();

    Camera(const glm::vec3 &position, const glm::vec3 &viewDirection);

    glm::mat4 getViewToWorldMatrix() const;
    void mouseUpdate(const glm::vec2 &);

private:
    glm::vec3 position;
    glm::vec3 viewDirection;
    glm::vec3 up;
    glm::vec2 oldMousePosition;
};


#endif //OPENGLTUTORIAL_CAMERA_H
