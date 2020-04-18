#pragma once
#include <string>

#ifndef GLEW_STATIC
#define GLEW_STATIC 1
#endif

#include <GL/glew.h>
#include <GLFW/glfw3.h>

#include <vector>
#include "stb_image.h"


class Texture
{
private:
	unsigned int id;
	//unsigned int type;
	int width;
	int height;
	int colorChannels;

	void init(unsigned char* data);

public:
	Texture(std::string file, unsigned int _type);
	virtual ~Texture();

	void Bind();
	void Unbind();

	//static GLuint LoadSkybox(std::vector<const GLchar*> faces);
};

