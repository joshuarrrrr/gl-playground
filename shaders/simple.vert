#version 450 core

uniform mat4 transform;

layout(location = 0) in vec2 in_pos;
layout(location = 1) in vec4 in_color;
layout(location = 0) out vec4 v_color;

void main() {
  gl_Position = transform * vec4(in_pos, 0.0, 1.0);

  // pass-through color
  v_color = in_color;
}
