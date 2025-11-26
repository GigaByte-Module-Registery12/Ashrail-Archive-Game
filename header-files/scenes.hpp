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
void playerStatsFunction();
void clearConsoleFunction();

// function declaration of scenes
int scene2Function();
int scene3Function();
int scene4Function();
int scene5Function();
int scene6Function();
// int scene7Function();
// int scene8Function();
// int scene9Function();
// int scene10Function();
// int scene11Function();

// function declaration of scene titles
void startSceneTitle();
void scene2Title();
void scene3Title();
void scene4Title();
void scene5Title();
void scene6Title();
void scene7Title();
void scene8Title();
void scene9Title();
void scene10Title();
void scene11Title();




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


cout<<"\t Choices: \n"<<endl;
cout<<"\t 1: Take the lower road, closer to the riverbed - it's quiter, but shadowed and wet."<<endl;
cout<<"\t 2: Climb the broken overpass and take the high road -- risk of exposure, but faster "
	<<"you can see ahead. \n"<<endl;
cout<<"\t  Select your choice (1 or 2): ";
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
			playerHealth -= 15;
			playerMorale -= 10;
			scene3Function();
		break;
		
		default:
			endLineFunction(3);
			tabSpaceFunction(5);
			spaceFunction(4);
			cout<<"You have to enter 1 or 2 \n"<<endl;
			tabSpaceFunction(5);
			spaceFunction(4);
			pauseFunction("continue"); // responsible for pausing and showing key to user to continue
			clearConsoleFunction();
			// Implement a loop so it should ask again for user to enter correct input
			
		break;
	}
	
	
	

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

cout<<"\t Choices: \n"<<endl;
cout<<"\t 1: Approch and speak to him.(optional)"<<endl;
cout<<"\t 2: Avoid him and move on; better not to chance trouble. \n"<<endl;
cout<<"\t  Select your choice (1 or 2): ";
cin>>choice;


	switch(choice){
		case 1:
			// call respective function of scene
			clearConsoleFunction();
			
			// Choice 1 of meeting with Bangali Baba
		
			
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
			pauseFunction("continue"); // coming from utils.hpp
			cin.get();
			clearConsoleFunction();
			
			
			scene4Function();
		
		break;
	
		case 2:
			// call respective function of scene
			clearConsoleFunction();
			playerMorale -= 1;
			scene4Function();
		break;
		
		default:
			endLineFunction(3);
			tabSpaceFunction(5);
			spaceFunction(4);
			cout<<"You have to enter 1 or 2 \n"<<endl;
			tabSpaceFunction(5);
			spaceFunction(4);
			
			clearConsoleFunction();
			// Implement a loop so it should ask again for user to enter correct input
			
		break;
	}


	sceneID = 2;
	return sceneID;
	
} // scene2Function() function ends here

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

tabSpaceFunction(2);
cout<<" Choices: \n"<<endl;

tabSpaceFunction(2);
cout<<"  1: Examine the footprints closely and follow their direction. "<<endl;

tabSpaceFunction(2);
cout<<"  2: Take the radio and head downhill quickly, avoiding following anyone. \n"<<endl;

tabSpaceFunction(2);
cout<<"  Select your choice (1 or 2): ";
cin>>choice;


	switch(choice){
		case 1:
			// call respective function of scene
			clearConsoleFunction();
			playerMorale += 2;
			scene4Function();
		break;
	
		case 2:
			// call respective function of scene
			clearConsoleFunction();
			supplies += 1;
			playerMorale -= 1;
			scene4Function();
		break;
		
		default:
			endLineFunction(3);
			tabSpaceFunction(5);
			spaceFunction(4);
			cout<<"You have to enter 1 or 2 \n"<<endl;
			tabSpaceFunction(5);
			spaceFunction(4);
			pauseFunction("continue"); // responsible for pausing and showing key to user to continue
			clearConsoleFunction();
			// Implement a loop so it should ask again for user to enter correct input
			
		break;
	}



	sceneID = 3;
	return sceneID;
	
} // scene3()Function function ends here


int scene4Function(){
	
	 scene4Title();
	
	endLineFunction(1);
	playerStatsFunction();
	
	endLineFunction(1);
	tabSpaceFunction(5);
	spaceFunction(8);
	cout<<"Scene 4 - Roadside Camp";
	endLineFunction(3);
	
// Implemeting scene 4 story

cout<<"\t By midday you reach a crossroads of scorched billboards. A small camp of tarps "
	<<"and salvaged metal stands\n \t by the road. \n "<<endl;
	
cout<<"\t Laughter - thin but genuine — drifts out. Among the campers are three notable "
	<<"figures.. \n"<<endl;

cout<<"\t who chat and trade: a tall man with spectacles and an old laptop, and a cheerful "
	<<"figure who offers tea,\n \t and a man who talks about his confidence while fussing with "
	<<"a scarf. \n"<<endl;
	
cout<<"\t They watch you with curiosity; the laptop man particularly interesting to you, "
	<<"cause he is holding a\n \t laptop in this time. \n"<<endl;

endLineFunction(1);
sceneChoiceRevealFunction(); // coming from utils.hpp


cout<<"\t Choices: \n"<<endl;
cout<<"\t 1: Appraoch the man with the laptop and ask about The Archive. "<<endl;
cout<<"\t 2: Ignore the camp and continue toward The Archive immediately. \n"<<endl;
cout<<"\t  Select your choice (1 or 2): ";
cin>>choice;


	switch(choice){
		case 1:
			// call respective function of scene
			clearConsoleFunction();
			scene5Function();
			metSirComplier = true; // success chances higher if it is true
		break;
	
		case 2:
			// call respective function of scene
			clearConsoleFunction();
			supplies -= 1;
			playerMorale -= 2;
			scene6Function();
		break;
		
		default:
			endLineFunction(3);
			tabSpaceFunction(5);
			spaceFunction(4);
			cout<<"You have to enter 1 or 2 \n"<<endl;
			tabSpaceFunction(5);
			spaceFunction(4);
			pauseFunction("continue"); // responsible for pausing and showing key to user to continue
			clearConsoleFunction();
			// Implement a loop so it should ask again for user to enter correct input
			
		break;
	}



	sceneID = 4;
	return sceneID;
	
} // scene4()Function function ends here



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

cout<<"\t  Choices: \n"<<endl;
cout<<"\t  1: Ask Sir Complier for a direct route map to The Archive. "<<endl;
cout<<"\t  2: Ask about the Archive's gate key and the 'lines of speech' riddle. \n"<<endl;
cout<<"\t   Select your choice (1 or 2): ";
cin>>choice;



	switch(choice){
		case 1:
			// call respective function of scene
			clearConsoleFunction();
			supplies += 1;
			playerMorale += 2;
			scene6Function();
		break;
	
		case 2:
			// call respective function of scene
			clearConsoleFunction();
			playerMorale += 4;
			scene6Function();
			
		break;
		
		default:
			endLineFunction(3);
			tabSpaceFunction(5);
			spaceFunction(4);
			cout<<"You have to enter 1 or 2 \n"<<endl;
			tabSpaceFunction(5);
			spaceFunction(4);
			pauseFunction("continue"); // responsible for pausing and showing key to user to continue
			clearConsoleFunction();
			// Implement a loop so it should ask again for user to enter correct input
			
		break;
	}

	 
	
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
	endLineFunction(3);
	
// Implemeting scene 6 story

cout<<"\t The terrain eases and you see the hulking mass of The Archive ahead: a dome of corrugated "
	<<"metal and glass,\n \t half-buried in silt. \n"<<endl;
	
cout<<"\t Its entrance is a rusted door marked with faded labels several languages. An old terminal "
	<<"sits to one side,\n \t its screen cracked but dark. \n"<<endl;
	
cout<<"\t Around the door, six plaques hold fragments of text — torn, half-melted lines that look "
	<<"like parts of\n \t poems, error logs, and radio transcripts. \n"<<endl;

cout<<"\t You remember Bangali Baba’s riddle about “lines of speech” and the hint Sir Compiler "
	<<"gave about a\n \t three -word key. The terminal awaits input: three words, separated by spaces. \n"<<endl;

sceneChoiceRevealFunction(); // coming from utils.hpp

cout<<"\t  Choices: \n"<<endl;
cout<<"\t  1: Try to intercept the plaques and enter words based on a poetic guess "<<endl;
cout<<"\t  2: Use brute force - try common archive keys you heard on the radio and the scraps \n"<<endl;
cout<<"\t   Select your choice (1 or 2): ";
cin>>choice;


	switch(choice){
		case 1:
			// call respective function of scene
			clearConsoleFunction();
			
		break;
	
		case 2:
			// call respective function of scene
			
			
		break;
		
		default:
			endLineFunction(3);
			tabSpaceFunction(5);
			spaceFunction(4);
			cout<<"You have to enter 1 or 2 \n"<<endl;
			tabSpaceFunction(5);
			spaceFunction(4);
			pauseFunction("continue"); // responsible for pausing and showing key to user to continue
			clearConsoleFunction();
			// Implement a loop so it should ask again for user to enter correct input
			
		break;
	}



	sceneID = 6;
	return sceneID;
	
} // scene6()Function function ends here

void allScenes(){

startScene();


} // allScenes() function ends here

#endif // SCENES_HPP
