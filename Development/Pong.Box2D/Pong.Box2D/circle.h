/* circle bound */
#pragma once

#ifndef CIRCLE_H
#define CIRCLE_H

class circle {
public:
	int radius;
	vector2 position;
	circle();
	circle(int r, int x, int y)
	{
		position.x = x;
		position.y = y;
		radius=r;
	}
private:
};

#endif