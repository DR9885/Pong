#pragma once
#ifndef VECTOR2D_H
#define VECTOR2D_H

template <typename t> class vector2d {
public:
	t x;
	t y;

	vector2d(t x, t y): x(x), y(y) {}

	static vector2d ZERO()  { return new vector2d( 0,  0); }
	static vector2d LEFT()  { return new vector2d(-1,  0); }
	static vector2d RIGHT() { return new vector2d( 1,  0); }
	static vector2d UP()    { return new vector2d( 0,  1); }
	static vector2d DOWN()  { return new vector2d( 0, -1); }
	static vector2d ONE()   { return new vector2d( 1,  1); }
};

#endif