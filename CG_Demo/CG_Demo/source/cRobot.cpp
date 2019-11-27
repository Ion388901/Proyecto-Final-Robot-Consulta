
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

<<<<<<< Updated upstream
<<<<<<< Updated upstream
GLMmodel* chest = glmReadOBJ("Assets/Modelos en Origen/NEWS/Chest_O.obj");
GLMmodel* lArm = glmReadOBJ("Assets/Modelos en Origen/NEWS/R_Arm.obj");
GLMmodel* lFoot = glmReadOBJ("Assets/Modelos en Origen/NEWS/L_FootO.obj");
GLMmodel* lHand = glmReadOBJ("Assets/Modelos en Origen/NEWS/R_HandO.obj");
GLMmodel* lKnee = glmReadOBJ("Assets/Modelos en Origen/NEWS/L_LegFO.obj");
GLMmodel* lLeg = glmReadOBJ("Assets/Modelos en Origen/NEWS/L_LegO.obj");
GLMmodel* lShoulder = glmReadOBJ("Assets/Modelos en Origen/NEWS/R_ArmShoulderO.obj");
GLMmodel* pelvis = glmReadOBJ("Assets/Modelos en Origen/NEWS/PelvisO.obj");
GLMmodel* rArm = glmReadOBJ("Assets/Modelos en Origen/NEWS/L_Arm.obj");
GLMmodel* rFoot = glmReadOBJ("Assets/Modelos en Origen/NEWS/R_FootO.obj");
GLMmodel* rHand = glmReadOBJ("Assets/Modelos en Origen/NEWS/L_HandO.obj");
GLMmodel* rKnee = glmReadOBJ("Assets/Modelos en Origen/NEWS/R_LegFO.obj");
GLMmodel* rLeg = glmReadOBJ("Assets/Modelos en Origen/NEWS/R_LegO.obj");
GLMmodel* rShoulder = glmReadOBJ("Assets/Modelos en Origen/NEWS/L_ArmShoulderO.obj");

=======
<<<<<<< Updated upstream
=======
>>>>>>> Stashed changes
=======
GLMmodel* chest = glmReadOBJ("Assets/Modelos en Origen/NEWS/Chest_O.obj");
GLMmodel* lArm = glmReadOBJ("Assets/Modelos en Origen/NEWS/L_Arm.obj");
GLMmodel* lFoot = glmReadOBJ("Assets/Modelos en Origen/NEWS/L_FootO.obj");
GLMmodel* lHand = glmReadOBJ("Assets/Modelos en Origen/NEWS/L_HandO.obj");
GLMmodel* lKnee = glmReadOBJ("Assets/Modelos en Origen/NEWS/L_LegFO.obj");
GLMmodel* lLeg = glmReadOBJ("Assets/Modelos en Origen/NEWS/L_LegO.obj");
GLMmodel* lShoulder = glmReadOBJ("Assets/Modelos en Origen/NEWS/L_ArmShoulderO.obj");
GLMmodel* pelvis = glmReadOBJ("Assets/Modelos en Origen/NEWS/PelvisCorrecta.obj");
GLMmodel* rArm = glmReadOBJ("Assets/Modelos en Origen/NEWS/R_Arm.obj");
GLMmodel* rFoot = glmReadOBJ("Assets/Modelos en Origen/NEWS/R_FootO.obj");
GLMmodel* rHand = glmReadOBJ("Assets/Modelos en Origen/NEWS/R_HandO.obj");
GLMmodel* rKnee = glmReadOBJ("Assets/Modelos en Origen/NEWS/R_LegFO.obj");
GLMmodel* rLeg = glmReadOBJ("Assets/Modelos en Origen/NEWS/R_LegO.obj");
GLMmodel* rShoulder = glmReadOBJ("Assets/Modelos en Origen/NEWS/R_ArmShoulderO.obj");

>>>>>>> Stashed changes
<<<<<<< Updated upstream
>>>>>>> Stashed changes
=======
>>>>>>> Stashed changes
Robot::Robot()
{
	head = new Head();
}


Robot::~Robot()
{

}


void Robot::draw()
{
<<<<<<< Updated upstream
<<<<<<< Updated upstream
=======
<<<<<<< Updated upstream
=======
>>>>>>> Stashed changes
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
=======
<<<<<<< Updated upstream
>>>>>>> Stashed changes
=======
>>>>>>> Stashed changes
		head->draw();

		/////////////////////NECK

		glRotatef(40, 0, 1, 0);
		glPushMatrix(); {

			////////////chest
			glTranslatef(0, -1.8, 0);
			glmDraw(chest, GLM_SMOOTH | GLM_TEXTURE);

			glRotatef(r3, -1, 0, 0);///////////////////////>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>RIGHT ARM
			glPushMatrix(); { /////////RIGHT Shoulder & Elbow
<<<<<<< Updated upstream
<<<<<<< Updated upstream
				glTranslatef(1.3, .2, 0);
=======
				glTranslatef(1, .2, 0);
>>>>>>> Stashed changes
=======
				glTranslatef(1, .2, 0);
>>>>>>> Stashed changes
				glmDraw(rShoulder, GLM_SMOOTH | GLM_MATERIAL);

				///////// Forearm R
				glPushMatrix(); {
<<<<<<< Updated upstream
<<<<<<< Updated upstream
					glTranslatef(0.70, .2, 0);
					glmDraw(rArm, GLM_SMOOTH | GLM_MATERIAL);

					glPushMatrix(); { // Hand R
						glTranslatef(0.17, -1.2, 0);
						glmDraw(rHand, GLM_SMOOTH | GLM_MATERIAL);

=======
=======
>>>>>>> Stashed changes
					glTranslatef(0.75, .2, 0);
					glmDraw(rArm, GLM_SMOOTH | GLM_MATERIAL);

					glPushMatrix(); { // Hand R
						glTranslatef(0.14, -1.2, 0);
						glmDraw(rHand, GLM_SMOOTH | GLM_MATERIAL);

<<<<<<< Updated upstream
=======
					}glPopMatrix();
				}
				glPopMatrix();
			}glPopMatrix();

			glRotatef(r2, 1, 0, 0); ///////////////////////>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>left arm
			glPushMatrix(); { /////////LEFT Shoulder & Elbow
				glTranslatef(-1, .2, 0);
				glmDraw(lShoulder, GLM_SMOOTH | GLM_MATERIAL);

				///////// Forearm L
				glPushMatrix(); {
					glTranslatef(-0.75, .2, 0);
					glmDraw(lArm, GLM_SMOOTH | GLM_MATERIAL);

					glPushMatrix(); { // Hand L

						glTranslatef(-0.14, -1.2, 0);
						glmDraw(lHand, GLM_SMOOTH | GLM_MATERIAL);

>>>>>>> Stashed changes
>>>>>>> Stashed changes
					}glPopMatrix();
				}
				glPopMatrix();
			}glPopMatrix();

			glRotatef(r2, 1, 0, 0); ///////////////////////>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>left arm
			glPushMatrix(); { /////////LEFT Shoulder & Elbow
				glTranslatef(-1, .2, 0);
				glmDraw(lShoulder, GLM_SMOOTH | GLM_MATERIAL);

				///////// Forearm L
				glPushMatrix(); {
					glTranslatef(-0.75, .2, 0);
					glmDraw(lArm, GLM_SMOOTH | GLM_MATERIAL);

					glPushMatrix(); { // Hand L

						glTranslatef(-0.14, -1.2, 0);
						glmDraw(lHand, GLM_SMOOTH | GLM_MATERIAL);

>>>>>>> Stashed changes
>>>>>>> Stashed changes
					}glPopMatrix();
				}
				glPopMatrix();
			}glPopMatrix();

			glRotatef(r2, 1, 0, 0); ///////////////////////>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>left arm
			glPushMatrix(); { /////////LEFT Shoulder & Elbow
				glTranslatef(-1.3, .2, 0);
				glmDraw(lShoulder, GLM_SMOOTH | GLM_MATERIAL);

				///////// Forearm L
				glPushMatrix(); {
					glTranslatef(-0.70, .2, 0);
					glmDraw(lArm, GLM_SMOOTH | GLM_MATERIAL);

					glPushMatrix(); { // Hand L

						glTranslatef(-0.17, -1.2, 0);
						glmDraw(lHand, GLM_SMOOTH | GLM_MATERIAL);

<<<<<<< Updated upstream
					}glPopMatrix();
				}
				glPopMatrix();
			}glPopMatrix();
=======
			///////// ELBOW L
			glPushMatrix(); {
<<<<<<< Updated upstream
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
=======
				glTranslatef(0.65, -1, 0);
				glmDraw(rLeg, GLM_SMOOTH | GLM_MATERIAL);

				glRotatef(r6, 1, 0, 0);
				glPushMatrix(); { //UNDER LEG
					glTranslatef(0, -1, 0);
					glmDraw(rKnee, GLM_SMOOTH | GLM_MATERIAL);

					glPushMatrix(); { ///FEET
						glTranslatef(0.15, -2.0, .8);
						glmDraw(rFoot, GLM_SMOOTH | GLM_MATERIAL);
>>>>>>> Stashed changes
					}glPopMatrix();
				}glPopMatrix();
<<<<<<< Updated upstream
			}
			glPopMatrix();
>>>>>>> Stashed changes
		}glPopMatrix();

		//Pelvis
		glPushMatrix(); {
			glTranslatef(0, -3.4, 0);
			glmDraw(pelvis, GLM_SMOOTH | GLM_MATERIAL);

			////////////////////////////////////////////////////RIGHT LEG
			glRotatef(r5, 1, 0, -.1);
			glPushMatrix(); {
				glTranslatef(0.35, -1, 0);
				glmDraw(rLeg, GLM_SMOOTH | GLM_MATERIAL);

<<<<<<< Updated upstream
				glRotatef(r6, 1, 0, 0);
				glPushMatrix(); { //UNDER LEG
					glTranslatef(0, 0, 0);
					glmDraw(rKnee, GLM_SMOOTH | GLM_MATERIAL);
=======
=======
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
>>>>>>> Stashed changes
>>>>>>> Stashed changes

					glPushMatrix(); { ///FEET
						glTranslatef(0, -2.0, .8);
						glmDraw(rFoot, GLM_SMOOTH | GLM_MATERIAL);
					}glPopMatrix();

				}glPopMatrix();
			}glPopMatrix();

=======
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
>>>>>>> Stashed changes

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
						glTranslatef(0, -2.0, .8);
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