/*
*	© Superharmonic Technologies
*	Pavlos Sakoglou
*
*  ====================================================================
*
*	Stopwatch class test file
*
*/

#include <iostream>
#include <thread>

// Include Stopwatch class definition
#include "Stopwatch.hpp"

// Some process to be timed
void simulation() {
	// Sleep for 1 second in every iteration
	for (unsigned i = 0; i < 5; i++)
		// do something
		std::this_thread::sleep_for(std::chrono::seconds(1));
}

int main() {

	/* Example 1 */

	// Instantiate Stopwatch as timer
	Stopwatch timer;

	std::cout << "Timer starts...\n";

	// Start the timer -- get the system's now time
	timer.start();

	// Some code to test below
	simulation();	

	// Stop the timer -- get the system's now time
	timer.stop();

	std::cout << "Timer stops...\n\n";

	// Print the processing time and reset the timer
	std::cout << "Process 1:\nTime elapsed: " << timer.getTime() << "s\n\n";
	timer.reset();

	/* Example 2 */

	// Using the Stopwatch inside a process
	// Lambda that takes captures timer object by reference
	auto some_process = [&]() {

		std::cout << "Timer starts...\n";

		// Start the timer
		timer.start();
		
		// Do something i.e. iterate 4 times and sleep for 1 second in each iteration
		int k = 1;
		while (true) {
			if (k > 4) break;
			k++;
			std::this_thread::sleep_for(std::chrono::seconds(1));
		}

		// Stop the timer
		timer.stop();

		std::cout << "Timer stops...\n\n";
	};

	// Run the process
	some_process();

	// Print the processing time and reset the timer
	std::cout << "Process 2:\nTime elapsed: " << timer.getTime() << "s\n\n";
	timer.reset();	

	return 0;
}
