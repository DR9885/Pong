#include "stdafx.h"
#include "app.h"

App::App() {
	HWND hWnd = GetConsoleWindow();
	ShowWindow(hWnd,SW_SHOWMAXIMIZED);   

	_input = GetStdHandle( STD_INPUT_HANDLE  );
	_output = GetStdHandle( STD_OUTPUT_HANDLE );
	_foreground = COLOR::BLACK;
	_background = COLOR::BLACK;

	// Remember how things were when we started
	GetConsoleScreenBufferInfo(_output, &_buffer );
}



void App::Run() {

}


int App::getColor(bool red, bool green, bool blue, bool alpha) {
		return (green? FOREGROUND_GREEN : 0) | (red? FOREGROUND_RED : 0) | (blue? FOREGROUND_BLUE : 0) | (alpha? FOREGROUND_INTENSITY : 0);
}

void App::SetBackground(COLOR _color) { SetConsoleTextAttribute(_output, _foreground | (_background = _color)); }
void App::SetForeground(COLOR _color) { SetConsoleTextAttribute(_output, (_foreground = _rotl(_color, 4)) | _background); }



void App::Seize() {
	const WORD colors[] = {
		0x1A, 0x2B, 0x3C, 0x4D, 0x5E, 0x6F,
		0xA1, 0xB2, 0xC3, 0xD4, 0xE5, 0xF6
	};

	WORD   index   = 0;

	// Tell the user how to stop
	SetConsoleTextAttribute( _output, 0xEC );
	std::cout << "Press any key to quit.\n";

//		SetBackground(COLOR::RED);
//		SetForeground(COLOR::BLUE);

	// Draw pretty colors until the user presses any key
	while (true)//WaitForSingleObject( _input, 100 ) == WAIT_TIMEOUT)
	{
		SetConsoleTextAttribute( _output, colors[ index ] );
		std::cout << "\t\t\t\t Hello World \t\t\t\t" << std::endl;
		if (++index > sizeof(colors)/sizeof(colors[0]))
			index = 0;
	}
	
	FlushConsoleInputBuffer( _output );

	// Keep users happy
	SetConsoleTextAttribute( _output, _buffer.wAttributes );
}
