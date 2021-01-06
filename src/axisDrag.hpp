#pragma once

#include <structs.hpp>
#include <utils.hpp>
#include <graphApp.hpp>
#include <tool.hpp>

class AxisDrag : Tool {
public:
	AxisDrag(GraphApp* app);
	~AxisDrag();
	bool draw() const override;
	bool registerTool() override;
	bool checkSelection();
	bool updateSelection(const glm::vec2& prev, const glm::vec2& current);
	
private:
	void updateAxis(const std::vector<float>& axis);
	void updateColors();
	void initializeVertexBuffers();
	void initializeIndexBuffer();
	
	glm::mat4 m_draw_model;
	glm::mat4 m_mouse_model;
    GLuint m_program;
    GLuint m_vao;
    GLuint m_vbo;
    GLuint m_ibo;
	GLuint m_color_ssbo;

	std::vector<AxisVertex> m_vertices;
	std::vector<unsigned short> m_indicies;
	std::vector<bool> m_axis_status;
	std::vector<int> m_order;
	
	float m_thickness;
	glm::vec4 m_default_color;
	glm::vec4 m_active_color;

};