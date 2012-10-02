#pragma once

#ifndef CIRCLE_H
#define CIRCLE_H

/* circle bound */
class circle {
public:
	vector2* position;
	real radius;
	circle();
	
	circle(real r, vector2* v) {
		position = v;
		radius = r;
	}

	circle(real r, real x, real y)
	{
		position = new vector2(x, y);
		radius=r;
	}
	
	
	bool IsWithin(const vector2* point) {
		cout<<vector2::distance(position, point)<<endl;
		return vector2::distance(position, point) <= radius;
	}
	~circle(){
		delete position;
	}
private:
};

#endif