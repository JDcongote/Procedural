#pragma once
//include GLEW
#include "../CommonHeaders.h"

#include "../Libs/stb_image.h"

class Tex2D
{
public:
	Tex2D();
	Tex2D(unsigned char* buffer, GLenum type, int width, int height);
	Tex2D(std::string name, GLenum type);
	void activate_texture(GLenum sampler);
	GLuint get_index();
	~Tex2D();
private:
	GLuint load_texture(std::string name, GLenum type);
	void bind_texture(unsigned char* buffer, bool rotate);
	bool load_cubemap(GLuint tex_index, GLenum side, std::string name);
	void rotate_texture(unsigned char* image_data);
	
	//unsigned char* image_data;
	GLuint tex_index;
	GLenum type;
	int width, height, size;
};

