/* This is a combination of 2 circles and a rectangle bound.  The sizes adjust with the height and width of the capsule object. */
#pragma once

#ifndef CAPSULE_H
#define CAPSULE_H

class capsule {
public:
	real height, width;
	vector2* position;
	rect* middle;
	circle* circle1;
	circle* circle2;
	capsule(){
		position= vector2::ONE();
		height = 1;
		width = 1;
	    middle = new rect(height*2/3, width, 1, 1);
	    circle1 = new circle(width*1/2, 1, 1+1/2*height);
	    circle2 = new circle(width*1/2, 1, 1-1/2*height);
	}
	capsule(real h, real w, real x, real y)
	{
		position= new vector2(x,y);
		height = h;
		width = w;
	    middle = new rect(height*2/3, width, x, y);
	    circle1 = new circle(width*1/2, x, y+1/2*height);
	    circle2 = new circle(width*1/2, x, y-1/2*height);
	}

	~capsule(){
		delete position;
		delete middle;
		delete circle1;
		delete circle2;
	}
private:
};

#endif