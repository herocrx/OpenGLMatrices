#version 430

in layout(location=0) vec3 position;
in layout(location=1) vec3 vertexColor;
out vec3 theColor;

uniform mat4 projectedMatrix;
uniform mat4 modelTransformMatrix;





void main()
{
    vec4 v = vec4(position,1.0f);
    vec4 newPosition = modelTransformMatrix*v;
    vec4 projectedPosition = projectedMatrix * newPosition;
    gl_Position = projectedPosition;
    theColor = vertexColor;
}