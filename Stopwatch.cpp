/*
*	© Superharmonic Technologies
*	Pavlos Sakoglou
*
*  ====================================================================
*
*	Stopwatch class implementation
*
*/

#include "Stopwatch.hpp"
#include <iostream>

// Default constructor
Stopwatch::Stopwatch() : m_start(0), m_end(0) {}

// Get time
const double Stopwatch::getTime() {
	return m_end - m_start;
}

// Methods

// Start counting time
void Stopwatch::start() {
	m_start = std::chrono::duration_cast<std::chrono::seconds>(
		std::chrono::system_clock().now().time_since_epoch()).count();
}

// Stop counting time
void Stopwatch::stop() {
	m_end = std::chrono::duration_cast<std::chrono::seconds>(
		std::chrono::system_clock().now().time_since_epoch()).count();
}

// Reset the timer
void Stopwatch::reset() {
	m_start = m_end = 0;
}

// Default destructor -- C++11 defaulted
Stopwatch::~Stopwatch() = default;