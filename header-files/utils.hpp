// utils Header file

#ifndef UTILS_HPP
#define UTILS_HPP

/*

 #ifndef UTILS_HPP (if not defined): Check if the macro UTILS_HPP is not defined.
 #define UTILS_HPP: Define the macro if it isn't defined.
 #endif: Ends the conditional.

This way, if utils.hpp is included multiple times directly or indirectly, 
the content would only be processed once, thus avoiding the redefinition error.

*/



#include<iostream>
#include<limits>     // for numeric_limits used by cin.ignore(..);
#include<cstdlib>
#include<ctime>
#include "globalVars.hpp"
#include "ui.hpp"

using std::cout;
using std::cin;
using std::endl;
using std::string;
using namespace std;


void spaceFunction(int s){
	for(int i = 1; i <= s; i++){
		cout<<" ";
	} // loops end here.
} // spaceFunction(int s) function ends here.

// Function for breaking the lines
void endLineFunction(int e){
	for(int i = 1; i <= e; i++){
		cout<<endl;
	}// loops end here.
} // endLineFunction(int e) function ends here.

// Function for spacing of tab
void tabSpaceFunction(int t){
	for(int j = 1; j <= t; j++){
		cout<<"\t";
	} // loops end here.
} // tabSpaceFunction(int t) function ends here

void pauseFunction(string str){
	
		cout<<"Press enter to "<<str<<endl;
		//cin.ignore(); // Ignores the new line or the input
		// cin.ignore(); // using instead of system("PAUSE"); for cross platform functionality
	
		cin.get(); // wait for single Enter
		
		// cin.get works same like system("PAUSE");
	
} // pauseFunction() ends here.

void sceneChoiceRevealFunction(){
	
	tabSpaceFunction(1);
	spaceFunction(1);
	pauseFunction("reveal the choices! ");
	
} // sceneChoiceRevealFunction() ends here

int randomNumGeneratorFunction(int n){
	
srand(static_cast<unsigned int>(time(0))); // Seed the random number generator
int randomNum = rand() % n + 1; // Generate a digit between 0-5
return randomNum;

} //  randomNumGeneratorFunction(); ends here

// PIN GUESSING

void pinGuessingFunction() {
	
	srand(static_cast<unsigned int>(time(0))); // Seed the random number generator
	
    for (int i = 0; i < 3; i++) {
        clearConsoleFunction();
        

       // int randomNumber = rand() % 10 + 1; // Generate a digit between 0-9
        int randomNumber = randomNumGeneratorFunction(10); // Generate a digit between 0-10
        int userGuess = 0;
        int attempts = 0;

		cout<<"---- YOU ENTERED IN PIN CRACKING Utility ---- \n"<<endl;
        cout << "You are using a PIN cracking Program to simplify your guessing of PIN" << endl; 
        cout << "Guess the " << (i + 1) << " digit of PIN" << endl;
        cout << "Hint: You have to guess a digit between 0 and 10." << endl;

        // Loop until the user guesses the correct number
while(userGuess != randomNumber) {
    cout << "Enter your guess: ";
    cin >> userGuess;

    // Check if the input is valid
    if (cin.fail()) {
        // Clear the error flags
        cin.clear();
        // Ignore the invalid input
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Invalid input! Please enter only numbers between 0 and 10." << endl;
        attempts++; // Increment attempts even for invalid input, if needed
        continue; // Prompt for input again
    }

    // Check if the guessed number is within the valid range
    if (userGuess < 0 || userGuess > 10) {
        cout << "Please enter a number between 0 and 10." << endl;
        attempts++; // Increment if you want to track attempts
        continue; // Prompt for input again
    }

    attempts++; // Increment only when a valid guess is made

    if (userGuess == randomNumber) {
       pinRandomValue[i] = randomNumber; // Save the correct digit
        cout << "Congratulations! You've guessed the number " << randomNumber 
             << " in " << attempts << " attempts!" << endl;
        cout << "Remember not to forget the digits of the PIN!" << endl;
		cin.get();
    } else if (userGuess > randomNumber) {
       cout << "Too high! Try again." << endl;
    } else if (userGuess < randomNumber){
        
		
    cout << "Too low! Try again." << endl;
   
    }
}; // while (userGuess != randomNumber);
        
        
    } // Random digit for loop ends here

    // Input for cracked PIN
    for (int i = 0; i < 3; i++) {
        cout << "Please enter the " << (i + 1) << " digit of PIN you cracked by hacking: ";
        cin >> guessPinDigits[i];
    }

    // Input validation loop
    bool validChoice = false;
    while (!validChoice) {
        // Check if the input is valid integer after capturing
        if (cin.fail()) {
            clearConsoleFunction();
            cout << "\n \t Invalid input! Please enter a correct PIN. \n" << endl;
            cin.clear(); // Clear error flags
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Discard invalid input
            continue; // Ask for input again
        }

        validChoice = true; // Assume valid until proven otherwise

        for (int i = 0; i < 3; i++) {
            if (guessPinDigits[i] != pinRandomValue[i]) {
                validChoice = false;
                clearConsoleFunction();
                cout << "Please enter the correct PIN!" << endl;
                break; // Exit the loop and re-check inputs
            }
        }

        // If inputs are correct, congratulate the user
        if (validChoice) {

cout << "Congratulations! You've correctly entered the PIN!" << endl;
        }
    } // End of the validation while loop
} // End of pinGuessingFunction

#endif // UTILS_HPP
