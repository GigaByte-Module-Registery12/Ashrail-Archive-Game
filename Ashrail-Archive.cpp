// Ashrail-Archive.cpp
// main cpp file
#include<iostream>
// our own header files
#include "./header-files/utils.hpp" // contains helper functions like endLine, tabSpace, spaceFunction
#include "./header-files/ui.hpp" 	// contains functions related to console ui like smallScrRecommend
#include "./header-files/input.hpp" // safe input helper function for input
#include "./header-files/winConsoleProperties.hpp" // For managing console properties in Windows
using namespace std;


int main(){

	// Disable Maximize and Resize functionality in Windows
    #ifdef _WIN32 // Check if the operating system is Windows
        DisableMaximizeButton();       // Call function to disable the maximize button
        DisableResizeFunctionality();   // Call function to disable resizing the window
    #else // For other operating systems, primarily Linux and macOS
        // No disabling functionality required for Linux and macOS
    #endif // End of the conditional compilation block


	// Main game loop that runs while the game is alive
    while (gameRunning) {
        // Small screen recommendation function can be uncommented when needed
        // smallScrRecommendFunction();

        // Display the game title in ASCII format
        gameTitleAsciiFunction();
        
        // Prompt user to decide whether to play or not
        playOrNotInputFunction();
        
        // Check if the game is being played
        gamePlayingOrNotFunction();
        
        // Prompt user to play again if desired
        playingGameAgain();
    } // End of while loop

    return 0; // Return 0 to indicate successful program termination
	
}

