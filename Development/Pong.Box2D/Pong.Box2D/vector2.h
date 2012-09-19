/* The x and y value of all bounds objects */
#pragma once

#ifndef VECTOR2_H
#define VECTOR2_H

class vector2 {
public:
	real x;  //true center x
	real y;  //true center y

	vector2() { 
		x = 0;
		y = 0;
	}

	vector2(real xVal,real yVal) {
		x = xVal;
		y = yVal;
	}

	~vector2() { }

	string toString() const { 
		stringstream msg;
		msg << "x: " << x << ", y: " << y;
		return msg.str();
	}

	/// 
	///
	///
	static vector2* UP()    { return new vector2( 0,  1); }
	static vector2* DOWN()  { return new vector2( 0, -1); }
	static vector2* LEFT()  { return new vector2(-1,  0); }
	static vector2* RIGHT() { return new vector2( 1,  0); }
	static vector2* ONE()   { return new vector2( 1,  1); }
	static vector2* ZERO()  { return new vector2( 0,  0); }

	static real distance(const vector2* v1, const vector2* v2) {
		real deltaX = v1->x - v2->x,
			deltaY = v1->y - v2->y;
		return sqrt(deltaX*deltaX + deltaY*deltaY);
	}

	static vector2* normalize(const vector2 *v1)
	{
		real length = sqrt(v1->x*v1->x + v1->y*v1->y);
		real x = v1->x/length, y = v1->y/length;
		return new vector2(x,y);
	}
	static real dot(const vector2 *v1, const vector2 *v2) { return (v1->x * v2->x) + (v1->y * v2->y); }
	static vector2* cross(const vector2 *v1, const vector2 *v2) { return new vector2(v1->y, -v2->x); }

	// TODO: ADD Normalize Method
};

#endif