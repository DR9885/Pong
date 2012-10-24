
#pragma once

#ifndef INPUT_H
#define INPUT_H
/* Singleton */ 


class Input {
public: 
	enum KeyCode {
		NONE,
		LEFT	= GLUT_KEY_LEFT, 
		RIGHT	= GLUT_KEY_RIGHT,
		UP		= GLUT_KEY_UP,
		DOWN	= GLUT_KEY_DOWN
	};

	static Input* Instance() {
		/* Lazy Instantiation */
		if(instance == 0)
			instance = new Input();
		return instance;
	}

	static bool GetKey(char c) {
		return false;
	}

	static bool GetKey(KeyCode keyCode) {
		

		return false;
	}
	
	
	static GLvoid KeyDown(unsigned char key, int x, int y) {
		cout<<key;
	}


private:
	map<int, int> *keys;

	static Input* instance;

	Input& operator=(Input const&){}; // Assignment Operator 
	Input(Input const&){}; // Copy Constructor
	Input() {
		keys = new map<int, int>();
		
		
		//glutSpecialFunc(KeyDownSpecial);

		//glutSpecialUpFunc(KeyUpSpecial);
	}


	static GLvoid KeyUp(unsigned key, int x, int y) {

	}

	static GLvoid KeyDownSpecial(int key, int x, int y) {
		cout<<"down";
	}

	static GLvoid KeyUpSpecial(int key, int x, int y) {

	}
};

#endif