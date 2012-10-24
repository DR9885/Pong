#pragma once

#ifndef KEYBOARDINPUTCONTROLLER_H
#define KEYBOARDINPUTCONTROLLER_H

class KeyboardInputController : public IController {
private:
public:
	virtual MoveType GetControlInput(){
	     //get any arrow input from the keyboard buffer
		return MoveType::NONE;
	}
	
};

#endif