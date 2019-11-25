#include "glm.h"
#include "cHead.h"

GLMmodel* head = glmReadOBJ("Assets/Modelos en Origen/NEWS/HeadO.obj");

Head::Head()
{

}

Head::~Head()
{

}

void Head::draw() 
{
	glmDraw(head, GLM_SMOOTH | GLM_MATERIAL);
}

void Head::update() {

}