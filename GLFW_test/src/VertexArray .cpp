#include "VertexArray.h"


VertexArray::VertexArray()
{
	
}

VertexArray::~VertexArray()
{
	
}

void VertexArray::AddBuffer(const VertexBuffer& vb, const VertexBufferLayout& layout)
{
	vb.Bind();
	GLCall(glEnableVertexAttribArray(0));
	GLCall(glVertexAttribPointer(0, 2, GL_FLOAT, GL_FALSE, sizeof(float) * 2, 0));
}

