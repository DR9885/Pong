#pragma once

#ifndef ARROWINPUTCONTROLLER_H
#define ARROWINPUTCONTROLLER_H

class ArrrowInputController : public IController {
private:
public:
	virtual MoveType GetControlInput(){
	     //get any arrow input from the keyboard buffer look for escape as well
		return MoveType::NONE;
	}
	
};

#endif