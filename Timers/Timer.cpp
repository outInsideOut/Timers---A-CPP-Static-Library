#include "Timer.h"

Timer::Timer() {
	//take start time
	startTime = std::chrono::high_resolution_clock::now();
}


void Timer::Stop() {
	//take note of time first
	TimeStamp endTime = std::chrono::high_resolution_clock::now();
	//convert timestamps to number type
	long long start = std::chrono::time_point_cast<std::chrono::microseconds>(startTime).time_since_epoch().count();
	long long end = std::chrono::time_point_cast<std::chrono::microseconds>(endTime).time_since_epoch().count();
	//work out and store change in time 
	dT = end - start;
}