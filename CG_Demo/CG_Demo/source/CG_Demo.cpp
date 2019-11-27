/*
 * Karla Carreto A01652799
 * Martin Enrique Roger Morales Irazoque
 * Aldo López Vallin A01338209
 * TC3022. Computer Graphics Course.
 * ROBOT
 */

// Please don't change lines 9-31 (It helps me to grade)
#ifdef __APPLE__
// For XCode only: New C++ terminal project. Build phases->Compile with libraries: add OpenGL and GLUT
// Import this whole code into a new C++ file (main.cpp, for example). Then run.
// Reference: https://en.wikibooks.org/wiki/OpenGL_Programming/Installation/Mac
	#include <OpenGL/gl.h>
	#include <OpenGL/glu.h>
	#include <GLUT/glut.h>
#endif
#ifdef _WIN32
// For VS on Windows only: Download CG_Demo.zip. UNZIP FIRST. Double click on CG_Demo/CG_Demo.sln
// Run
	#include "freeglut.h"
#endif
#ifdef __unix__
// For Linux users only: g++ CG_Demo.cpp -lglut -lGL -o CG_Demo
// ./CG_Demo
// Reference: https://www.linuxjournal.com/content/introduction-opengl-programming
	#include "GL/freeglut.h"
	#include "GL/gl.h"
#endif

#include <stdio.h>
#include <math.h>
#include "cRobot.h"
#include "glm.h"

Robot* robot;
int mode;

//GLMmodel* background; 

GLfloat*	light0_position;	//<-------------------------------Light 0    - location array
GLfloat*	light0_ambient;		//<-------------------------------Light 0    - ambient array
GLfloat*	light0_specular;	//<-------------------------------Light 0    - diffuse array
GLfloat*	light0_diffuse;		//<-------------------------------Light 0    - specular array


void init() // FOR GLUT LOOP
{
	robot = new Robot();
	mode = 2;
	glEnable(GL_TEXTURE_2D);
	glEnable(GL_NORMALIZE);

	//background = glmReadOBJ("Assets/Bg/BG_Plane.obj");

//->LIGHT 0 BEGINS
	
	light0_position = new GLfloat[4]; //<-------------------------Reserve memory
	light0_position[0] = -4.924f; //<--------------------------------L0x
	light0_position[1] = 6.43f; //<--------------------------------L0y
	light0_position[2] = 10.0f; //<--------------------------------L0z
	light0_position[3] = 1.0f; //<--------------------------------L0w
	
	/*
	Important: light position is L0(lx,ly,lz,lw).
	-If lw = 0, configures a directional light, and parameters lx, ly y lz define its direction.
	-If lw = 1, configures a point light, and parameters lx, ly y lz define its location.
	*/
	
	light0_ambient = new GLfloat[4]; //<--------------------------Reserve memory
	light0_ambient[0] = 0.164295f; //<---------------------------------Ia0r
	light0_ambient[1] = 0.092044f; //<---------------------------------Ia0g
	light0_ambient[2] = 0.268798f; //<---------------------------------Ia0b
	light0_ambient[3] = 1.0f; //<---------------------------------Ia0a

	light0_diffuse = new GLfloat[4]; //<--------------------------Reserve memory
	light0_diffuse[0] = 1.0f; //<---------------------------------Id0r
	light0_diffuse[1] = 1.0f; //<---------------------------------Id0g
	light0_diffuse[2] = 1.0f; //<---------------------------------Id0b
	light0_diffuse[3] = 1.0f; //<---------------------------------Id0a

	light0_specular = new GLfloat[4]; //<-------------------------Reserve memory
	light0_specular[0] = 0.902940f; //<--------------------------------Is0r
	light0_specular[1] = 0.926548f; //<--------------------------------Is0g
	light0_specular[2] = 0.718841f; //<--------------------------------Is0b
	light0_specular[3] = 1.0f; //<--------------------------------Is0a
	
//<-LIGHT 0 ENDS

// Locate LIGHT 0:
	
	glLightfv(GL_LIGHT0, GL_POSITION, light0_position);
	glLightfv(GL_LIGHT0, GL_AMBIENT, light0_ambient);
	glLightfv(GL_LIGHT0, GL_DIFFUSE, light0_diffuse);
	glLightfv(GL_LIGHT0, GL_SPECULAR, light0_specular);
	

	// Enable lighting:
	glEnable(GL_LIGHTING);
	// Enable LIGHT 0:
	glEnable(GL_LIGHT0);

	glEnable(GL_DEPTH_TEST);			// Enable check for close and far objects.
	glClearColor(0.0, 0.0, 0.0, 0.0);	// Clear the color state.
	glMatrixMode(GL_MODELVIEW);			// Go to 3D mode.
	glLoadIdentity();					// Reset 3D view matrix.
}

void axes(float scale)
{
	glLineWidth(3);
	glBegin(GL_LINES);
	{
		glColor3f(1, 0, 0); // red
		glVertex3f(0, 0, 0);
		glVertex3f(scale, 0, 0);

		glColor3f(0, 1, 0); // green
		glVertex3f(0, 0, 0);
		glVertex3f(0, scale, 0);

		glColor3f(0, 0, 1); // blue
		glVertex3f(0, 0, 0);
		glVertex3f(0, 0, scale);
	}
	glEnd();
}

void display()							// Called for each frame (about 60 times per second).
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);				// Clear color and depth buffers.
	glLoadIdentity();												// Reset 3D view matrix.
	gluLookAt(12.0, 1.0, 15.0,										// Where the camera is.
		      0.0, -3.0, 0.0,										// To where the camera points at.
		      0.0, 5.0, 0.0);										// "UP" vector.
			
	//glmDraw(background, GLM_SMOOTH | GLM_TEXTURE);
	robot->draw();
	switch (mode)
	{
	case 0:
		
		break;

	case 1:
		//robot->newDraw(); ver que hacer para que el draw haga otra cosa
		break;
	}

	//axes(1);
	
	//glmDraw(head, GLM_SMOOTH | GLM_MATERIAL);


	glutSwapBuffers();												// Swap the hidden and visible buffers.
}

void idle()															// Called when drawing is finished.
{
	//robot->update();
	glutPostRedisplay();											// Display again.
}

void reshape(int x, int y)											// Called when the window geometry changes.
{
	glMatrixMode(GL_PROJECTION);									// Go to 2D mode.
	glLoadIdentity();												// Reset the 2D matrix.
	gluPerspective(40.0, (GLdouble)x / (GLdouble)y, 0.5, 50.0);		// Configure the camera lens aperture.
	glMatrixMode(GL_MODELVIEW);										// Go to 3D mode.
	glViewport(0, 0, x, y);											// Configure the camera frame dimensions.
	gluLookAt(0.0, 0.0, 4.0,
		0.0, 0.0, 0.0,
		0.0, 1.0, 0.0);
	display();
}

void keyboard(unsigned char key, int x, int y)
{
	switch (key)
	{
	case 'a':
		mode = 0;
		break;
	
	case 'r':
		mode = 1;
		break;
	}
}

int main(int argc, char* argv[])
{
	glutInit(&argc, argv);											// Init GLUT with command line parameters.
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_DEPTH | GLUT_RGB);		// Use 2 buffers (hidden and visible). Use the depth buffer. Use 3 color channels.
	glutInitWindowSize(800, 800);
	glutCreateWindow("Walking Robot");
	
	init();
	glutReshapeFunc(reshape);										// Reshape CALLBACK function.
	glutDisplayFunc(display);										// Display CALLBACK function.
	glutIdleFunc(idle);												// Idle CALLBACK function.
	glutMainLoop();													// Begin graphics program.
	return 0;														// ANSI C requires a return value.
}