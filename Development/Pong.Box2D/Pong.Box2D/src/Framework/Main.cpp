#include "stdafx.h"

int main(int argc, char **argv) 
{
	glutInit(&argc, argv); // GLUT initialization

	App *app = new App();

	return 0;
}
