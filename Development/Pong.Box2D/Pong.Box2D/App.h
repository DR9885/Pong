/*This is a definition of the basic bounds to be used for triggers and colliders*/
#pragma once

#ifndef APP_H
#define APP_H






class App {
public:
	Ball* b;

	App() {

		b = new Ball();	
	}

	bool IsGameOver();  //tests to see if the game is over


	// Ball
	// Player 1
	// Player 2

	~App() {
		delete b;
	}
};

#endif