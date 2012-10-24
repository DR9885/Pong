/*This is a definition of the basic bounds to be used for triggers and colliders*/
#pragma once

#ifndef APP_H
#define APP_H


class App {
private:
	char * name;
	real width, height, z_near, z_far, field_of_view_angle;
public:



	App() {
		name = "App";
		width = 640.0f; 
		height = 480.0f;
		z_near = 1.0f;
		z_far = 500.0f;
		field_of_view_angle = 45;
		glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH );  // Display Mode
		glutInitWindowSize(width, height);					// set window size
		glutCreateWindow( name);								// create Window
		glutDisplayFunc(Draw);									// register Display Function
		glutIdleFunc( Update );								// register Idle Function
		glutKeyboardFunc( Input::KeyDown );								// register Keyboard Handler
		initialize();
		glutMainLoop();		
	}

	bool IsGameOver();  //tests to see if the game is over

	void MainLoop();
	void KeyPress(unsigned char key, int x, int y);
	void KeyPress(int key, int x, int y);
	void MouseDown(int val);

	// Ball
	// Player 1
	// Player 2
	void initialize () 
	{
		glMatrixMode(GL_PROJECTION);												// select projection matrix
		glViewport(0, 0, width, height);									// set the viewport
		glMatrixMode(GL_PROJECTION);												// set matrix mode
		glLoadIdentity();															// reset projection matrix
		GLfloat aspect = (GLfloat) width / height;
		gluPerspective(field_of_view_angle, aspect, z_near, z_far);		// set up a perspective projection matrix
		glMatrixMode(GL_MODELVIEW);													// specify which matrix is the current matrix
		glShadeModel( GL_SMOOTH );
		glClearDepth( 1.0f );														// specify the clear value for the depth buffer
		glEnable( GL_DEPTH_TEST );
		glDepthFunc( GL_LEQUAL );
		glHint( GL_PERSPECTIVE_CORRECTION_HINT, GL_NICEST );						// specify implementation-specific hints
		glClearColor(0.0, 0.0, 0.0, 1.0);											// specify clear values for the color buffers								
	}



	static GLvoid Draw() {
		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);		     // Clear Screen and Depth Buffer
		glLoadIdentity();
		glutSwapBuffers();
	}
	
	static GLvoid keyboard ( unsigned char key, int mousePositionX, int mousePositionY )		
	{ 
	  
	}

	static GLvoid  Update() 
	{

	}

	~App() {
		
	}
};

#endif