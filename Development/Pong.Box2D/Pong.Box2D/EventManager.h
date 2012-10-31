
#pragma once

#ifndef EVENTMANAGER_H
#define EVENTMANAGER_H


struct KeyEvent {
public:
	bool ShiftKey;
	bool CtrlKey;
	bool AltKey;
	bool tabKey;
	bool escKey;
	char key;
};


struct MouseEvent {
public:
	int x, y;
};

typedef void (*keyFP)(KeyEvent); // function pointers
typedef void (*mouseFP)(MouseEvent); // function pointers

/* Singleton */ 
class EventManager {
	
public:
	template<class T> static void On(string e, T obj) {

	}

	static void Off(string e) {

	}

	static void Trigger(string e) {

	}

private:

	static EventManager* instance;
	static EventManager* Instance() {
		/* Lazy Instantiation */
		if(instance == 0)
			instance = new EventManager();
		return instance;
	}
};

#endif