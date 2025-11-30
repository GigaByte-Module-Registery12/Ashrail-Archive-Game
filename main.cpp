// main.cpp file
#include<iostream>
// our own header files
#include "./header-files/utils.hpp" // contains helper functions like endLine, tabSpace, spaceFunction
#include "./header-files/ui.hpp" 	// contains functions related to console ui like smallScrRecommend
#include "./header-files/input.hpp" // safe input helper function for input
#include "./header-files/winConsoleProperties.hpp"
using namespace std;


int main(){

// Disable Maximize and Resize functionality in windows

#ifdef _WIN32 // Check if the operating system is Windows

DisableMaximizeButton();       // Disable the maximize button
DisableResizeFunctionality();   // Disable resizing

#else // For other operating systems, primarily Linux and macOS
// none cause no disabling things for linux
#endif // End of the conditional compilation block


// Implement everything in main while loop

while (gameRunning){

// Small Screen Recomendation function
	// smallScrRecommendFunction();
	
	// Game Title Ascii screen
	gameTitleAsciiFunction();
	
	
	// play or not
	playOrNotInputFunction();
	
	// game playing or not if else and other functions
	gamePlayingOrNotFunction();	
	
	// Play game again
	playingGameAgain();
		
} // while loop



	
	
	
	return 0;
	
}

