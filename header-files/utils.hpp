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
#include<string>
#include<limits>     // for numeric_limits used by cin.ignore(..);
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


#endif // UTILS_HPP
