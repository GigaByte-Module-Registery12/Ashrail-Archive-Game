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
string playerName = "Arin";
// character encounter flag(not sure going to use or not)
bool metSirComplier, metBangaliBaba, metSigmaTemp100;




#endif // GLOBALVARS_HPP

