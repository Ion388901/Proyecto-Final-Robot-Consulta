
#include "cRobot.h"
#include "glm.h"

Head* head;

float r1 = 5;
float dir = 1;
float r5 = 3;
float r4 = 3;
float r3 = 5;
float r2 = 6;
float r6 = 3;
float dir1 = -1;

GLMmodel* chest = glmReadOBJ("Assets/Model_OBJ/Chest.obj");
GLMmodel* lArm = glmReadOBJ("Assets/Model_OBJ/L_Arm.obj");
GLMmodel* lFoot = glmReadOBJ("Assets/Model_OBJ/L_Foot.obj");
GLMmodel* lHand = glmReadOBJ("Assets/Model_OBJ/L_Hand.obj");
GLMmodel* lKnee = glmReadOBJ("Assets/Model_OBJ/L_KneeLeg.obj");
GLMmodel* lLeg = glmReadOBJ("Assets/Model_OBJ/L_Leg.obj");
GLMmodel* lShoulder = glmReadOBJ("Assets/Model_OBJ/L_Shoulder.obj");
GLMmodel* pelvis = glmReadOBJ("Assets/Model_OBJ/Pelvis.obj");
GLMmodel* rArm = glmReadOBJ("Assets/Model_OBJ/R_Arm.obj");
GLMmodel* rFoot = glmReadOBJ("Assets/Model_OBJ/R_Foot.obj");
GLMmodel* rHand = glmReadOBJ("Assets/Model_OBJ/R_Hand.obj");
GLMmodel* rKnee = glmReadOBJ("Assets/Model_OBJ/R_KneeLeg.obj");
GLMmodel* rLeg = glmReadOBJ("Assets/Model_OBJ/R_Leg.obj");
GLMmodel* rShoulder = glmReadOBJ("Assets/Model_OBJ/R_Shoulder.obj");

Robot::Robot()
{
	head = new Head();
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
		glTranslatef(0, -3.5, 0);
		glmDraw(chest, GLM_SMOOTH | GLM_MATERIAL);

		glRotatef(r3, -1, 0, 0);///////////////////////>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>RIGHT ARM
		glPushMatrix(); { /////////RIGHT ARM
			glTranslatef(.65, .2, 0);
			glmDraw(rShoulder, GLM_SMOOTH | GLM_MATERIAL);

			///////// ELBOW R
			glPushMatrix(); {
				glTranslatef(0.70, .2, 0);
				glmDraw(rArm, GLM_SMOOTH | GLM_MATERIAL);

				glPushMatrix(); { //FOREARM R
					glTranslatef(0.80, -.2, 0);
					glmDraw(rHand, GLM_SMOOTH | GLM_MATERIAL);

				}glPopMatrix();
			}
			glPopMatrix();
		}glPopMatrix();

		glRotatef(r2, 1, 0, 0); ///////////////////////>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>left arm
		glPushMatrix(); { /////////LEFT ARM
			glTranslatef(-.65, .2, 0);
			glmDraw(lShoulder, GLM_SMOOTH | GLM_MATERIAL);

			///////// ELBOW L
			glPushMatrix(); {
				glTranslatef(-0.70, -.2, 0);
				glmDraw(lArm, GLM_SMOOTH | GLM_MATERIAL);

				glPushMatrix(); { //FOREARM L

					glTranslatef(-0.80, -.2, 0);
					glmDraw(lHand, GLM_SMOOTH | GLM_MATERIAL);

				}glPopMatrix();
			}
			glPopMatrix();
		}glPopMatrix();
	}glPopMatrix();

	//Pelvis
	glPushMatrix(); {
		glTranslatef(0, -2.4, 0);
		glmDraw(pelvis, GLM_SMOOTH | GLM_MATERIAL);

		////////////////////////////////////////////////////RIGHT LEG
		glRotatef(r5, 1, 0, -.1);
		glPushMatrix(); {
			glTranslatef(0.35, -1, 0);
			glmDraw(rLeg, GLM_SMOOTH | GLM_MATERIAL);

			glRotatef(r6, 1, 0, 0);
			glPushMatrix(); { //UNDER LEG
				glTranslatef(0, -1, 0);
				glmDraw(rKnee, GLM_SMOOTH | GLM_MATERIAL);

				glPushMatrix(); { ///FEET
					glTranslatef(0, -.33, .8);
					glmDraw(rFoot, GLM_SMOOTH | GLM_MATERIAL);
				}glPopMatrix();

			}glPopMatrix();
		}glPopMatrix();


		////////////////////////////////////////////////////LEFT LEG
		glRotatef(r2, -1, 0, 0);
		glPushMatrix(); {
			glTranslatef(-0.35, -1, 0);
			glmDraw(lLeg, GLM_SMOOTH | GLM_MATERIAL);

			glRotatef(r4, 1, 0, 0);
			glPushMatrix(); { //UNDER LEG
				glTranslatef(0, -1, 0);
				glmDraw(lKnee, GLM_SMOOTH | GLM_MATERIAL);

				glPushMatrix(); { ///FEET
					glTranslatef(0, -.33, .8);
					glmDraw(lFoot, GLM_SMOOTH | GLM_MATERIAL);
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