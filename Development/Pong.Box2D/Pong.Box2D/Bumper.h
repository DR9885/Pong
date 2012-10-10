#pragma once

#ifndef BUMPER_H
#define BUMPER_H

class Bumper {
private:
	IController* BumperController;
	
public:
	const Transform* transform;
	const capsule* Collider;
	

	Bumper(IController* c){
		transform = new Transform();
		Collider = new capsule();
		BumperController = c;	
	}

	MoveType test(){
		MoveType Input;
		Input = BumperController->GetControlInput();
		return Input;
	}

	void Update(){
		cout << BumperController->GetControlInput();
		system("cls");
	}
	~Bumper(){
		delete transform;
		delete Collider;
	}
private:
};


#endif