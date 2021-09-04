#pragma once

#include<GL/glew.h>

#define ASSERT(x) if (!(x)) __debugbreak();
#define GLCall(x)\
	GLCleaerError();\
	x;\
	ASSERT(GLLogCall(#x, __FILE__, __LINE__));

void GLCleaerError();
bool GLLogCall(const char* function, const char* file, int line);