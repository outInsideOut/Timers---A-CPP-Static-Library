#include "LabeledTimer.h"

LabeledTimer::LabeledTimer(char c) {
	label = c;
}

void LabeledTimer::Print() {
	std::cout << label << ")\tTime elapsed: " << dT << "us \n";
}
//destructor sequence
LabeledTimer::~LabeledTimer() {
	//stop timer, calc and print dT
	Stop();
	Print();
}
