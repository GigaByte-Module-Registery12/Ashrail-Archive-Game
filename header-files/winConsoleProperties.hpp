//  winConsoleProperties.hpp header file
// Header file that Console window disable maximize and Rezise
#ifndef WINCONSOLEPROPERTIES_HPP
#define WINCONSOLEPROPERTIES_HPP

#include<iostream>
using namespace std;

#ifdef _WIN32 // Check if the operating system is Windows

#include<windows.h>

void DisableMaximizeButton() {
    HWND consoleWindow = GetConsoleWindow(); // Get the console window handle
    LONG_PTR style = GetWindowLongPtr(consoleWindow, GWL_STYLE);
    style &= ~WS_MAXIMIZEBOX; // Disable maximize button
    SetWindowLongPtr(consoleWindow, GWL_STYLE, style);
}

// Function to disable resizing
void DisableResizeFunctionality() {
    HWND consoleWindow = GetConsoleWindow(); // Get the console window handle
    LONG_PTR style = GetWindowLongPtr(consoleWindow, GWL_STYLE);
    style &= ~WS_THICKFRAME; // Disable resizing
    SetWindowLongPtr(consoleWindow, GWL_STYLE, style);
}


#else // For other operating systems, primarily Linux and macOS
// nonw cause no special functionality required for linux
#endif // End of the conditional compilation block


#endif //  WINCONSOLEPROPERTIES_HPP
