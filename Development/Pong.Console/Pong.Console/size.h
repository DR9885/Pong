#pragma once
#ifndef SIZE_H
#define SIZE_H

template <typename t> class size2d {
public:
	t width;
	t height;

	size2d(t width, t height)
		: width(width), height(height) {}
};

#endif