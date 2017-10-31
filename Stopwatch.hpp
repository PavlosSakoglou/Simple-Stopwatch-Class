/*
*	© Superharmonic Technologies
*	Pavlos Sakoglou
*
*  ====================================================================
*
*	Stopwatch class definition: Define a stopwatch
*
*/

// Multiple inclusion guards
#ifndef STOPWATCH_HPP
#define STOPWATCH_HPP

#include <chrono>
#include <iostream>

// Class Stopwatch definition
class Stopwatch {
public:
	// Default constructor
	Stopwatch();

	// Get time
	const double getTime();

	// Methods
	void start();
	void stop();
	void reset();

	// Default destructor
	~Stopwatch();

private:
	// Members to compute the time difference from start to end
	double m_start, m_end;
};

#endif // !STOPWATCH_HPP
