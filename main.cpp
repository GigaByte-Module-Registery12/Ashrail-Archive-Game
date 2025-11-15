// main.cpp file
#include<iostream>
#include<iomanip>
// our own header files
#include "./header-files/utils.hpp" // contains helper functions like endLine, tabSpace, spaceFunction
#include "./header-files/ui.hpp" 	// contains functions related to console ui like smallScrRecommend
#include "./header-files/input.hpp" // safe input helper function for input
using namespace std;

// global variables
// may use namespace for global variable(put it a side for now)
int playerHealth = 100;
int playerMorale = 50;
int supplies = 3;
string playerName = " ";
// character encounter flag(not sure going to use or not)
bool metSirComplier, metBangaliBaba, metSigmaSizzle100;

int main(){



// Implement everything in main while loop

	// Small Screen Recomendation function
	smallScrRecommendFunction();
	
	// Game Title Ascii screen
		gameTitleAsciiFunction();
	
	// play or not
	playOrNotInputFunction();
	
	// game playing or not if else and other functions
	gamePlayingOrNotFunction();
	
	
	return 0;
	
}
