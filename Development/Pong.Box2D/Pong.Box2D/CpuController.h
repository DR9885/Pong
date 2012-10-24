#pragma once

#ifndef CPUCONTROLLER_H
#define CPUCONTROLLER_H

class CpuController : public IController {
private:
	//temp
	real i;
	MoveType Input;
public:
	CpuController(){
		i=0;
		Input = MoveType::RIGHT;
	}

	virtual MoveType GetControlInput(){
		i++;
		if (i>50){
			Input = Input == MoveType::LEFT? MoveType::RIGHT : MoveType::LEFT;
			i=0;
		}
		return Input;
	}
	
};

#endif