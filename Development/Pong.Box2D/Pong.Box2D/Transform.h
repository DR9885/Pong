#pragma once

#ifndef TRANSFORM_H
#define TRANSFORM_H

class Transform {
public:
	const vector2* position;
	const real* rotation;
	const vector2* scale;

	Transform() : position(vector2::ZERO()), rotation(0), scale(vector2::ONE())
	{
	}

	Transform(const vector2* v, const real* r, const vector2* s){
		position = v;
		rotation = r;
		scale = s;
	}

	~Transform(){
		delete position;
		delete scale;
	}
private:
};


#endif