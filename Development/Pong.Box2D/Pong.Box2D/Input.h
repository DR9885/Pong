
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

	static bool IsKeyPressed(char c) {
		return false;
	}

	static bool IsKeyPressed(KeyCode keyCode) {
		

		return false;
	}
	
	
	static GLvoid KeyDown(unsigned char key, int x, int y) {
		if(true) cout<<"Key Pressed: "<<key<<endl;
		//if(Instance()->keys->)
			Instance()->keys->push_back(key);
		cout<<Instance()->keys->size();
	}
	
	static GLvoid KeyUp(unsigned char key, int x, int y) {
		if(true) cout<<"Key Released: "<<key<<endl;
		Instance()->keys->remove(key);
	}

private:
	list<char> *keys;

	static Input* instance;

	Input& operator=(Input const&){}; // Assignment Operator 
	Input(Input const&){}; // Copy Constructor
	Input() {
		keys = new list<char>();
		
		
		//glutSpecialFunc(KeyDownSpecial);

		//glutSpecialUpFunc(KeyUpSpecial);
	}



	static GLvoid KeyDownSpecial(int key, int x, int y) {
		if(true) cout<<"Key Released: "<<key<<endl;
		Instance()->keys->remove(key);
	}

	static GLvoid KeyUpSpecial(int key, int x, int y) {

	}
};

#endif