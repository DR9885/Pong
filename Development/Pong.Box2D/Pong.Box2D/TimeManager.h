#pragma once

#ifndef TIMEMANAGER_H
#define TIMEMANAGER_H
/* Singleton */ 

// EX: TimeManager::Instance()->GetTime();
class TimeManager {
public: 
	static TimeManager* Instance() {
		/* Lazy Instantiation */
		if(instance == 0)
			instance = new TimeManager();
		return instance;
	}

	real GetTime() {
		return time(0);
	}
	
	real Rand(real min, real max) {
		return rand() % (int)max + min; // type cast (to make mod valid)
	}

	real Rand() {
		rand();
	}
private:

	static TimeManager* instance;

	TimeManager& operator=(TimeManager const&){}; // Assignment Operator 
	TimeManager(TimeManager const&){}; // Copy Constructor
	TimeManager() {
		srand(time(0));
	}
};

#endif