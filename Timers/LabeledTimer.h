#pragma once
#include "Timer.h"

class LabeledTimer : public Timer {
public:
	//Constructor for storing a label, passed as argument
	LabeledTimer(char c);
	//print time elapsed with label
	void Print();
	//destruction sequence
	~LabeledTimer();
private:
	char label;
};

