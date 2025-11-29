// main.cpp file
#include<iostream>
// our own header files
#include "./header-files/utils.hpp" // contains helper functions like endLine, tabSpace, spaceFunction
#include "./header-files/ui.hpp" 	// contains functions related to console ui like smallScrRecommend
#include "./header-files/input.hpp" // safe input helper function for input
using namespace std;


int main(){

DisableMaximizeButton();       // Disable the maximize button
DisableResizeFunctionality();   // Disable resizing 

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

