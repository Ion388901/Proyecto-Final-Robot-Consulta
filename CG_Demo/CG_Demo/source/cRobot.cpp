
#include "cRobot.h"

Head* head;

float r1 = 5;
float dir = 1;
float r5 = 3;
float r4 = 3;
float r3 = 5;
float r2 = 6;
float r6 = 3;
float dir1 = -1;

Robot::Robot()
{
	head = new Head();
	/*
	float sc[] = { 1,1,1 };
	float cl[] = { 0,0,0 };
	for (int i = 0; i <= PARTS; i++)
	{
		parts[i] = new Block(sc[i], cl[i]);
	}
	parts[BODY]->color[0] = 1;
	parts[NECK]->color[0] = parts[NECK]->color[1] = parts[NECK]->color[2] = 1;
	parts[NECK]->size[0] = parts[NECK]->size[1] = parts[NECK]->size[2] = 0.3;
	*/
}


Robot::~Robot()
{

}

void Robot::draw()
{
	head->draw();

	/////////////////////NECK

	glPushMatrix(); {
		glTranslatef(0, -.6, 0);
		glScalef(0.4, 0.2, 0.4);
		glColor3f(1, 1, 1);
		glutSolidCube(1);

		////////////chest
		glRotatef(r1, 0, 1, 0);
		glTranslatef(0, -3.5, 0);
		glScalef(6, 6, 3);
		glColor3f(0.721, 0, 0); //////DARK RED
		glutSolidCube(1);

		glRotatef(r3, -1, 0, 0);///////////////////////>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>RIGHT ARM
		glPushMatrix(); { /////////RIGHT ARM
			glTranslatef(.65, .2, 0);
			glScalef(0.3, .6, .6);
			glColor3f(0.6, 0.082, 0.082); //////DARK RED
			glutSolidCube(1);

			///////// ELBOW R
			glPushMatrix(); {
				glTranslatef(0.70, .2, 0);
				glScalef(.7, .4, .7);
				glColor3f(1, 1, 1);
				glutSolidCube(1);

				glPushMatrix(); { //FOREARM R

					glTranslatef(0.80, -.2, 0);
					glScalef(1.2, 3, 1.2);
					glColor3f(0.756, 0.082, 0.082); //////DARK RED
					glutSolidCube(1);

					//glRotatef(rotz, 0, 1, 0);
					glPushMatrix(); { ///HAND R
						glTranslatef(0.90, -.2, 0);
						glScalef(.6, .4, .8);
						glColor3f(0.129, 0.282, 0.894); //BLUEEE
						glutSolidCube(1);
					}glPopMatrix();
				}glPopMatrix();
			}
			glPopMatrix();
		}glPopMatrix();

		glRotatef(r2, 1, 0, 0); ///////////////////////>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>left arm
		glPushMatrix(); { /////////LEFT ARM
			glTranslatef(-.65, .2, 0);
			glScalef(0.3, .6, .6);
			glColor3f(0.6, 0.082, 0.082); //////DARK RED
			glutSolidCube(1);

			///////// ELBOW L
			glPushMatrix(); {
				glTranslatef(-0.70, -.2, 0);
				glScalef(.7, .4, .7);
				glColor3f(1, 1, 1);
				glutSolidCube(1);

				glPushMatrix(); { //FOREARM L

					glTranslatef(-0.80, -.2, 0);
					glScalef(1.2, 3, 1.2);
					glColor3f(0.756, 0.082, 0.082); //////DARK RED
					glutSolidCube(1);

					//glRotatef(rotz, 0, 1, 0);
					glPushMatrix(); { ///HAND L
						glTranslatef(-0.90, -.2, 0);
						glScalef(.6, .4, .8);
						glColor3f(0.129, 0.282, 0.894); //BLUEEE
						glutSolidCube(1);
					}glPopMatrix();
				}glPopMatrix();
			}
			glPopMatrix();
		}glPopMatrix();
	}glPopMatrix();

	//COLUMN
	glPushMatrix(); {
		glTranslatef(0, -2.4, 0);
		glScalef(1.8, 1, 1.2);
		glColor3f(1, 1, 1);
		glutSolidCube(1);

		////////Gray Shorts
		glTranslatef(0, -.8, 0);
		glScalef(1.2, 0.7, 1.2);
		glColor3f(0.384, 0.388, 0.392);//////GREY
		glutSolidCube(1);

		////////////////////////////////////////////////////RIGHT LEG
		glRotatef(r5, 1, 0, -.1);
		glPushMatrix(); {
			glTranslatef(0.35, -1, 0);
			glScalef(.3, 1.5, .5);
			glColor3f(1, 1, 1); //////DARK RED
			glutSolidCube(1);

			glRotatef(r6, 1, 0, 0);
			glPushMatrix(); { //UNDER LEG
				glTranslatef(0, -1, 0);
				glScalef(1.2, 1.2, 1.2);
				glColor3f(0.129, 0.282, 0.894); //////BLUEEEE
				glutSolidCube(1);

				glPushMatrix(); { ///FEET
					glTranslatef(0, -.33, .8);
					glScalef(1.2, .3, .5);
					glColor3f(0.129, 0., 0.894); //////BLUEEEE
					glutSolidCube(1);
				}glPopMatrix();

			}glPopMatrix();
		}glPopMatrix();


		////////////////////////////////////////////////////LEFT LEG
		glRotatef(r2, -1, 0, 0);
		glPushMatrix(); {
			glTranslatef(-0.35, -1, 0);
			glScalef(.3, 1.5, .5);
			glColor3f(1, 1, 1); //////DARK RED
			glutSolidCube(1);

			glRotatef(r4, 1, 0, 0);
			glPushMatrix(); { //UNDER LEG
				glTranslatef(0, -1, 0);
				glScalef(1.2, 1.2, 1.2);
				glColor3f(0.129, 0.282, 0.894); //////BLUEEEE
				glutSolidCube(1);

				glPushMatrix(); { ///FEET
					glTranslatef(0, -.33, .8);
					glScalef(1.2, .3, .5);
					glColor3f(0.129, 0., 0.894); //////BLUEEEE
					glutSolidCube(1);
				}glPopMatrix();

			}glPopMatrix();
		}glPopMatrix();
	}glPopMatrix();


}

void Robot::update()
{
	head->update();
	/*
	r1 += dir * 0.1f;
	if (r1 > 45 || r1 < 0) {
		dir = -dir;
	}

	r3 += dir * 0.05f;
	if (r3 > 45 || r3 < 0) {
		dir = -dir;
	}

	r2 += dir1 * 0.07f;
	if (r2 > 0 || r2 < -45) {
		dir1 = -dir1;
	}

	r4 += dir1 * 0.11f;
	if (r4 > 0 || r4 < -15) {
		dir1 = -dir1;
	}

	r5 += dir1 * 0.05f;
	if (r5 > 0 || r5 < -45) {
		dir1 = -dir1;
	}

	r6 += dir1 * 0.12f;
	if (r6 > 0 || r6 < -15) {
		dir1 = -dir1;
	}
	*/
}