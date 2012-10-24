#include "stdafx.h"

void testappJosh(){
	IController *cpu = new CpuController();
	IController *cpu2 = new CpuController();
	Bumper *TopPaddle = new Bumper(cpu);
	Bumper *BottomPaddle = new Bumper(cpu2);
	
		while(true){
		TopPaddle->Update();
		}

}