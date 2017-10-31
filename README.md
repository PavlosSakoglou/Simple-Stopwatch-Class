# Simple Stopwatch Class
Stopwatch class built in C++11 to measure processing time in applications. The interface includes conventional stopwatch functionality, such as start, stop, reset, and get time.

# How to run

Include the Stopwatch.hpp and Stopwatch.cpp in your C++ project, and instantiate the Stopwatch objects to measure time.

There are no external dependencies or libraries, only <thread> and <chrono> which might require a C++11-compatible compiler. However, any modern compiler should work fine. 

# Functionality

* Default constructor sets the start and end counters to 0

* getTime() method returns a the time elapsed (double return type) in seconds

* start() and end() methods get the current time stamp

* reset() method sets the start and end counter to 0

* Default destructor (C++11 defaulted)

**Include guards were implemented for safe inclusion**


