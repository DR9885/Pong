/*rectangle */
#pragma once

#ifndef RECT_H
#define RECT_H

class rect {
public:
	int height, width;
	vector2 position;
	rect();
	rect(int h, int w, int x, int y) 
	{
		height=h;
		width=w;
		position.x = x;
		position.y = y;
	}
private:
};

#endif