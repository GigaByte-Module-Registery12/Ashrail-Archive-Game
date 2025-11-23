// scenes header file
#ifndef SCENES_HPP
#define SCENES_HPP
/*

 #ifndef SCENES_HPP (if not defined): Check if the macro UTILS_HPP is not defined.
 #define SCENES_HPP: Define the macro if it isn't defined.
 #endif: Ends the conditional.

This way, if utils.hpp is included multiple times directly or indirectly, 
the content would only be processed once, thus avoiding the redefinition error.

*/

#include<iostream>
#include<string>
using namespace std;
// our header files:
#include "utils.hpp" // contains helper functions like endLine, tabSpace, spaceFunction
#include "ui.hpp" // contains ui related function and clearing screen
#include "globalVars.hpp" // contains global variable

// function declaration
void startSceneTitle();
void playerStatsFunction();
void clearConsoleFunction();
int scene2Function();
int scene3Function();
void scene2Title();

// First Starting scenes
int startScene() {
	
	startSceneTitle();
	playerStatsFunction();
	
	// Implementing scene 1 story

	
	tabSpaceFunction(4);
	spaceFunction(4);
	cout<<"Scene 1 - Prologue: The Ashrail Valley";
	endLineFunction(2);

	cout << "\t You wake to the hollow dawn light that leaks through the torn canvas of your shelter. "
<< "The world\n  you remember — streets of hum and glowing ads — is gone, traded for rust and wind "
<< "that carries the\n  metallic tang of old fires. They call this wasteland Ashrail Valley: a "
<< "frayed ribbon of cracked highway,\n  collapsed overpasses, and skeletal towers that once hosted voices. " 
<< "You have a pack with a few tins,\n  a battered radio that rarely finds a signal, and a worn notebook "
<< "with a name on the first page: "<<playerName<<".\n  The last message you heard on the radio was a voice " 
<< "promising refuge at an old data repository known\n  as The Archive, a place of records and machines" 
<< "that might still answer questions about the Event.\n  Today you decide to set out toward The Archive," 
<<"but the road forks where the highway is split by a\n  collapsed overpass. \n"
<< endl;

cout<<"  Choices: "<<endl;
cout<<"  1: Take the lower road, closer to the riverbed - it's quiter, but shadowed and wet."<<endl;
cout<<"  2: Climb the broken overpass and take the high road -- risk of exposure, but faster\n "
<<"    you can see ahead. \n"<<endl;
cout<<"  Select your choice(1 or 2): ";
cin>>choice;


	switch(choice){
		case 1:
			// call respective function of scene
			clearConsoleFunction();
			supplies -= 1;
			playerMorale += 2;
			scene2Function();
		break;
	
		case 2:
			// call respective function of scene
			clearConsoleFunction();
			playerHealth -= 5;
			playerMorale -= 1;
			scene3Function();
		break;
		
		default:
			endLineFunction(3);
			tabSpaceFunction(5);
			spaceFunction(4);
			cout<<"You have to enter 1 or 2 \n"<<endl;
			tabSpaceFunction(5);
			spaceFunction(4);
			cout<<"Press enter to continue"<<endl;
			cin.ignore();
			cin.get();
			clearConsoleFunction();
			
			
		break;
	}
	
	
	

	sceneID = 1;
	return sceneID;
} // startScene() functions ends here


int scene2Function(){
	scene2Title();
	
	
	playerStatsFunction();
	cout<<"scene 2"<<endl;
	sceneID = 2;
	return sceneID;
	
} // scene2() function ends here

int scene3Function(){
	
	
	playerStatsFunction();
	cout<<"scene 3"<<endl;
	sceneID = 3;
	return sceneID;
	
} // scene3()Function function ends here

void allScenes(){

startScene();


} // allScenes() function ends here

#endif // SCENES_HPP
