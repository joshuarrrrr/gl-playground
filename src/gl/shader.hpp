#pragma once

#include <fstream>
#include <stdexcept>
#include <streambuf>
#include <string>

#include <glad/glad.h>
#include <spdlog/spdlog.h>

namespace gl {

GLenum detect_shader_type_from_filename(const std::string& filename);
std::string load_shader_source_from_file(const std::string& filename);
bool compile_shader(GLuint shader);
GLuint load_shader_from_file(const std::string& filename, GLenum type = GL_NONE);

}  // namespace gl
