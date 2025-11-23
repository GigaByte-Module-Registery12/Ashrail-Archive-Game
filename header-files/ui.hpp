// UI header file
#ifndef UI_HPP
#define UI_HPP

/*

 #ifndef UI_HPP (if not defined): Check if the macro UTILS_HPP is not defined.
 #define UI_HPP: Define the macro if it isn't defined.
 #endif: Ends the conditional.

This way, if utils.hpp is included multiple times directly or indirectly, 
the content would only be processed once, thus avoiding the redefinition error.

*/

#include<iostream>
#include<cstdlib> // Include for system calls
#include "utils.hpp" // contains helper functions like endLine, tabSpace, spaceFunction
#include "scenes.hpp" // Contains game scenes
using namespace std;

/*
#include <cstdlib>: 

This directive includes the C standard library header 
that provides the system() function, which allows us to execute 
operating system commands from within the C++ program.
*/


// Function to clear the console screen for multiplatform functionality
void clearConsoleFunction(){
	
#ifdef _WIN32 // Check if the operating system is Windows
/*
#ifdef _WIN32: 

This checks if the program is being compiled on a Windows 
environment. The _WIN32 macro is defined by most compilers when building in 
Windows, regardless of whether it’s 32-bit or 64-bit.
*/
	
    system("cls"); // Execute the system command to clear the console in Windows
#else // For other operating systems, primarily Linux and macOS
    system("clear"); // Execute the system command to clear the console in Unix-based systems
/*
 system("clear"):
This command is typically used in Unix-like operating 
systems (like Linux and macOS) to clear the console screen.
 */
#endif	// End of the conditional compilation block
	

/*
clearConsole() function determines the operating system at compile 
time and executes the appropriate command.
This approach ensures that your code remains portable
*/

/*

#ifdef: This directive stands for "if defined." It checks whether a particular 
macro (typically a constant) is defined. If it is, the subsequent block of code 
will be included in the compilation.

#else: This directive provides an alternative block of code that will be included 
if the macro checked in the #ifdef is not defined.

#endif: This directive marks the end of the conditional preprocessor directive 
started by #ifdef or #ifndef. It signals the preprocessor to stop checking 
conditions.

*/

} // clearConsoleFunction() function end here.







// Small screen recommendation function
void smallScrRecommendFunction(){
	clearConsoleFunction(); // clears the console first
	endLineFunction(5);		// function for breaking the lines in utils.hpp
	tabSpaceFunction(3);	// function for space of tab in utils.hpp
	spaceFunction(6); 		// function foronly space  in utils.hpp
	// Below text want to center it in console Terminal
	cout<<"A small recommendation, Please don't open this in full screen!"<<endl;

	
	endLineFunction(1);		// function for breaking the lines in utils.hpp
	tabSpaceFunction(6); 	// function for space of tab in utils.hpp
	spaceFunction(4);		// function for only space in utils.hpp
	// Below text want to center it in console Terminal
	cout<<"Use as it is.";
	
	endLineFunction(10);	// function for breaking the lines in utils.hpp
	tabSpaceFunction(5);	// function for space of tab in utils.hpp
	spaceFunction(5);		// function for only space in utils.hpp
	// Below text want to center it in console Terminal
	// cout<<"Press enter to move further.";
	pauseFunction("move further");
	// system("cls");
	clearConsoleFunction(); // clear the console screen
} // smallScrRecommendFunction() function ends here.

void gameTitleAsciiFunction(){
	
/*
R() stands for "raw string literal". It allows you to define strings 
that contain special characters (like newlines and backslashes) without 
needing to escape them.
Normally, in C++, characters like backslashes (\) or quotes (") need to 
be escaped if you want to include them within a string. 
*/
	string gameTitleAscii = R"(

                                       _               _ _                     _     _           
                             /\       | |             (_) |     /\            | |   (_)          
                            /  \   ___| |__  _ __ __ _ _| |    /  \   _ __ ___| |__  ___   _____ 
                           / /\ \ / __| '_ \| '__/ _` | | |   / /\ \ | '__/ __| '_ \| \ \ / / _ \
                          / ____ \\__ \ | | | | | (_| | | |  / ____ \| | | (__| | | | |\ V /  __/
                         /_/    \_\___/_| |_|_|  \__,_|_|_| /_/    \_\_|  \___|_| |_|_| \_/ \___|
                                                                                                 
                                                                                                 

	)";
	
	cout<<gameTitleAscii<<endl;
	
} // gameTitleAsciiFunction() function ends here.

void startSceneAsciiFunction(){
	
	string startSceneTitleAscii = R"(
	
	
	
	
	)";
	
	
	cout<<startSceneTitleAscii<<endl;
	
} // startSceneAsciiFunction() function ends here.

void playerStatsFunction(){
	
	endLineFunction(1);
	tabSpaceFunction(1);
	cout<<"Player Health: "<<playerHealth;
	spaceFunction(3);
	cout<<"Player Morale: "<<playerMorale;
	spaceFunction(3);
	cout<<"Supplies: "<<supplies;

	endLineFunction(4);

} // playerStatsFunction() function ends here


void startSceneTitle(){

clearConsoleFunction();
string scene1 = R"(


                                         / _\ ___ ___ _ __   ___  / |
                                         \ \ / __/ _ \ '_ \ / _ \ | |
                                         _\ \ (_|  __/ | | |  __/ | |
                                         \__/\___\___|_| |_|\___| |_|


)";

cout<<scene1<<endl;

endLineFunction(2);

string ashrailValley = R"(

                                     _               _ _  __      __   _ _            
                           /\       | |             (_) | \ \    / /  | | |           
                          /  \   ___| |__  _ __ __ _ _| |  \ \  / /_ _| | | ___ _   _ 
                         / /\ \ / __| '_ \| '__/ _` | | |   \ \/ / _` | | |/ _ \ | | |
                        / ____ \\__ \ | | | | | (_| | | |    \  / (_| | | |  __/ |_| |
                       /_/    \_\___/_| |_|_|  \__,_|_|_|     \/ \__,_|_|_|\___|\__, |
                                                                                 __/ |
                                                                                |___/ 

)";

cout<<ashrailValley<<endl;

endLineFunction(5);
tabSpaceFunction(5);
cout<<"Please press enter to continue.";
cin.ignore();
cin.get();
clearConsoleFunction();

} // startSceneTitle() function ends here

void scene2Title(){
	
	
	
	
} // scene2Title() function ends here


#endif // UI_HPP
