#pragma once

#ifndef RECT_H
#define RECT_H

/*rectangle bound */
class rect {
public:
	real height, width;
	const vector2* position;
	
	rect() {
		height = 0;
		width = 0;
		position = vector2::ZERO();
	}

	rect(real x, real y, real w, real h) 
	{
		position = new vector2(x, y);
		height = h;
		width = w;
	}

	~rect() {
		delete position;
	}

	bool IsWithin(const vector2* point) {
		if(point == 0) return false;

		real offsetX = width*0.5, offsetY = height*0.5;

		// Bounds Check
		bool isInX = position->x - offsetX > point->x && point->x < position->x + offsetX; // left && right
		bool isInY = position->y - offsetY > point->y && point->y < position->y + offsetY; // down && up
		return isInX && isInY;
	}
private:
};

#endif