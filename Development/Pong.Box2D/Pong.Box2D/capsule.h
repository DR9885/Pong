/* This is a combination of 2 circles and a rectangle bound.  The sizes adjust with the height and width of the capsule object. */
#pragma once

#ifndef CAPSULE_H
#define CAPSULE_H

class capsule {
public:
	int height, width;
	vector2 position;
	rect middle;
	circle circle1;
	circle circle2;
	capsule();
	capsule(real h, real w, real x, real y)
	{
		position.x = x;
		position.y = y;
		height = h;
		width = w;
	    middle = rect(height*2/3, width, position.x, position.y);
	    circle1 = circle(width*1/2, position.x, position.y+1/2*height);
	    circle2 = circle(width*1/2, position.x, position.y-1/2*height);
	}

private:
};

#endif