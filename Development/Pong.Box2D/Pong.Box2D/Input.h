
#pragma once

#ifndef INPUT_H
#define INPUT_H

/* Singleton */ 
class Input {
public: 
	friend class App;

	enum KeyCode {
		NONE,
		LEFT	= GLUT_KEY_LEFT, 
		RIGHT	= GLUT_KEY_RIGHT,
		UP		= GLUT_KEY_UP,
		DOWN	= GLUT_KEY_DOWN
	};

private:
	/* Lazy Instantiation */
	static Input* instance;
	static Input* Instance() {
		if(instance == 0)
			instance = new Input();
		return instance;
	}

	list<string> *keys;
	
	Input& operator=(Input const&){}; // Assignment Operator 
	Input(Input const&){}; // Copy Constructor
	Input() {
		keys = new list<string>();
	}
	
	static GLvoid KeyDown(unsigned char key, int x, int y);
	static GLvoid KeyUp(unsigned char key, int x, int y);

	static GLvoid KeyDownSpecial(int intKey, int x, int y);
	static GLvoid KeyUpSpecial(int intKey, int x, int y) ;
};
#endif