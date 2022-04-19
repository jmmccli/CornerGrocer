#ifndef PROJECT_THREE_CORNER_GROCER_H
#define PROJECT_THREE_CORNER_GROCER_H

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>		// cin cout functionality
#include <string>		// string class
#include <fstream>		// file stream
#include <iomanip>		// stream manipulators for alignment, width, etc
#include <python.h>

using namespace std;

//define ANSI VT-100 terminal color codes
constexpr auto RESET		= "\033[0m";
constexpr auto BLACK		= "\033[30m";			/* Black */
constexpr auto RED			= "\033[31m";			/* Red */
constexpr auto GREEN		= "\033[32m";			/* Green */
constexpr auto YELLOW		= "\033[33m";		    /* Yellow */
constexpr auto BLUE			= "\033[34m";			/* Blue */
constexpr auto MAGENTA		= "\033[35m";			/* Magenta */
constexpr auto CYAN			= "\033[36m";			/* Cyan */
constexpr auto WHITE		= "\033[37m";			/* White */
constexpr auto BOLDBLACK	= "\033[1m\033[30m";	/* Bold Black */
constexpr auto BOLDRED		= "\033[1m\033[31m";    /* Bold Red */
constexpr auto BOLDGREEN	= "\033[1m\033[32m";    /* Bold Green */
constexpr auto BOLDYELLOW	= "\033[1m\033[33m";    /* Bold Yellow */
constexpr auto BOLDBLUE		= "\033[1m\033[34m";    /* Bold Blue */
constexpr auto BOLDMAGENTA	= "\033[1m\033[35m";    /* Bold Magenta */
constexpr auto BOLDCYAN		= "\033[1m\033[36m";    /* Bold Cyan */
constexpr auto BOLDWHITE	= "\033[1m\033[37m";    /* Bold White */

/// <summary>
/// Display the menu to the output stream.
/// </summary>
/// <param name="outStream">The stream to send the menu to.</param>
void printMenu(ostream& outStream);

/// <summary>
/// Handle the menu choice from the user and dispatch to an appropriate function.
/// </summary>
/// <param name="option">A numeric character. I.E 1,2,3,4</param>
/// <param name="inStream">The input stream to get the selected option from.</param>
/// <param name="outStream">The output stream to send prompts to.</param>
void handleOption(char option, istream& inStream, ostream& outStream);

/// <summary>
/// Helper function to get the next input line from the input stream.
/// </summary>
/// <param name="inStream">The stream to read from.</param>
/// <returns>Returns the contents of the next line from the stream, empty string if input could not be read.</returns>
string getWord(istream& inStream);

/// <summary>
/// Output the item and frequency to the output stream
/// </summary>
/// <param name="item">The word to output</param>
/// <param name="frequency">The frequency to output</param>
/// <param name="outStream">The stream to send the data to</param>
void displayItemFrequency(string item, int frequency, ostream& outStream);

/// <summary>
/// Read in a file and output the data as a histogram.
/// </summary>
/// <param name="fileName">The name of the file.</param>
/// <param name="outStream">The output stream to send the histogram to.</param>
void displayFileHistogram(string fileName, ostream& outStream);

/// <summary>
/// Program entry point. Prints a menu, takes menu choice, handles menu option until exit.
/// </summary>
/// <returns>0 for success, errocode otherwise</returns>
int main();

#endif