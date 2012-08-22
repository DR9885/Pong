#pragma once
#ifndef RECT_H
#define RECT_H
#include "vector2d.h"
#include "size.h"
template <typename t> class rect {
private: 
	vector2d<t> position;
	size2d<t> size;
public:
	rect(t x, t y, t width, t height):
	  position(x, y), size(width, height) {}

	rect(vector2d<t> position, size2d<t> size):
	  position(position), size(size) {}
};

#endif