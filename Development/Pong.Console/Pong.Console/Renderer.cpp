#include "stdafx.h"
#include "rect.h"
#include "renderer.h"


/****************************** Private ******************************/
void Renderer::SetBackground(COLOR _color) { SetConsoleTextAttribute(_output, _foreground | (_background = _color)); }
void Renderer::SetForeground(COLOR _color) { SetConsoleTextAttribute(_output, (_foreground = _rotl(_color, 4)) | _background); }


/****************************** Public ******************************/


/// Constructor
Renderer::Renderer() {
	_output = GetStdHandle( STD_OUTPUT_HANDLE );
	_foreground = COLOR::BLACK;
	_background = COLOR::BLACK;

	// Remember how things were when we started
	GetConsoleScreenBufferInfo(_output, &_buffer );
}


void Renderer::Draw(char c, rect<int> shape, COLOR background, COLOR foreground) {

}