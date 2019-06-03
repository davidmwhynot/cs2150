// Assignment 2
// David Whynot
// 6/2/2019
// CS 2150
// Chapter 5 - Exercise 4 - page 341

#include <string>
#include <iostream>
#include <regex>

using namespace std;

// declare functions
bool validateUserInput(string input);
string parseUserInput(string input);

int main() {
	// declare vars
	char continueUserResponse;

	// print introduction
	cout << "Phone Number Generator - David Whynot" << endl << endl;
	cout << "Enter phone numbers in word form (letters and spaces) and generate valid phone numbers based on the letters in the input." << endl;
	cout << "Note: do not enter dashes (-) in the input. Dashes will be provided automatically in the output." << endl;

	// user input loop
	do {
		// declar local vars
		string input, output;
		bool validationErrorFlag = false;

		// validation loop
		do {
			// check if we need to display validation error flag
			if(validationErrorFlag) {
				cout << endl << "Error: Invalid input. Please try again using letters and spaces ONLY. There must be at least 7 letters present." << endl;
			}

			// get user input
			cout << endl << "Enter a phone number in word form and press enter: ";
			cin >> input;

			// set validation error flag
			validationErrorFlag = true;
		} while(!validateUserInput(input));

		// parse user input
		output = parseUserInput(input);

		// display output
		cout << endl << "Converted phone number:" << endl;
		cout << output << endl << endl;

		// prompt to continue
		cout << "Continue? (y/n): ";
		cin >> continueUserResponse;

		cout << endl;
	} while(continueUserResponse == 'y' || continueUserResponse == 'Y');

	return 0;
}

bool validateUserInput(string input) {
	bool isInputValid;

	isInputValid = validateUserInput(input, regex("^[A-Za-z ]{7,}$"));

	cout << endl << isInputValid << endl;

	return false;
}

string parseUserInput(string input) {
	return "test";
}
