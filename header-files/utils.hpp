// utils Header file

// Header Guards
#ifndef UTILS_HPP // Check if UTILS_HPP is not defined
#define UTILS_HPP // Define UTILS_HPP to prevent multiple inclusions

/*

The purpose of this header guard is to prevent the content of this file from being processed 
multiple times, which would avoid redefinition errors.

*/

#include <iostream> // Include standard input-output library
#include <limits>   // Include library for numeric limits used with cin.ignore()
#include <cstdlib>  // Include standard library for general functions
#include <ctime>    // Include library for time functions
#include "globalVars.hpp" // Include global variables header file
#include "ui.hpp" // Include user interface functions header file

using std::cout; // Use cout from the standard namespace
using std::cin;  // Use cin from the standard namespace
using std::endl; // Use endl from the standard namespace
using std::string; // Use string from the standard namespace
using namespace std; // Use the standard namespace for convenience

// Function to produce space output
void spaceFunction(int s) {
    for (int i = 1; i <= s; i++) { // Loop to print spaces
        cout << " "; // Print a single space
    } // End of loop
} // spaceFunction(int s) ends here.

// Function to break lines
void endLineFunction(int e) {
    for (int i = 1; i <= e; i++) { // Loop to print newlines
        cout << endl; // Print a newline character
    } // End of loop
} // endLineFunction(int e) ends here.

// Function to produce tab spacing
void tabSpaceFunction(int t) {
    for (int j = 1; j <= t; j++) { // Loop to print tab spaces
        cout << "\t"; // Print a tab character
    } // End of loop
} // tabSpaceFunction(int t) ends here.

// Function that prompts the user and waits for Enter key
void pauseFunction(string str) {
    cout << "Press enter to " << str << endl; // Prompt user to press Enter
    cin.get(); // Waits for the user to press Enter
} // pauseFunction() ends here.

// Function to display choices with added spacing
void sceneChoiceRevealFunction() {
    tabSpaceFunction(1); // Add a tab space
    spaceFunction(1);    // Add a normal space
    pauseFunction("reveal the choices! "); // Prompt to reveal the choices
} // sceneChoiceRevealFunction() ends here.

// Function to generate a random number between 1 and n
int randomNumGeneratorFunction(int n) {
    srand(static_cast<unsigned int>(time(0))); // Seed the random number generator based on current time
    int randomNum = rand() % n + 1; // Generate a number between 1 and n
    return randomNum; // Return the generated random number
} // randomNumGeneratorFunction() ends here


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
