#pragma once

#ifndef BALL_H
#define BALL_H



class Ball {
public:
	//vector2* velocity;  Game Tempo
	circle* collider; //TODO: find a better collider 

	Ball() {
		collider = new circle(1, 0, 0);
	}
	

	~Ball(){
		delete collider;
	}
};

#endif  