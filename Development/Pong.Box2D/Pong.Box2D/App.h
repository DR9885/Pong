/*This is a definition of the basic bounds to be used for triggers and colliders*/
#pragma once

#ifndef APP_H
#define APP_H

class Ball {
public:
	vector2* velocity;
	circle* bounds;

	Ball() {
		velocity = vector2::ZERO();
	}

	void Start() {
		velocity->x = 0;
		velocity->y = 0;
	}

	void Draw() {

	}
};

class Player { 
public:
	Player() { 

	}

};


class App {
public:
	Ball* b;

	App() {

		b = new Ball();	
	}

	// Ball
	// Player 1
	// Player 2

};

#endif