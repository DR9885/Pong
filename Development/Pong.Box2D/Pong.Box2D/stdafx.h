
#pragma once

#ifndef STDFX_H
#define STDFX_H

// GFX
#include "glui/glui.h"
#include <windows.h>	   // Standard header for MS Windows applications
#include <GL/gl.h>		   // Open Graphics Library (OpenGL) header
#include <GL/glut.h>	   // The GL Utility Toolkit (GLUT) Header

//base
#include <iostream>
#include <string>
#include <math.h>
#include <sstream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <map>
using namespace std;
typedef float real;

#include "Input.h"

//model
#include "Vector2.h"
#include "Rect.h"
#include "Circle.h"
#include "CapsuleCollider.h"
#include "Transform.h"
#include "Ball.h"

//controller
//--global states
#include "TimeManager.h"
//--controls
#include "IController.h"
//#include "ArrowInputController.h"
//#include "CpuController.h"
//#include "KeyboardInputController.h"
//--board
//#include "Player.h"
//#include "Bumper.h"
//--game
#include "App.h"



#endif