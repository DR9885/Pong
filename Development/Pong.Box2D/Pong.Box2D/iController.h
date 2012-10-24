#pragma once

#ifndef ICONTROLLER_H
#define ICONTROLLER_H

enum MoveType { NONE, LEFT, RIGHT, UP, DOWN, UPRIGHT, UPLEFT, DOWNRIGHT, DOWNLEFT, PAUSE};

class IController {
private:
	
public:
	virtual MoveType GetControlInput() = 0;
};


#endif