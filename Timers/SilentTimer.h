#pragma once
#include "Timer.h"

//Classes of this object will not perform Stop() or Print() on destruction, it should be used to return the value of dT when Stop() is called
class SilentTimer : public Timer
{
public:
	void Print();
	~SilentTimer();
};

