// scenes header file
#ifndef SCENES_HPP
#define SCENES_HPP
/*

 #ifndef SCENES_HPP (if not defined): Check if the macro UTILS_HPP is not defined.
 #define SCENES_HPP: Define the macro if it isn't defined.
 #endif: Ends the conditional.

This way, if utils.hpp is included multiple times directly or indirectly, 
the content would only be processed once, thus avoiding the redefinition error.

*/

#include<iostream>
using namespace std;
// our header files:
#include "utils.hpp" // contains helper functions like endLine, tabSpace, spaceFunction
#include "ui.hpp" // contains ui related function and clearing screen
#include "globalVars.hpp" // contains global variable

// function declaration
void startSceneTitle();


// First Starting scenes
int startScene(int sceneID) {
	
	startSceneTitle();
	playerStatsFunction();
	


	sceneID = 1;
	return sceneID;
} // startScene() functions ends here

void allScenes(){

startScene(1);


} // allScenes() function ends here

#endif // SCENES_HPP
