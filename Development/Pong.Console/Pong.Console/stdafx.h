// stdafx.h : include file for standard system include files,
// or project specific include files that are used frequently, but
// are changed infrequently
//

#pragma once

#include "targetver.h"

#include <stdio.h>
#include <tchar.h>

#include <iostream>
#include <string>

#include <windows.h>
#include <Wincon.h>
#include <string>
#include <algorithm>
#include <iostream>
#include <iomanip>
#include <algorithm>
#include <cctype>

#include <conio.h>

using namespace std;



enum COLOR {
	BLACK = 0x0000,
	BLUE = 0x0001,
	GREEN = 0x0002,
	CYAN = 0x0003,
	RED = 0x0004,
	MAGENTA = 0x0005,
	BROWN = 0x0006,
	LIGHTGREY = 0x0007,
	DARKGREY = 0x0008,
	LIGHTBLUE = 0x0009,
	LIGHTGREEN = 0x0010,
	LIGHTCYAN = 0x0011,
	LIGHTRED = 0x0012,
	LIGHTMAGENTA = 0x0013,
	YELLOW = 0x0014,
	WHITE = 0x0015,
	BLINK = 0x0016 //0x0128
};