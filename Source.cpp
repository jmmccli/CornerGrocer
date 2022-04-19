#define _CRT_SECURE_NO_WARNINGS

#include <iostream>		// cin cout functionality
#include <string>		// string class
#include <fstream>		// file stream
#include <iomanip>		// stream manipulators for alignment, width, etc
#include <python.h>
#include "CornerGrocer.h"

using namespace std;

int main()
{
	string input;
	char option = '0';

	cin.exceptions(std::ios_base::failbit | std::ios_base::badbit);		// set exception handling for stream
	cout.exceptions(std::ios_base::failbit | std::ios_base::badbit);	// set exception handling for stream

	try {
		do {
			printMenu(cout);
			getline(cin, input);		// get user option

			if (input.size() > 0) {		// make sure input has something
				option = input.at(0);	// get first character, ignore rest
				handleOption(option, cin, cout);
			}
			else {
				cout << "Invalid entry: Expected 1, 2, 3, or 4." << endl;
			}
		} while (option != '4');		// continue until 4 is pressed
	}
	catch (exception ex) { // something went wrong, could be python, could be stream, or something else
		cout << ex.what();
		return -1;			// return error indicator
	}

	return 0;				// return success indicator
}