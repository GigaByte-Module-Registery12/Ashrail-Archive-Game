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
} // playorNotInputFunction() function ends here.

void gamePlayingOrNotFunction(){
	
	
	if (playOrNotNamespace::playOrNot == 'y' || playOrNotNamespace::playOrNot == 'Y'){
		// player want to play
		// calling playOrNot char type variable from playOrNotNamespace which is in input.hpp
		
		// *DEBUG CODE*
		
		clearConsoleFunction();
	startSceneAsciiFunction();
		
	} else if (playOrNotNamespace::playOrNot == 'n' || playOrNotNamespace::playOrNot == 'N'){
		// player not want to play
		// calling playOrNot char type variable from playOrNotNamespace which is in input.hpp
		
		// system("cls");
		clearConsoleFunction(); // clear the console screen
		endLineFunction(4);		// function for breaking the lines in utils.hpp
		tabSpaceFunction(5);	// function for space of tab in utils.hpp
		//	spaceFunction(7); 	// function foronly space  in utils.hpp
		// Below text want to center it in console Terminal
		cout<<"GO TO HELL AND CLOSE THIS PROGRAM"<<endl;
		endLineFunction(2);		// function for breaking the lines in utils.hpp
		
		string gunExit = R"(
		
		
                                                      ^
                                                     | |
                                                   @#####@
                                                 (###   ###)-.
                                               .(###     ###) \
                                              /  (###   ###)   )
                                             (=-  .@#####@|_--"
                                             /\    \_|l|_/ (\
                                            (=-\     |l|    /
                                             \  \.___|l|___/
                                             /\      |_|   /
                                            (=-\._________/\
                                             \             /
                                               \._________/
                                                 #  ----  #
                                                 #   __   #
                                                 \########/

		
		
		)";
		cout<<gunExit<<endl;
		endLineFunction(2);
		tabSpaceFunction(5);	// function for space of tab in utils.hpp
		// Below text want to center it in console Terminal
		cout<<"Press enter to close the program"<<endl;
		endLineFunction(2);
		cin.ignore();
		cin.get();
		clearConsoleFunction();
		exit(0); // exit from the program, using this from cstdlib header file
		
	
			
		
	} else {
		endLineFunction(5);		// function for breaking the lines in utils.hpp
		tabSpaceFunction(3);	// function for space of tab in utils.hpp
		spaceFunction(5); 		// function foronly space  in utils.hpp
		// Below text want to center it in console Terminal
		cout<<"Hey man, can't you just understand you have to add Y for yes and N for No"<<endl;
		endLineFunction(5);	
	}
	
	
	
} // gamePlayingOrNotFunction function ends here.









#endif // INPUT_HPP
