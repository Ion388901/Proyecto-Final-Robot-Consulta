#include "glm.h"
#include "cHead.h"

GLMmodel* head = glmReadOBJ("Assets/ROBOT_CORREGIDO/HEAD.obj");

Head::Head()
{

}

Head::~Head()
{

}

void Head::draw() 
{
	glmDraw(head, GLM_SMOOTH | GLM_TEXTURE);
}

void Head::update() {

}