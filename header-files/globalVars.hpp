// GLOBALVARS_HPP Header file

// Header Gurards
#ifndef GLOBALVARS_HPP // Check if GLOBALVARS_HPP is not defined
#define GLOBALVARS_HPP // Define GLOBALVARS_HPP to prevent multiple inclusion

/*
/*
    Header guards prevent multiple inclusions of this header file,
    avoiding redefinition errors. The same macro is used to ensure
    that the compiler processes this file only once, even if it
    is included multiple times.
*/



#include<iostream>
using namespace std;

// GLobal Varaibles

// Global Variables

int playerHealth = 100; // Player's health, starting at 100
int playerMorale = 50;  // Player's morale, starting at 50
int supplies = 3;       // Number of supplies available to the player
int choice = 0;         // Variable to store the player's choice
int sceneID = 0;        // Current scene identifier in the game
int score = 0;          // Player's current score
int scoreCheck = 0;     // Variable for checking score thresholds
int guessPinDigits[3] = {0, 0, 0}; // Array to store digits of the player's PIN for input
int pinRandomValue[3] = {0, 0, 0}; // Array to hold three different randomly generated PIN values
string playerName = "Arin"; // Default player name

// Character encounter flags; indicate whether certain characters have been met
bool metSirComplier = false; // Flag for encountering Sir Complier
bool metBangaliBaba = false;  // Flag for encountering Bangali Baba
bool metSigmaTemp100 = false;  // Flag for encountering Sigma Temp 100

// Game state variables
bool gameRunning = true; // Flag to indicate if the game is currently running
char playGameAgain = ' '; // Variable to store player's choice to play again




#endif // GLOBALVARS_HPP

