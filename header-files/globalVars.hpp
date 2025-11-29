// GLOBALVARS_HPP Header file

#ifndef GLOBALVARS_HPP
#define GLOBALVARS_HPP

/*

 #ifndef UTILS_HPP (if not defined): Check if the macro UTILS_HPP is not defined.
 #define UTILS_HPP: Define the macro if it isn't defined.
 #endif: Ends the conditional.

This way, if utils.hpp is included multiple times directly or indirectly, 
the content would only be processed once, thus avoiding the redefinition error.

*/



#include<iostream>
using namespace std;

// GLobal Varaibles

int playerHealth = 100;
int playerMorale = 50;
int supplies = 3;
int choice = 0;
int sceneID = 0;
int score = 0;
int scoreCheck = 0;
int guessPinDigits[3] = {0,0,0}; // using array for taking input of digits of PIN
int pinRandomValue[3] = {0,0,0}; // using array for 3 different PIN values
string playerName = "Arin";
// character encounter flag(probably going to use this)
bool metSirComplier, metBangaliBaba, metSigmaTemp100;
bool gameRunning = true;
char playGameAgain = ' ';



#endif // GLOBALVARS_HPP

