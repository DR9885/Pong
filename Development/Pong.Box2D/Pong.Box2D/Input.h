
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

	
	static void KeyDown(unsigned char key, int x, int y) {
		cout<<"down";
	}

	static void KeyUp(unsigned key, int x, int y) {

	}

	static void KeyDownSpecial(int key, int x, int y) {
		cout<<"down";
	}

	static void KeyUpSpecial(int key, int x, int y) {

	}
};

#endif