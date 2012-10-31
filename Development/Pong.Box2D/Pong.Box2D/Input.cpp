#include "stdafx.h"
#include "Input.h"

Input* Input::instance = 0;

GLvoid Input::KeyDown(unsigned char key, int x, int y) {
	cout<<"Key Pressed: "<<key<<"   x: "<<x<<", y: "<<y<<endl;stringstream ss;
	string s;
	ss<<key;
	ss>>s;
	Instance()->keys->remove(s);
	cout<<Instance()->keys->size();
} 

GLvoid Input::KeyUp(unsigned char key, int x, int y) {
	cout<<"Key Released: "<<key<<"   x: "<<x<<", y: "<<y<<endl;
	stringstream ss;
	string s;
	ss<<key;
	ss>>s;
	Instance()->keys->remove(s);
}

GLvoid Input::KeyDownSpecial(int intKey, int x, int y) {
	if(true) cout<<"Key Pressed Special: "<<intKey<<endl;
	if(true) cout<<"x: "<<x<<", y: "<<y<<endl;
}


GLvoid Input::KeyUpSpecial(int intKey, int x, int y) {
	if(true) cout<<"Key Released Special: "<<intKey<<endl;
	if(true) cout<<"x: "<<x<<", y: "<<y<<endl;
}