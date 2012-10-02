#pragma once

#ifndef BALL_H
#define BALL_H



class Ball {
public:
	vector2* velocity;
	circle* bounds;

	Ball() {
		velocity = vector2::ZERO();
		bounds = new circle(1, 0, 0);
	}

	void Start() {
		velocity->x = 0;
		velocity->y = 0;
	}

	void Draw() {
		
	}

	~Ball(){
		delete velocity;
		delete bounds;
	}
};

#endif