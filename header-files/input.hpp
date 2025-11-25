// input header file
#ifndef INPUT_HPP
#define INPUT_HPP

/*

 #ifndef INPUT_HPP (if not defined): Check if the macro UTILS_HPP is not defined.
 #define INPUT_HPP: Define the macro if it isn't defined.
 #endif: Ends the conditional.

This way, if utils.hpp is included multiple times directly or indirectly, 
the content would only be processed once, thus avoiding the redefinition error.

*/

/*
A macro is a fragment of code defined to be replaced with another 
piece of code throughout the program. It’s typically defined using 
the #define directive.
*/

#include<iostream>
#include<cstdlib> // using for exit(); function
#include "utils.hpp" // contains helper functions like endLine, tabSpace, spaceFunction
#include "ui.hpp" // contains ui related function for centering the text and clearing screen
#include "globalVars.hpp" // contains global variables
using namespace std;

/* 
 * The namespaces are used to group related functions and variables 
 * together, preventing naming conflicts with other parts of the program. 
 * Using namespaces makes the code more organized and easier to maintain.
 */

namespace playOrNotNamespace{
	char playOrNot = ' ';
} // playOrNotNamespace namesapce end here.


void playOrNotInputFunction(){
	
	endLineFunction(4);		// function for breaking the lines in utils.hpp
	tabSpaceFunction(5);	// function for space of tab in utils.hpp
//	spaceFunction(7); 		// function foronly space  in utils.hpp
	cout<<"Do you want to play the game(Y/N): ";
	cin>>playOrNotNamespace::playOrNot;
	endLineFunction(2);
	
} // playorNotInputFunction() function ends here.




void gamePlayingOrNotFunction(){
	
	
		 
	if (playOrNotNamespace::playOrNot == 'y' || playOrNotNamespace::playOrNot == 'Y'){
	
		
	allScenes();
		
		
	} else if (playOrNotNamespace::playOrNot == 'n' || playOrNotNamespace::playOrNot == 'N'){
		// ** DEBUG REQUIRED **
		 playerNotPlaysGame(); // if user did n or N meaning no
		// this playNotPlaysGame(); function working here
		
		
	} else {
		endLineFunction(5);		// function for breaking the lines in utils.hpp
		tabSpaceFunction(2);	// function for space of tab in utils.hpp
		spaceFunction(6); 		// function foronly space  in utils.hpp
		// Below text want to center it in console Terminal
		cout<<"Hey man, can't you just understand you have to add Y for yes and N for No"<<endl;
		endLineFunction(2);
		tabSpaceFunction(5);
		spaceFunction(4);
		pauseFunction("continue");
		cin.get();
		clearConsoleFunction();
	
		while(playOrNotNamespace::playOrNot != 'y' || playOrNotNamespace::playOrNot != 'Y' || playOrNotNamespace::playOrNot != 'n' || playOrNotNamespace::playOrNot != 'N'){
		playOrNotInputFunction();
		clearConsoleFunction();
		if (playOrNotNamespace::playOrNot == 'y' || playOrNotNamespace::playOrNot == 'Y'){
			clearConsoleFunction();
			// make a function which is going to be the game(containing all scenes) and call that in input first if above same function here
		allScenes();
		break;		
			} else if (playOrNotNamespace::playOrNot == 'n' || playOrNotNamespace::playOrNot == 'N') {
				// ** DEBUG REQUIRED **
		// playerNotPlaysGame(); // if user did n or N meaning no
		// this playNotPlaysGame(); function working here
				}
	} // while loop ends here
	
	}
		
	
	
} // gamePlayingOrNotFunction function ends here.








#endif // INPUT_HPP
