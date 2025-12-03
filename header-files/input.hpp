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
#include<limits>                         // for numeric_limits used by cin.ignore()
/*
#include <limits>: This header provides features to define the characteristics of numeric types. 
It allows access to information like the maximum and minimum values a type can hold.
*/

#include<cctype>                         // for tolower()
/*
#include <cctype>: This header contains functions for character handling, including tolower(), 
which converts a character to its lowercase equivalent.

Using tolower() media the code is foolproof against different case inputs (both upper and lower). 
It enhances user experience by preventing errors due to simple case mismatches.
*/
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
	spaceFunction(3); 		// function foronly space  in utils.hpp
	cout<<"Do you want to play the game(Y/N): ";
	cin>>playOrNotNamespace::playOrNot;
	
	// added code, need review
	 // read single token (skips whitespace)
    // normalize to lowercase so we only need to check 'y' and 'n' elsewhere
    playOrNotNamespace::playOrNot = static_cast<char>(tolower(playOrNotNamespace::playOrNot));
/*
 playOrNotNamespace::playOrNot = static_cast<char>(tolower(playOrNotNamespace::playOrNot));
 
 in above line this thing static_cast<char>(tolower(playOrNotNamespace::playOrNot)
 tolower is a function converts to lower alphabe, this function comes from tolower
  Converts the input character to lowercase, ensuring the program can treat 'Y' and 'y' (or 'N' and 'n') equivalently, making it easier to validate input later.
  */
  
   endLineFunction(2);
  
  /*
 
The combination of cin.clear() and cin.ignore(...) is a common practice in handling user input in C++. It ensures that if there's an error from bad input, the program cleans the input stream so that the next read operation behaves as expected.

*/
    // If user typed extra characters on the same line, remove them so next input is clean
    cin.clear(); // clear any error flags
    /*
    cin.clear();: This is crucial for managing the stream state. If a previous input caused an error (like non-character input for a char), this clears that error state.
	
	
    Function: Clears the error flags on the input stream.
    Use: If the input stream has encountered an error (like trying to read a character when 
    expecting an integer and vice versa), cin.clear() resets the state so that subsequent 
    input operations can proceed.
    
    */
    
    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // discard rest of line
	/*
	cin.ignore(...): This effectively ignores any extra input left in the buffer until 
	it encounters a newline character, ensuring that the next read (if any) starts fresh.
	
	
    Function: This line is used to discard characters from the input buffer until a newline character is found or the specified number of characters has been discarded.


std::numeric_limits<std::streamsize>::max():
   std::numeric_limits: A template that gives properties of arithmetic types.
   std::streamsize: A type to represent the size of streams, usually based on long long or int.
   .max(): Returns the maximum value representable by the type, effectively allowing us to ignore up 
		   to the maximum possible characters, ensuring we clear the entire line.
	Together, std::numeric_limits<std::streamsize>::max() gives the maximum number of input characters to 
			ignore, ensuring all extraneous input is removed.
  
  '\n': This specifies that the clearing process continues until a newline is reached, which means the function will ignore everything until the end of the current line of input, ensuring no residual characters affect subsequent reads.

	
	*/
	
	
} // playorNotInputFunction() function ends here.




void gamePlayingOrNotFunction(){
	
	
		 
	if (playOrNotNamespace::playOrNot == 'y' /* || playOrNotNamespace::playOrNot == 'Y'*/){
	/* 
	 * || playOrNotNamespace::playOrNot == 'Y'
	 * 
	 * this is commented because we normalized to lowercase using tolower() function;
	 * Using tolower() media the code is foolproof against different case inputs (both upper and lower). It enhances user experience by preventing errors due to simple case mismatches.
	 * */
		
	allScenes();
	return;
		
	} else if (playOrNotNamespace::playOrNot == 'n' /* || playOrNotNamespace::playOrNot == 'N' */){
		
		/* 
	 * || playOrNotNamespace::playOrNot == 'N'
	 * 
	 * this is commented because we normalized to lowercase using tolower() function;
	 * Using tolower() media the code is foolproof against different case inputs (both upper and lower). It enhances user experience by preventing errors due to simple case mismatches.
	 * */
	
		 playerNotPlaysGame(); // if user did n or N meaning no
		return;
		
	} else {
		endLineFunction(5);		// function for breaking the lines in utils.hpp
		tabSpaceFunction(2);	// function for space of tab in utils.hpp
		spaceFunction(8); 		// function foronly space  in utils.hpp
		// Below text want to center it in console Terminal
		cout<<"Hey man, can't you just understand you have to add Y for yes and N for No"<<endl;
		endLineFunction(2);
		tabSpaceFunction(5);
		spaceFunction(6);
		pauseFunction("continue");
		clearConsoleFunction();
	
		while(playOrNotNamespace::playOrNot != 'y' && playOrNotNamespace::playOrNot != 'n'){
			gameTitleAsciiFunction();
			playOrNotInputFunction(); // Re-prompt input
			clearConsoleFunction();
		if (playOrNotNamespace::playOrNot == 'y' || playOrNotNamespace::playOrNot == 'Y'){
			clearConsoleFunction();
			// make a function which is going to be the game(containing all scenes) and call that in input first if above same function here
			allScenes();
			break; // Exit loop
		} else if (playOrNotNamespace::playOrNot == 'n' || playOrNotNamespace::playOrNot == 'N') {
			
			playerNotPlaysGame(); // Handles decline, if user did n or N meaning no
			break; // Exit loop
		} else {
			endLineFunction(4);		// function for breaking the lines in utils.hpp
			tabSpaceFunction(5);	// function for space of tab in utils.hpp
			spaceFunction(3); 		// function foronly space  in utils.hpp
			cout << "Please press Y for yes or N for no. \n \n" << endl;
			endLineFunction(4);		// function for breaking the lines in utils.hpp
			tabSpaceFunction(5);	// function for space of tab in utils.hpp
			spaceFunction(6); 		// function foronly space  in utils.hpp
			cout<<"Press any key to continue..."<<endl;
			
	/*
 
The combination of cin.clear() and cin.ignore(...) is a common practice in handling user input in C++. It ensures that if there's an error from bad input, the program cleans the input stream so that the next read operation behaves as expected.

*/			
			// Ensure any leftover input is cleared before next read:
// If user typed extra characters on the same line, remove them so next input is clean
    cin.clear(); // clear any error flags
    /*
    cin.clear();: This is crucial for managing the stream state. If a previous input caused an error (like non-character input for a char), this clears that error state.

    */
    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // discard rest of line
	/*
	cin.ignore(...): This effectively ignores any extra input left in the buffer until it encounters a newline character, ensuring that the next read (if any) starts fresh.
	*/
/*
cin.ignore(numeric_limits<streamsize>::max(), '\n');
this will work too, if we remove std::  because we have used namespace std; so this will work.
but we cannot remove :: infront of max()
*/	
/* if you will remove :: from ::max() it will result in error
error: expected primary-expression before ‘max’
*/


			clearConsoleFunction();
			continue; // // Start the loop again
			
		    }
				
				
				
	} // while loop ends here
	
	}
		
	
} // gamePlayingOrNotFunction function ends here.

void playAgainPromptFunction() {
    // Prompt for input
    gameTitleAsciiFunction(); 

	endLineFunction(4);		// function for breaking the lines in utils.hpp
	tabSpaceFunction(5);	// function for space of tab in utils.hpp
	spaceFunction(2); 		// function foronly space  in utils.hpp    
    cout << "Do you want to play the game again(Y/N): ";
    cin >> playGameAgain;
    
    // Normalize input
    playGameAgain = tolower(playGameAgain);

    // Clear any remaining input
    cin.clear();
    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
} // playAgainPromptFunction() ends here


void playGame() {
    // Logic for your game goes here
    allScenes();
}

void playingGameAgain() {
    while (true) {
        playAgainPromptFunction();

        if (playGameAgain == 'y') {
            playGame(); // Call game logic function
            break; // Exit the loop after game completion
        } else if (playGameAgain == 'n') {
            gameRunning = false;
            playerNotPlaysGame(); // Logic for not playing again
            break; // Exit the loop
        } else {
            endLineFunction(5);
            tabSpaceFunction(4);
            spaceFunction(5);
            cout << "Invalid input! Please press Y for Yes or N for No." << endl;
            endLineFunction(2);
            tabSpaceFunction(5);
            spaceFunction(6);
            cout << "Press any key to continue..." << endl;
            
            cin.clear(); // Clear error state
            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Clear input buffer
            
            clearConsoleFunction();
        } // else block, if else end
    } // while loop
} // playingGameAgain() function ends here

void errorMsgForChoiceInput(){

				// Error message for any number that's not 1 or 2
                endLineFunction(1);
				tabSpaceFunction(1);
				cout<<"You can only enter 1 or 2, Press enter to enter 1 or 2 again"<<endl;
				
				// cin.ignore();
				
	/*
	The combination of cin.clear() and cin.ignore(...) is a common practice in handling user input in C++. 
	It ensures that if there's an error from bad input, the program cleans the input stream so that the 
	next read operation behaves as expected.
	*/
    
    // If user typed extra characters on the same line, remove them so next input is clean
				cin.clear(); // clear any error flags
	/*
	cin.clear();: This is crucial for managing the stream state. If a previous input caused an error (like non-character input for a char), this clears that error state.
	
	Function: Clears the error flags on the input stream.
	Use: If the input stream has encountered an error (like trying to read a character when 
	expecting an integer and vice versa), cin.clear() resets the state so that subsequent 
	input operations can proceed.
    
	*/
  
				cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // discard rest of line
	
	/*

    This is the key fix. It discards everything left in the input buffer up to and including the next newline. 
    If the user previously entered input with operator>> (like cin >> choice), that leaves a newline in the buffer. This line clears that leftover so the next input/wait is clean.
    numeric_limits::max() means "ignore as many characters as needed".
    
    After a successful numeric read, this removes the leftover newline (or any stray extra characters on the same line). This prevents the leftover newline from being seen as input by the next pause/getline.

*/
	
	
	/*
	cin.ignore(...): This effectively ignores any extra input left in the buffer until it encounters a newline character, ensuring that the next read (if any) starts fresh.
	
    Function: This line is used to discard characters from the input buffer until a newline character is found or the specified number of characters has been discarded.
    
	std::numeric_limits<std::streamsize>::max():
	std::numeric_limits: A template that gives properties of arithmetic types.
	std::streamsize: A type to represent the size of streams, usually based on long long or int.
	.max(): Returns the maximum value representable by the type, effectively allowing us to ignore up 
		   to the maximum possible characters, ensuring we clear the entire line.
	Together, std::numeric_limits<std::streamsize>::max() gives the maximum number of input characters to 
			ignore, ensuring all extraneous input is removed.
  
  '\n': This specifies that the clearing process continues until a newline is reached, which means the function will ignore everything until the end of the current line of input, ensuring no residual characters affect subsequent reads.

	*/
				
				clearConsoleFunction();
				

} // errorMsgForChoiceInput() ends here

#endif // INPUT_HPP
