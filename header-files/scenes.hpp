// scenes header file

// Header Gurards prevent multiple inclusions of this header file, avoiding redefinition errors
#ifndef SCENES_HPP // Check if SCENES_HPP is not defined
#define SCENES_HPP // Define SCENES_HPP to prevent multiple inclusions
/*

 #ifndef SCENES_HPP (if not defined): Check if the macro SCENES_HPP is not defined.
 #define SCENES_HPP: Define the macro if it isn't defined.
 #endif: Ends the conditional.

This way, if scenes.hpp is included multiple times directly or indirectly, 
the content would only be processed once, thus avoiding the redefinition error.

*/

#include <iostream>  // Include standard input-output library
#include <string>    // Include string library for string operations
#include <cstdlib>   // Include standard library for exit() and random() functions
#include <ctime>     // Include library for srand() to seed random number generation
#include <limits>    // Include to access numeric limits for cin.ignore()
/*
#include <limits>: This header provides features to define the characteristics of numeric types. 
It allows access to information like the maximum and minimum values a type can hold.
*/

#include <cctype>                         // for tolower() and isdigit()
/*
#include <cctype>: This header contains functions for character handling, including tolower(), 
which converts a character to its lowercase equivalent.

Using tolower() media the code is foolproof against different case inputs (both upper and lower). 
It enhances user experience by preventing errors due to simple case mismatches.
*/

// using namespace std;
// our header files:
#include "utils.hpp" // contains helper functions like endLine, tabSpace, spaceFunction
#include "ui.hpp" // contains ui related function and clearing screen
#include "globalVars.hpp" // contains global variable

// std library components
using std::cout; // Use cout from the standard namespace
using std::cin;  // Use cin from the standard namespace
using std::endl; // Use endl from the standard namespace
using std::string; // Use string from the standard namespace
using std::rand; // Use rand for generating random numbers
using std::numeric_limits; // Use numeric_limits for defining limits of data types
using std::streamsize; // Use streamsize for defining the size of streams
using std::srand; // Use srand for seeding the random number generator
using std::time; // Use time for getting the current time

// Function declarations
void playerStatsFunction(); // Function to display player stats
void clearConsoleFunction(); // Function to clear the console

void spaceFunction(int s); // Function to add spaces
void endLineFunction(int e); // Function to add line breaks
void tabSpaceFunction(int t); // Function to add tab spaces
void pauseFunction(string str); // Function to pause execution
void sceneChoiceRevealFunction(); // Function to reveal scene choices
void pinGuessingFunction(); // Function for PIN guessing logic
int randomNumGeneratorFunction(int n); // Function to generate a random number
void gameEndTitle(); // Function to display the game ending title
void errorMsgForChoiceInput(); // Function to return a error msg if choice input is not valid

// Function declarations for scenes
int scene2Function(); // Function for scene 2
int scene3Function(); // Function for scene 3
int scene4Function(); // Function for scene 4
int scene5Function(); // Function for scene 5
int scene6Function(); // Function for scene 6
int scene7Function(); // Function for scene 7
int scene8Function(); // Function for scene 8
int scene9Function(); // Function for scene 9
int scene10Function(); // Function for scene 10
int scene11Function(); // Function for scene 11
void sceneTwoOptionalChoiceFunction(); // Function for optional choice in scene 2
void endingFunction(); // Function for the game ending

// Function declarations for scene titles
void startSceneTitle(); // Function to display the title of the start scene
void scene2Title(); // Function to display the title of scene 2
void scene3Title(); // Function to display the title of scene 3
void scene4Title(); // Function to display the title of scene 4
void scene5Title(); // Function to display the title of scene 5
void scene6Title(); // Function to display the title of scene 6
void scene7Title(); // Function to display the title of scene 7
void scene8Title(); // Function to display the title of scene 8
void scene9Title(); // Function to display the title of scene 9
void scene10Title(); // Function to display the title of scene 10
void scene11Title(); // Function to display the title of scene 11



// First Starting scenes
int startScene() {
	
	startSceneTitle();
	tabSpaceFunction(1);
	spaceFunction(1);
	playerStatsFunction();
	
	// Implementing scene 1 story

	endLineFunction(1);
	tabSpaceFunction(5);
	spaceFunction(3);
	cout<<"Scene 1 - Prologue: The Ashrail Valley";
	endLineFunction(2);

cout<<"\t You wake to the hollow dawn light that leaks through the torn canvas of your shelter. "
	<<"The world you\n \t remember - streets of hum and glowing ads - is gone, traded for rust "
	<<"and wind that carries the metallic\n \t tang of old fires. \n"<<endl;
	
cout<<"\t They call this wasteland Ashrail Valley: a frayed ribbon of cracked highway, "
	<<"collapsed overpasses, and\n \t skeletal towers that once hosted voices."
	<<"You have a pack with a few tins, a battered radio that rarely\n \t finds a signal, and "
	<<"a worn notebook with a name on the first page: "<<playerName<<". \n"<<endl;
	
cout<<"\t The last message you heard on the radio was a voice promising refuge at an old "
	<<"data repository known as\n \t The Archive, a place of records and machines that might "
	<<"still answer questions about the Event. \n"<<endl;
	
cout<<"\t Today you decide to set out toward The Archive, but the road forks where the highway "
	<<"is split by a\n \t collapsed overpass. \n"<<endl; 

sceneChoiceRevealFunction(); // coming from utils.hpp


bool validChoice = false; // Flag to track valid input

    while (!validChoice) { // Loop until valid input is received
        cout<<"\t Choices: \n"<<endl;
		cout<<"\t 1: Take the lower road, closer to the riverbed - it's quiter, but shadowed and wet."<<endl;
		cout<<"\t 2: Climb the broken overpass and take the high road -- risk of exposure, but faster "
			<<"you can see ahead. \n"<<endl;
        cout << "\t Select your choice (1 or 2): ";
        cin >> choice; // Get user input

        // Check if the input is valid integer
        if (cin.fail()) {
			clearConsoleFunction();
            cout << "\n \t Invalid input! You can only enter a number.\n"<<endl;
            cin.clear(); // Clear error flags
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Discard invalid input
            continue; // Ask for input again
        }

        // Now check the actual value of choice
        switch (choice) {
            case 1:
                // Call function for scene 1
                clearConsoleFunction();
                supplies -= 1;
                playerMorale += 2;
                scene2Function();
                
                validChoice = true; // Exit loop
                break;

            case 2:
                // Call function for scene 2
                clearConsoleFunction();
                playerHealth -= 15;
                playerMorale -= 10;
                scene3Function();
                
                validChoice = true; // Exit loop
                break;

            default:
                errorMsgForChoiceInput();
                break; // Re-prompt user for input
        } // switch case ends here
    } // while loop ends here	
	
	
	sceneID = 1;
	return sceneID;
} // startScene() functions ends here


int scene2Function(){
	scene2Title();
	
	endLineFunction(1);
	tabSpaceFunction(1);
	cout<<"Effect Of Your Choice: Mud slows you down "<<endl;
	playerStatsFunction();
	endLineFunction(1);
	
	tabSpaceFunction(5);
	spaceFunction(8);
	cout<<"Scene 2 - Riverbed Shadows";
	endLineFunction(2);
	
// Implemeting scene 2 story
cout<<"\t You pick your way along the riverbed. Mist clings to low metal "
	<<"and the bones of houses. You pass a decayed\n \t playground wherea swing "
	<<"moves once with the wind. \n"<<endl;
	
cout<<"\t Water here is tainted; you ration what you have. Around a bend, a figure sits by a"
	<<"makeshift stove: a thin\n \t man in a patched coat humming a slow tune. He lifts his "
	<<"head and smiles with tired teeth.\n"<<endl;

sceneChoiceRevealFunction(); // coming from utils.hpp

// choices code

bool validChoice = false; // Flag to track valid input

    while (!validChoice) { // Loop until valid input is received
        cout<<"\t Choices: \n"<<endl;
		cout<<"\t 1: Approach and speak to him. (optional) "<<endl;
		cout<<"\t 2: Avoid him and move on; better not to chance trouble. "
			<<"you can see ahead. \n"<<endl;
        cout << "\t Select your choice (1 or 2): ";
        cin >> choice; // Get user input

        // Check if the input is valid integer
        if (cin.fail()) {
			clearConsoleFunction();
            cout << "\n \t Invalid input! You can only enter a number.\n"<<endl;
            cin.clear(); // Clear error flags
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Discard invalid input
            continue; // Ask for input again
        }
        
        // Remove leftover newline so later pauses/getline behave predictably
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        // Now check the actual value of choice
        switch (choice) {
            case 1:
                
			sceneTwoOptionalChoiceFunction();
			
			scene4Function();
                validChoice = true; // Exit loop
                break;

            case 2:
                // Call function for scene 2
                
                // call respective function of scene
			clearConsoleFunction();
			playerMorale -= 1;
			scene4Function();
                
                validChoice = true; // Exit loop
                break;

            default:
				// Error message for any number that's not 1 or 2
                errorMsgForChoiceInput();
                break; // Re-prompt user for input
        } // switch case emds here
    } // while loop ends here

	sceneID = 2;
	return sceneID;
	
} // scene2Function() function ends here

void sceneTwoOptionalChoiceFunction(){
	
	// Call function for scene 2
   // call respective function of scene
			clearConsoleFunction();
			
			// scene 2 Choice 1 of meeting with Bangali Baba
		
			
			endLineFunction(4);
			tabSpaceFunction(6);
			cout<<"You Choose to speak to him \n"<<endl;
			
			endLineFunction(2);
cout<<"\t \t He offers a warm can of stew and a short story about the old libraries. "
	<<"He asks nothing\n \n \t \t in return. He gives you a scrap of cloth that can be used "
	<<"as bandage, and tells you\n \n \t \t a riddle hinting that The Archive keeps its main "
	<<"gate code hidden in 'lines of speech'. \n"<<endl;
			playerHealth += 5;
			playerMorale += 3;
			metBangaliBaba = true; // if true means higher success rate of succeding the game
			
			endLineFunction(4);
			tabSpaceFunction(6);
		    pauseFunction("continue");
			clearConsoleFunction();
			
	
	} // sceneTwoOptionalChoiceFunction() function ends here

int scene3Function(){
	
	scene3Title();
	
	endLineFunction(1);
	tabSpaceFunction(1);
	cout<<"Effect Of Your Choice: Fall risk - little bit damage on bones  "<<endl;
	playerStatsFunction();
	
	endLineFunction(2);
	tabSpaceFunction(5);
	spaceFunction(6);
	cout<<"Scene 3 - High Road Wind";	
	endLineFunction(2);
	
// Implemeting scene 3 story

tabSpaceFunction(2);
cout<<"You climb the ruined overpass, boots clinking on rebar and fallen concrete. The wind \n"<<endl;

tabSpaceFunction(2);
cout<<"catches the loose fabric of your jacket and the world opens - far-off silhouettes \n"
	<<"\t \tof ruined machinery like  sleeping leviathans. \n"<<endl;
	
tabSpaceFunction(2);
cout<<"Near the highest point, you see fresh footprints and, beneath them, a small transistor\n "
	<<"\t \tradio tied to a broken guardrail. Someone was here recently. \n"<<endl;

endLineFunction(2);
tabSpaceFunction(1);
sceneChoiceRevealFunction(); // coming from utils.hpp



	bool validChoice = false; // Flag to track valid input

    while (!validChoice) { // Loop until valid input is received
        tabSpaceFunction(2);
cout<<" Choices: \n"<<endl;

tabSpaceFunction(2);
cout<<"  1: Examine the footprints closely and follow their direction. "<<endl;

tabSpaceFunction(2);
cout<<"  2: Take the radio and head downhill quickly, avoiding following anyone. \n"<<endl;

tabSpaceFunction(2);
cout<<"  Select your choice (1 or 2): ";
        cin >> choice; // Get user input

        // Check if the input is valid integer
        if (cin.fail()) {
			clearConsoleFunction();
            cout << "\n \t Invalid input! You can only enter a number.\n"<<endl;
            cin.clear(); // Clear error flags
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Discard invalid input
            continue; // Ask for input again
        }

// Remove leftover newline so later pauses/getline behave predictably
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        // Now check the actual value of choice
        switch (choice) {
            case 1:
                // Call function for scene 1
                clearConsoleFunction();
                playerMorale += 2;
                scene4Function();
                
                validChoice = true; // Exit loop
                break;

            case 2:
                // Call function for scene 2
                clearConsoleFunction();
                supplies += 1;
                playerMorale -= 1;
                scene4Function();
                
                validChoice = true; // Exit loop
                break;

            default:
                // Error message for any number that's not 1 or 2
                errorMsgForChoiceInput();
                break; // Re-prompt user for input
        } // switch case ends here
    } // while loop ends here



	sceneID = 3;
	return sceneID;
	
} // scene3()Function function ends here


int scene4Function() {
	
	scene4Title();
	endLineFunction(1);
	playerStatsFunction();
	
	// Implementing scene 4 story

	endLineFunction(1);
	tabSpaceFunction(5);
	spaceFunction(7);
	cout<<"Scene 4 - Roadside Camp";
	endLineFunction(3);
	
// Implemeting scene 4 story

cout<<"\t By midday you reach a crossroads of scorched billboards. A small camp of tarps "
	<<"and salvaged metal stands\n \t by the road. \n "<<endl;
	
cout<<"\t Laughter - thin but genuine - drifts out. Among the campers are three notable "
	<<"figures.. \n"<<endl;

cout<<"\t who chat and trade: a tall man with spectacles and an old laptop, and a cheerful "
	<<"figure who offers tea,\n \t and a man who talks about his confidence while fussing with "
	<<"a scarf. \n"<<endl;
	
cout<<"\t They watch you with curiosity; the laptop man particularly interesting to you, "
	<<"cause he is holding a\n \t laptop in this time. \n"<<endl;

sceneChoiceRevealFunction(); // coming from utils.hpp




bool validChoice = false; // Flag to track valid input

    while (!validChoice) { // Loop until valid input is received
        cout<<"\t Choices: \n"<<endl;
cout<<"\t 1: Appraoch the man with the laptop and ask about The Archive. "<<endl;
cout<<"\t 2: Ignore the camp and continue toward The Archive immediately. \n"<<endl;
cout<<"\t  Select your choice (1 or 2): ";
        cin >> choice; // Get user input

        // Check if the input is valid integer
        if (cin.fail()) {
			clearConsoleFunction();
            cout << "\n \t Invalid input! You can only enter a number.\n"<<endl;
            cin.clear(); // Clear error flags
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Discard invalid input
            continue; // Ask for input again
        }
        
/*
        if (cin.fail()) { ... }
    If reading failed (e.g., user typed letters), clear error flags, discard the bad input line, and re-prompt.
*/


        // Remove leftover newline so later pauses/getline behave predictably
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
/*

    This is the key fix. It discards everything left in the input buffer up to and including the next newline. 
    If the user previously entered input with operator>> (like cin >> choice), that leaves a newline in the buffer. This line clears that leftover so the next input/wait is clean.
    numeric_limits::max() means "ignore as many characters as needed".
    
    After a successful numeric read, this removes the leftover newline (or any stray extra characters on the same line). This prevents the leftover newline from being seen as input by the next pause/getline.

*/

        // Now check the actual value of choice
        switch (choice) {
            case 1:
               
                clearConsoleFunction();
                metSirComplier = true;
                scene5Function();
                
                validChoice = true; // Exit loop
                break;

            case 2:
                
                clearConsoleFunction();
                supplies -= 1;
                playerMorale -= 2;
                scene6Function();
                
                validChoice = true; // Exit loop
                break;

            default:
                // Error message for any number that's not 1 or 2
                errorMsgForChoiceInput();
                break; // Re-prompt user for input
        } // switch case ends here
    } // while loop ends here	
	
	

	sceneID = 4;
	return sceneID;
} // scene4Function() functions ends here


int scene5Function(){
	
	 scene5Title();
	
	playerStatsFunction();
	
	endLineFunction(1);
	tabSpaceFunction(4);
	spaceFunction(7);
	cout<<"Scene 5 - Conversation with Sir Complier";
	endLineFunction(3);
	
// Implemeting scene 5 story

cout<<"\t You sit by the laptop as the man adjusts his spectacles. He introduces himself with "
	<<"a calm dignity; he\n \t calls himself Sir Compiler. \n"<<endl;
	
cout<<"\t His fingers are scarred from writing code, soldering and nights spent coaxing old "
	<<"servers back to life. \n \t He speaks carefully about Programming Languages, CPU and "
	<<"Computer architectures and about how knowledge\n \t survived in strange ways after "
	<<"the Event. \n"<<endl;

cout<<"\t You say, half in jest, and half in awe, I can only explain your programming greatness "
	<<"only and only\n \t using infinite while loop. \n"<<endl;

cout<<"\t He smiles and replies with a patience, he agrees to answer a few questions but "
	<<"pauses on some and says\n \t - No, kid, not right now, ask this later. and he writes "
	<<"you a short diagram that hints at the Archive's\n \t gate being controlled by an old "
	<<"logic sequence. \n "<<endl;
	
sceneChoiceRevealFunction(); // coming from utils.hpp


	bool validChoice = false; // Flag to track valid input

    while (!validChoice) { // Loop until valid input is received
        cout<<"\t  Choices: \n"<<endl;
cout<<"\t  1: Ask Sir Complier for a direct route map to The Archive. "<<endl;
cout<<"\t  2: Ask about the Archive's gate key and the 'lines of speech' riddle. \n"<<endl;
cout<<"\t   Select your choice (1 or 2): ";
        cin >> choice; // Get user input

        // Check if the input is valid integer
        if (cin.fail()) {
			clearConsoleFunction();
            cout << "\n \t Invalid input! You can only enter a number.\n"<<endl;
            cin.clear(); // Clear error flags
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Discard invalid input
            continue; // Ask for input again
        }

// Remove leftover newline so later pauses/getline behave predictably
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        // explain above line in detail

        // Now check the actual value of choice
        switch (choice) {
            case 1:
                clearConsoleFunction();
                 supplies += 1;
 				playerMorale += 2;
 				scene6Function();
                
                validChoice = true; // Exit loop
                break;

            case 2:
                clearConsoleFunction();
               playerMorale += 4;
			  scene6Function();
                
                validChoice = true; // Exit loop
                break;

            default:
				// Error message for any number that's not 1 or 2
                errorMsgForChoiceInput();
                break; // Re-prompt user for input
        } // switch case ends here
    } // while loop ends here

	 
	
	sceneID = 5;
	return sceneID;
	
} // scene5()Function function ends here


int scene6Function(){
	
	 scene6Title();
	
	if (choice == 1){
		endLineFunction(1);
		tabSpaceFunction(1);
		cout<<"Effect Of Your Choice: Supplies Increases as he shares a cached map.  "<<endl;
		}  else if (choice == 2) {
		endLineFunction(1);
		tabSpaceFunction(1);
		cout<<"Effect Of Your Choice: You get a hint for final Puzzle and you stores it as a string. "<<endl;
			}
	playerStatsFunction();
	choice = 0; // setting the choice to default value
	
	endLineFunction(1);
	tabSpaceFunction(5);
	spaceFunction(4);
	cout<<"Scene 6 - Approaching The Archive";
	endLineFunction(2);
	
// Implemeting scene 6 story

cout<<"\t The terrain eases and you see the hulking mass of The Archive ahead: a dome of corrugated "
	<<"metal and glass,\n \t half-buried in silt. \n"<<endl;
	
cout<<"\t Its entrance is a rusted door marked with faded labels several languages. An old terminal "
	<<"sits to one side,\n \t its screen cracked but dark. \n"<<endl;
	
cout<<"\t Around the door, six plaques hold fragments of text torn, half-melted lines that look "
	<<"like parts of\n \t poems, error logs, and radio transcripts. \n"<<endl;

cout<<"\t You remember Bangali Baba's riddle about 'lines of speech'Ã‚Â and the hint Sir Compiler "
	<<"gave about a\n \t three -word key. The terminal awaits input: three words, separated by spaces."<<endl;

sceneChoiceRevealFunction(); // coming from utils.hpp

	bool validChoice = false; // Flag to track valid input

    while (!validChoice) { // Loop until valid input is received
	//1	cout<<"\t * Remeber for your both choice first you will Guess a 3-Digit PIN then the actual key! *\n"<<endl;
       cout<<"\t  Choices: \n"<<endl;
cout<<"\t  1: Try to intercept the plaques and enter words based on a poetic guess "<<endl;
cout<<"\t  2: Use brute force - try common archive keys you heard on the radio and the scraps \n"<<endl;
cout<<"\t   Select your choice (1 or 2): ";
        cin >> choice; // Get user input

        // Check if the input is valid integer
        if (cin.fail()) {
			clearConsoleFunction();
            cout << "\n \t Invalid input! You can only enter a number.\n"<<endl;
            cin.clear(); // Clear error flags
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Discard invalid input
            continue; // Ask for input again
        }

// Remove leftover newline so later pauses/getline behave predictably
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        // explain above line in detail
        


        // Now check the actual value of choice
        switch (choice) {
            case 1:
            // declaring variables above to avoid errors, if not declared here error will be given
                    int randomNumberChoice1;
					
     
                // pinGuessingFunction();
                // cout<<"YOu passed"<<endl;
                
         
                if (metSirComplier == true){
					score += 3;
					} else if (metBangaliBaba == true){
					score += 2;
					} else if (metSigmaTemp100 == true){
					score -= 1;
					}
			
			randomNumberChoice1 = randomNumGeneratorFunction(4);
			
			scoreCheck = score + randomNumberChoice1;

			if (scoreCheck >= 4) {
				endLineFunction(1);
				tabSpaceFunction(1);
				spaceFunction(2);
                cout << " Success! Increased Success Chances "<<endl;
                supplies += 2;
                playerMorale += 3;
                 
            	endLineFunction(1);
				tabSpaceFunction(1);
				spaceFunction(2);
				pauseFunction("continue");
				
				scene7Function();
            
			} else {
                endLineFunction(1);
                tabSpaceFunction(1);
                spaceFunction(2);
				cout << " Failure! You failed and alarm traps "<<endl;
				playerHealth -= 10;
				playerMorale -= 15;
			
				endLineFunction(1);
				tabSpaceFunction(1);
				spaceFunction(2);
				pauseFunction("continue");
				
				scene8Function();
            }
            	
                
                validChoice = true; // Exit loop
                break;

            case 2:
                int randomNumberChoice2;
				int scoreCheck2;
				
				randomNumberChoice2 = randomNumGeneratorFunction(6);
			
				scoreCheck = score + randomNumberChoice2;

			if (scoreCheck >= 5) {
				endLineFunction(1);
				tabSpaceFunction(1);
                cout << " Success! Brute Force Attack Successfully Executed."<<endl;
                supplies += 2;
                playerMorale += 1;
                
                endLineFunction(1);
				tabSpaceFunction(1);
				spaceFunction(1);
				pauseFunction("continue");
				 
				scene7Function();
            } else {
            	endLineFunction(1);
				tabSpaceFunction(1);
                cout << " Failure! and You now triggered defense. "<<endl;
				playerHealth -= 15;
				playerMorale -= 3;
				
				endLineFunction(1);
				tabSpaceFunction(1);
				spaceFunction(1);
				pauseFunction("continue");
				
				scene8Function();
            }
 
                validChoice = true; // Exit loop
                break;

            default:
                // Error message for any number that's not 1 or 2
                errorMsgForChoiceInput();
                break; // Re-prompt user for input
        }// switch case end
    } // while loop ends here


	sceneID = 6;
	return sceneID;
	
} // scene6()Function function ends here


// scenes 7 Function
int scene7Function() {
	
	 scene7Title();
	
	tabSpaceFunction(1);
	spaceFunction(1);
	playerStatsFunction();
	
	// Implementing scene 7 story

	endLineFunction(1);
	tabSpaceFunction(5);
	spaceFunction(3);
	cout<<"Scene 7 - Inside The Archive ";
	endLineFunction(2);

// Implemented Scene 7 Story
cout<<"\t The door groans open on pneumatic echoes. Inside, corridors fold like the inside "
	<<"of a fossilized machine.\n \t Shelves of drives and paper towers lean in dim light. \n"<<endl;
	
cout<<"\t A humming server rack still breathes; a cluster of screens blink with cached logs. "
	<<"The Archive's guardians\n \t are not people but recorded voices: fragments of announcements "
	<<"and courts transcipts that scroll as text\n \t on old monitors. \n"<<endl;
	
cout<<"\t You find a terminal labeled \"Core log.\" On it, a menu offers two readable logs: "
	<<" \"Event Origins\" and\n \t \"Aftercare Directives.\"  \n"<<endl;
	
sceneChoiceRevealFunction(); // coming from utils.hpp


bool validChoice = false; // Flag to track valid input

    while (!validChoice) { // Loop until valid input is received
        //  scene 7 Chocices
        cout<<"\t Choices: \n"<<endl;
		cout<<"\t 1: Read \"Event Origins\" to learn what happened."<<endl;
		cout<<"\t 2: Read \"Aftercare Directives\" to learn post-Event survival methods and community "
			<<"locations \n"<<endl;
        cout << "\t Select your choice (1 or 2): ";
        cin >> choice; // Get user input

        // Check if the input is valid integer
        if (cin.fail()) {
			clearConsoleFunction();
            cout << "\n \t Invalid input! You can only enter a number.\n"<<endl;
            cin.clear(); // Clear error flags
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Discard invalid input
            continue; // Ask for input again
        }

        // Now check the actual value of choice
        switch (choice) {
            case 1:
                
                clearConsoleFunction();
				playerMorale += 3;
				scene9Function();
                
                validChoice = true; // Exit loop
                break;

            case 2:
               
                clearConsoleFunction();
                supplies += 3;
                playerMorale += 1;
                scene9Function();
                
                validChoice = true; // Exit loop
                break;

            default:
                // Error message for any number that's not 1 or 2
                errorMsgForChoiceInput();
                break; // Re-prompt user for input
        } // switch case ends here
    } // while loop ends here	
	
	

	sceneID = 7;
	return sceneID;
} // scene7Function() functions ends here

// scenes 8 Function
int scene8Function() {
	
	 scene8Title();
	tabSpaceFunction(1);
	spaceFunction(1);
	playerStatsFunction();
	
	// Implementing scene 8 story

	endLineFunction(1);
	tabSpaceFunction(5);
	spaceFunction(3);
	cout<<"Scene 8 - Alarmed Retreat ";
	endLineFunction(2);

// Implemented Scene 8 Story
cout<<"\t The door snaps shut behind a ringing alarm. Dust churns, and vent hiss. "
	<<"You grab what you can and escape\n \t through a maintenance ddor that dumps "
	<<"you into a service alley. \n"<<endl;
	
cout<<"\t The Archive remains closed, its secrets sealed for now. You are "
	<<"bruised but alive. Outside the land is\n \t quiter; distant lights blinks "
	<<"like watchful eyes. \n"<<endl;
	
cout<<"\t The setback stings, but you know The Archive is still a possibility "
	<<"if you gather more clues. \n"<<endl;

sceneChoiceRevealFunction(); // coming from utils.hpp


bool validChoice = false; // Flag to track valid input

    while (!validChoice) { // Loop until valid input is received
        // Scene 8 Choices
        cout<<"\t Choices: \n"<<endl;
		cout<<"\t 1: Return to camp to ask Sir Complier for deeper help. "<<endl;
		cout<<"\t 2: Travel farther down the valley to salvage supplies and allies. \n"<<endl;
        cout << "\t Select your choice (1 or 2): ";
        cin >> choice; // Get user input

        // Check if the input is valid integer
        if (cin.fail()) {
			clearConsoleFunction();
            cout << "\n \t Invalid input! You can only enter a number.\n"<<endl;
            cin.clear(); // Clear error flags
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Discard invalid input
            continue; // Ask for input again
        }

        // Now check the actual value of choice
        switch (choice) {
            case 1:
                
                clearConsoleFunction();
				playerMorale += 1;
				
				scene5Function();
                
                validChoice = true; // Exit loop
                break;

            case 2:
               
                clearConsoleFunction();
                supplies += 2;
                playerMorale -= 1;
                scene10Function();
                
                validChoice = true; // Exit loop
                break;

            default:
               // Error message for any number that's not 1 or 2
                errorMsgForChoiceInput();
                break; // Re-prompt user for input
        } // switch case ends here
    } // while loop ends here	
	
	
	sceneID = 8;
	return sceneID;
} // scene8Function() functions ends here


// scenes 9 Function
int scene9Function() {
	
	 scene9Title();
	tabSpaceFunction(1);
	spaceFunction(1);
	playerStatsFunction();
	
	// Implementing scene 9 story

	endLineFunction(1);
	tabSpaceFunction(5);
	spaceFunction(3);
	cout<<"Scene 9 - The Truth and the Burden ";
	endLineFunction(2);

// Implemented Scene 9 story
cout<<"\t You read. The Event was a cascade of failures: an experimental network "
	<<"update, a set of automated distri-\n \t bution decisions, and a final "
	<<"human error. \n"<<endl;
	
cout<<"\t The logs are clinical and merciless. They show how communities tried "
	<<"route aid, how some servers priori-\n \t tized convenience, and how a small "
	<<"group of Engineers made a choice that rippled outward. The Archive "
	<<"\n \t doesn't offer villains or absolution - only records. \n"<<endl;
	
cout<<"\t Among the pages you find a list of coordinates for rebuilding centers "
	<<"and a last message:\n \t \"Memory needs hands.\" \n"<<endl;
	
cout<<"\t As you close the log, you realize you can carry these coordinates "
	<<"to survivors and that knowledge itself\n \t has become your most valuable "
	<<"supply. \n"<<endl; 

sceneChoiceRevealFunction(); // coming from utils.hpp


bool validChoice = false; // Flag to track valid input

    while (!validChoice) { // Loop until valid input is received
        // Scene 9 Choices
        cout<<"\t Choices: \n"<<endl;
		cout<<"\t 1: Take the coordinates and head back to help survivors rebuild."<<endl;
		cout<<"\t 2: Secure the Archive and stay - preserve knowledge and defend "
			<<"this place. \n"<<endl;
        cout << "\t Select your choice (1 or 2): ";
        cin >> choice; // Get user input

        // Check if the input is valid integer
        if (cin.fail()) {
			clearConsoleFunction();
            cout << "\n \t Invalid input! You can only enter a number.\n"<<endl;
            cin.clear(); // Clear error flags
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Discard invalid input
            continue; // Ask for input again
        }

        // Now check the actual value of choice
        switch (choice) {
            case 1:
                
                clearConsoleFunction();
				supplies -= 1;
                playerMorale += 3;
                scene11Function(); 
                
                validChoice = true; // Exit loop
                break;

            case 2:
               
                clearConsoleFunction();
                playerMorale += 2;
                supplies += 1;
                scene11Function();
                
                validChoice = true; // Exit loop
                break;

            default:
               // Error message for any number that's not 1 or 2
                errorMsgForChoiceInput();
                break; // Re-prompt user for input
        } // switch case ends here
    } // while loop ends here	
	
	

	sceneID = 9;
	return sceneID;
} // scene9Function() functions ends here


// scenes 10 Function
int scene10Function() {
	
	 scene10Title();
	tabSpaceFunction(1);
	spaceFunction(1);
	playerStatsFunction();
	
	// Implementing scene 10 story

	endLineFunction(1);
	tabSpaceFunction(5);
	spaceFunction(3);
	cout<<"Scene 10 - Caravan of Chance ";
	endLineFunction(2);

cout<<"\t You join a small caravan of scavengers who value trade and simple rules "
	<<"of survival. Days pass with\n \t shared bread and barter under song. \n"<<endl;
	
cout<<"\t You learn a lot: how to mend a pump, where to find clean filters, and "
	<<"how to coax an old generator\n \t back to life. \n"<<endl;
	
cout<<"\t You start to feel awkwardly, like part of something again. \n "<<endl;

cout<<"\t Yet the memory of the Archive tugs. It holds answers you cannot unsee. \n"<<endl;

sceneChoiceRevealFunction(); // coming from utils.hpp


bool validChoice = false; // Flag to track valid input

    while (!validChoice) { // Loop until valid input is received
        //  scene 10 choices
        cout<<"\t Choices: \n"<<endl;
		cout<<"\t 1: Use caravan's aid to mount a better armed return to The Archive. "<<endl;
		cout<<"\t 2: Keep moving with caravan to distant settlements, spreading what "
			<<"you know. \n"<<endl;
        cout << "\t Select your choice (1 or 2): ";
        cin >> choice; // Get user input

        // Check if the input is valid integer
        if (cin.fail()) {
			clearConsoleFunction();
            cout << "\n \t Invalid input! You can only enter a number.\n"<<endl;
            cin.clear(); // Clear error flags
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Discard invalid input
            continue; // Ask for input again
        }

        // Now check the actual value of choice
        switch (choice) {
            case 1:
                int  random1, random2, random3;
                
                clearConsoleFunction();
				supplies -= 1;
                playerMorale += 2;
                
                random1 = rand() % 4 + 1;
                random2 = rand() % 6 + 1;
                score = random1 + random2;
                scene6Function();  
                
                validChoice = true; // Exit loop
                break;

            case 2:
               
                clearConsoleFunction();
                playerMorale += 1;
                supplies += 2;
                scene11Function();
                
                validChoice = true; // Exit loop
                break;

            default:
                // Error message for any number that's not 1 or 2
                errorMsgForChoiceInput();
                break; // Re-prompt user for input
        } // switch case ends here
    } // while loop ends here	
	
	

	sceneID = 10;
	return sceneID;
} // scene10Function() functions ends here

// scenes 11 Function
int scene11Function() {
	
	 scene11Title();
	tabSpaceFunction(1);
	spaceFunction(1);
	playerStatsFunction();
	
	// Implementing scene 11 story

	endLineFunction(1);
	tabSpaceFunction(5);
	spaceFunction(3);
	cout<<"Scene 11 - Epilogue: Memory Needs Hands ";
	endLineFunction(2);


cout<<"\t You stand beneath the same pale light where you began, but you are not the "
	<<"same. Whether you took the\n \t Archive's coordinates back to scattered survivors, "
	<<"stayed to guard its humming racks, or traveled with\n \t a caravan carrying "
	<<"knowledge like a seed. \n"<<endl;
	
cout<<"\t Your choices stitched together a small patch of future. People who learn "
	<<"the Archive's lessons start\n \t rebuiding trust in systems and in each other. \n"<<endl;
	
cout<<"\t In a world that nearly forgot how to care, you carry memory with hands that "
	<<"will teach others to build\n \t again. The sky over Ashrail Valley is not bright yet, "
	<<"but it holds quiet patience. \n"<<endl;
	
cout<<"\t Outside, far on a road that you once feared to take, new footsteps echo - "
	<<"not yours alone \n"<<endl; 

endLineFunction(2);
tabSpaceFunction(1);
pauseFunction("continue");
// after this add game finished function

clearConsoleFunction();

// now game end message and display credits 
endingFunction();

	sceneID = 11;
	return sceneID;
} // scene11Function() functions ends here

void endingFunction(){
	
	gameEndTitle();
	
	cout<<"\t \"In a world silenced by rust and error memory becomes the last refuge. " 
		<<"Carry the records like lanterns, teach hands to rebuild what code once "
		<<"promised, and let small acts of repair stitch a future from the ashes.\" ";
		
	endLineFunction(3);
	tabSpaceFunction(6);
	spaceFunction(9);
	cout<<"Credits: \n"<<endl;
	tabSpaceFunction(6);
	spaceFunction(3);
	cout<<"Projects Developers: \n"<<endl;
	tabSpaceFunction(6);
	spaceFunction(5);	
	cout<<"Dodwani Khusbhu"<<endl;
	tabSpaceFunction(6);
	spaceFunction(5);
	cout<<"Jawad Ali"<<endl;
	tabSpaceFunction(6);
	spaceFunction(5);
	cout<<"Gilgamesh BABA"<<endl;
	
	// pauseFunction("exit");
	// exit(0);

		endLineFunction(2);
		tabSpaceFunction(6);
		pauseFunction("continue");
		clearConsoleFunction();

}

void allScenes(){

startScene();


} // allScenes() function ends here

#endif // SCENES_HPP
