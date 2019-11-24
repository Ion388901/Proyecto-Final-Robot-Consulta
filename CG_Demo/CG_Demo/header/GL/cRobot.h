#pragma once
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

#include "cHead.h"
#include <stdio.h>
#include <math.h>


class Robot
{
#define PARTS
#ifndef _ROBOT
#define _ROBOT

public:
	Robot();
	~Robot();

	void draw();
	void newDraw();
	void update();

	/*
		enum ROBOT_PARTS {  //BODY

			HEAD, NECK, BODY, HIPS,
			RSHOULDER, RARM, RHAND,
			RLEG, RANKLE, RFOOT,
			LSHOULDER, LARM, LHAND,
			LLEG, LANKLE, LFOOT
		}
		parts[BODY]->color[0]=1;

		Block * parts[PARTS];
		float rotations[3][PARTS]; //rotation in X Y Z for every part}
		*/
#endif
};