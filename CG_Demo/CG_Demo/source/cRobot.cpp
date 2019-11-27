
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

GLMmodel* chest = glmReadOBJ("Assets/Modelos en Origen/NEWS/Chest_O.obj");
GLMmodel* lArm = glmReadOBJ("Assets/Modelos en Origen/NEWS/L_Arm.obj");
GLMmodel* lFoot = glmReadOBJ("Assets/Modelos en Origen/NEWS/L_FootO.obj");
GLMmodel* lHand = glmReadOBJ("Assets/Modelos en Origen/NEWS/R_HandO.obj");
GLMmodel* lKnee = glmReadOBJ("Assets/Modelos en Origen/NEWS/L_LegFO.obj");
GLMmodel* lLeg = glmReadOBJ("Assets/Modelos en Origen/NEWS/L_LegO.obj");
GLMmodel* lShoulder = glmReadOBJ("Assets/Modelos en Origen/NEWS/L_ArmShoulderO.obj");
GLMmodel* pelvis = glmReadOBJ("Assets/Modelos en Origen/NEWS/PelvisCorrecta.obj");
GLMmodel* rArm = glmReadOBJ("Assets/Modelos en Origen/NEWS/R_Arm.obj");
GLMmodel* rFoot = glmReadOBJ("Assets/Modelos en Origen/NEWS/R_FootO.obj");
GLMmodel* rHand = glmReadOBJ("Assets/Modelos en Origen/NEWS/L_HandO.obj");
GLMmodel* rKnee = glmReadOBJ("Assets/Modelos en Origen/NEWS/R_LegFO.obj");
GLMmodel* rLeg = glmReadOBJ("Assets/Modelos en Origen/NEWS/R_LegO.obj");
GLMmodel* rShoulder = glmReadOBJ("Assets/Modelos en Origen/NEWS/R_ArmShoulderO.obj");

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

		glPushMatrix(); {

			////////////chest
			glTranslatef(0, -1.8, 0);
			glmDraw(chest, GLM_SMOOTH | GLM_TEXTURE);

			glRotatef(r3, -1, 0, 0);///////////////////////>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>Left ARM
			glPushMatrix(); { /////////Left Shoulder & Elbow
				glTranslatef(2, .6, 0);
				glmDraw(lShoulder, GLM_SMOOTH | GLM_MATERIAL);

				///////// Forearm L
				glPushMatrix(); {
					glTranslatef(0.24, -1.1, 0);
					glmDraw(lArm, GLM_SMOOTH | GLM_MATERIAL);

					glPushMatrix(); { // Hand L
						glTranslatef(0.2, -1.2, 0);
						glmDraw(lHand, GLM_SMOOTH | GLM_MATERIAL);
					}glPopMatrix();
				}
				glPopMatrix();
			}glPopMatrix();

			glRotatef(r2, 1, 0, 0); ///////////////////////>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>right arm
			glPushMatrix(); { /////////RIGHT Shoulder & Elbow
				glTranslatef(-2, .6, 0);
				glmDraw(rShoulder, GLM_SMOOTH | GLM_MATERIAL);

				///////// Forearm R
				glPushMatrix(); {
					glTranslatef(-0.24, -1.1, 0);
					glmDraw(rArm, GLM_SMOOTH | GLM_MATERIAL);

					glPushMatrix(); { // Hand R
						glTranslatef(-0.2, -1.2, 0);
						glmDraw(rHand, GLM_SMOOTH | GLM_MATERIAL);
					}glPopMatrix();
				}
				glPopMatrix();
			}glPopMatrix();
		}glPopMatrix();

		//Pelvis
		glPushMatrix(); {
			glTranslatef(0, -3.4, 0);
			glmDraw(pelvis, GLM_SMOOTH | GLM_MATERIAL);

			////////////////////////////////////////////////////RIGHT LEG
			glRotatef(r5, 1, 0, -.1);
			glPushMatrix(); {
				glTranslatef(0.65, -1, 0);
				glmDraw(rLeg, GLM_SMOOTH | GLM_MATERIAL);

				glRotatef(r6, 1, 0, 0);
				glPushMatrix(); { //UNDER LEG
					glTranslatef(0, -1, 0);
					glmDraw(rKnee, GLM_SMOOTH | GLM_MATERIAL);

					glPushMatrix(); { ///FEET
						glTranslatef(0.15, -2.0, .8);
						glmDraw(rFoot, GLM_SMOOTH | GLM_MATERIAL);
					}glPopMatrix();

				}glPopMatrix();
			}glPopMatrix();


			////////////////////////////////////////////////////LEFT LEG
			glRotatef(r2, -1, 0, 0);
			glPushMatrix(); {
				glTranslatef(-0.65, -1, 0);
				glmDraw(lLeg, GLM_SMOOTH | GLM_MATERIAL);

				glRotatef(r4, 1, 0, 0);
				glPushMatrix(); { //UNDER LEG
					glTranslatef(-0.60, -1, 0);
					glmDraw(lKnee, GLM_SMOOTH | GLM_MATERIAL);

					glPushMatrix(); { ///FEET
						glTranslatef(0.35, -2.0, .8);
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