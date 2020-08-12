#pragma once
#include <iostream>
#include <chrono>

//type definition for "TimeStamp" datatype from chrono library
typedef  std::chrono::time_point<std::chrono::high_resolution_clock> TimeStamp;

class Timer
{
public:
	//Base constructor
	Timer();
	//stops timer and calculates dT
	void Stop();
	virtual void Print() = 0;

//protected values because they need to be inherited
protected:
	//holds startTime
	TimeStamp startTime;

	//"change in time"
	//holds difference between startTime and TimeStamp at destruction TimeStamp
	long long dT;
};


