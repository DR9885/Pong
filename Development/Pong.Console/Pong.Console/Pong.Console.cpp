// Pong.Console.cpp : Defines the entry point for the console application.
// 

#include "stdafx.h"
#include "app.h"

int _tmain(int argc, _TCHAR* argv[])
{
	App *app = new App();
	app->Run();

	return 0;
}