#pragma once
#ifndef RENDERER_H
#define RENDERER_H

class Renderer {
private: 
	HANDLE _output;
	WORD _foreground;
	WORD _background;

	CONSOLE_SCREEN_BUFFER_INFO _buffer;

	void SetBackground(COLOR _color);
	void SetForeground(COLOR _color);

public:
	Renderer();

	static void Draw(char c, rect<int> shape, COLOR background, COLOR foreground);
};

#endif