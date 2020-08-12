# Timers - a C++ static library


## Description:


This c++ static library is developed for use within visual studio C++ projects. When constructed directly before, and destructed directly after a code block, the duration of time that code block ran for will be printed to the console.

The Timers Library includes two usable classes: ***QuickTimer*** and ***LabeledTimer***.

***QuickTimer*** is the simplest object, starting a timer on construction of an object of the class and printing the lifespan of that class in im mcroseconds when desctructed.

***LabeledTimer*** is more complicated, if a is character passed into the constructor of an object, the result printed to the console upon that object's destruction will be labeled with that character.

## Timers -- Intergration with Visual Studio (VS) C++ projects


1. Download the package and take note of it's location
2. open the visual studio app you wish to use this library with
3. right-click on the top level of solution explorer -> add -> existing project -> the Timers project you downloaded
	- (The Timers project should now be in your solution explorer)
4. right-click on the references tab for your project in VS solution explorer
	- Tick the box next to the "Timers" to include a reference to the library
5. right-click on your project in the solution explorer tab -> properties
	- on the left hand side click on c/c++ -> general
	- on the drop down menu for "Additional Include Directories" select "edit"
	- click the new folder button and then the "..." button to browse for the "Timers" project you downloaded
6. In the code file you wish to use this library within, type *#include "Timers.h"*

The library should now be included within your VS C++ project, allowing you to initialise and use objects of the QuickTimer and LabeledTImer classes.


## usage examples:


#### example 1)
*this example uses an object pointer to construct and destruct the abstract QuickTimer object. This will print the duration in microseconds(us), of the "code to be timed"*

	Quicktimer# qT = new QuickTimer();

	// code to be timed...
	//...
	//...

	delete qT;

#### example 2) 
*this example uses scope construct and destruct the QuickTimer object. This will print the duration in microseconds(us), of the "code to be timed"*

	if (1 == 1) {
		Quicktimer qT();

		//code to be timed...
		//...
		//...
	}

#### example 3)
*this example uses an object pointer to construct and destruct the abstract LabeledTimer object. This will print the duration in microseconds(us), of the "code to be timed", , with the label *a* *

	LabeledTimer# lT = new LabeledTimer('a');

	// code to be timed...
	//...
	//...

	delete qT;

#### example 4) 
*this example uses scope construct and destruct the LabeledTimer object. This will print the duration in microseconds(us), of the "code to be timed", with the label *a* *

	if (1 == 1) {
		LabeledTimer lT('a');

		//code to be timed...
		//...
		//...
	}


## Timer Class
The "Timer" class is a pure-virtual class (interface) which is used as an interface for the classes "QuickTimer" and "LabeledTimer".

### Dependencies
The class uses the chrono library for timings and the iostream library for the sub-classes' Print() methods.

### Contents

#### TimeStamp 
TimeStamp is a datatype defined in this class using the typedef command. The datatype is "std::chrono::time_point<std::chrono::high_resolution_clock>" 

#### TimeStamp startTime
Upon an objects construction, this variable will store the program time. 

#### long long dT
This will store the program's life span

#### Timer() 
The constructor of the class takes note of the current time, to be used in destruction to calculate the lifespan of an object of the class. This time is stored as a TimeStamp custom datatype called startTime

#### Stop()
This function will be called by the sub-classes's destructors. It will calculate the lifespan of the Timer object and store it in the vairable dT.

#### virtual void Print() = 0
This is a pure virtual function, overwritten in the sub-classes.


## QuickTimer Class
The QuickTimer class creates objects which are simple timers.
The timer is started when the object is initialised. Upon destruction of the timer, the time since construction is printed to the console.

### usage examples:

#### example 1)
*this example uses an object pointer to construct and destruct the abstract QuickTimer object. This will print the duration in microseconds(us), of the "code to be timed"*

	Quicktimer# qT = new QuickTimer();

	// code to be timed...
	//...
	//...

	delete qT;

#### example 2) 
*this example uses scope construct and destruct the QuickTimer object. This will print the duration in microseconds(us), of the "code to be timed"*

	if (1 == 1) {
		Quicktimer qT();

		//code to be timed...
		//...
		//...
	}

### Contents:

#### void Print()
This will print the results of the timer to the console in microseconds(us).



## LabeledTimer Class
The LabeledTimer class creates objects which are labeled timers.
The timer is started when the object is initialised. Upon destruction of the timer, the time since construction is printed to the console, along with its label.

### usage examples:

#### example 1)
*this example uses an object pointer to construct and destruct the abstract LabeledTimer object. This will print the duration in microseconds(us), of the "code to be timed", , with the label *a* *

	LabeledTimer# lT = new LabeledTimer('a');

	// code to be timed...
	//...
	//...

	delete qT;

#### example 2) 
*this example uses scope construct and destruct the LabeledTimer object. This will print the duration in microseconds(us), of the "code to be timed", with the label *a* *

	if (1 == 1) {
		LabeledTimer lT('a');

		//code to be timed...
		//...
		//...
	}

### Contents:

#### LabeledTimer(char c) - Constructor:
This constructor takes a character as a parameter. This character will be used as a label for the results of the timer.

#### void Print() - function
This will print the results of the timer to the console in microseconds(us), with label character.

#### char label:
This will be the label for the timer


## Conclusion

If you have any questions or suggestions about/for this library please do not hesitate to get in touch via email at finred@hotmail.co.uk

Thank you.