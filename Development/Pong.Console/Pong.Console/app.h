#pragma once

class App {
private: 
	HANDLE _input;
	HANDLE _output;
	WORD _foreground;
	WORD _background;

	CONSOLE_SCREEN_BUFFER_INFO _buffer;

	int getColor(bool red, bool green, bool blue, bool alpha);

public:
	App();

	void SetBackground(COLOR _color);
	void SetForeground(COLOR _color);

	void Seize();
};