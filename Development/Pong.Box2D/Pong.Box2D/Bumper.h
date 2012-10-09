#pragma once

#ifndef BUMPER_H
#define BUMPER_H

class Bumper : public IMoveBumper {
public:
	const Transform* transform;
	const capsule* Collider;


	Bumper(){
		transform = new Transform();
		Collider = new capsule();
	}

	~Bumper(){
		delete transform;
		delete Collider;
	}
private:
};


#endif