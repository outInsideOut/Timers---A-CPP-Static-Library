#include "QuickTimer.h"

void QuickTimer::Print() {
	std::cout << "Time elapsed: " << dT << "us \n";
}
QuickTimer::~QuickTimer() {
	Stop();
	Print();
}