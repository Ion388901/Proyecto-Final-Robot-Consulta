
#include "cHead.h"

Head::Head()
{

}

Head::~Head()
{

}

void Head::draw() {
	//HEADDD
	glScalef(.5, .5, .5);
	glColor3f(0.129, 0.282, 0.894); //BLUEEE
	glutSolidCube(1);
}

void Head::update() {

}