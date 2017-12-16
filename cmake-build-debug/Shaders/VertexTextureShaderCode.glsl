#version 430

// Input vertex data, different for all executions of this shader.
in layout(location=0) vec3 position;
in layout(location=1) vec3 vertexColor;
in layout(location=2) vec2 vertexUV;

// Output data ; will be interpolated for each fragment.
out vec2 UV;

// Values that stay constant for the whole mesh.
uniform mat4 projectedMatrix;
uniform mat4 modelTransformMatrix;
uniform mat4 viewMatrix;

void main(){
    vec4 v = vec4(position,1.0f);
    vec4 newPosition = modelTransformMatrix*v;
    vec4 worldToView = viewMatrix*newPosition;
    vec4 projectedPosition = projectedMatrix * worldToView;
    gl_Position = projectedPosition;
    // UV of the vertex. No special space for this one.
    UV = vertexUV;
}