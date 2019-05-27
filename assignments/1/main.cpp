// Assignment 1
// David Whynot
// 5/26/2019
// CS 2150
// Chapter 3 - Exercise 5 - page 183

#include <string>
#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main() {
	// declare vars
	double currentSalary, updatedSalary, percentPayIncrease;
	char chr;
	string firstName, lastName;
	ifstream inputFile;
	ofstream outputFile;
	int fileLines = 1;

	// open input data file "Ch3_Ex5Data.txt" for reading
	inputFile.open("Ch3_Ex5Data.txt");

	// check if file was opened succesfully
	if (!inputFile.is_open()) {
		// failed to open input file
		// print error and exit
		cout << "File \"Ch3_Ex5Data.txt\" could not be opened for reading... Program will now exit." << endl;
		exit(1);
	} else {
		// input file opened succesfully

		// open output file "Ch3_Ex5Output.dat" for writing
		outputFile.open("Ch3_Ex5Output.dat");

		// check if file was opened succesfully
		if (!outputFile.is_open()) {
			// failed to open output file
			// print error and exit
			cout << "File \"Ch3_Ex5Output.dat\" could not be opened for writing... Program will now exit." << endl;
			exit(1);
		} else {
			// output file opened succesfully

			// get number of lines in input file
			chr = inputFile.get();
			while (inputFile.good() && !inputFile.eof()) {
				if (chr == '\n') ++fileLines;

				chr = inputFile.get();
			}

			// go back to the start of the input file to read data by clearing the End of File flag and then setting the stream position to 0
			inputFile.clear();
			inputFile.seekg(0);


			// loop through input file line by line, extract data, and write to output file
			for (int j = 0; j < fileLines; ++j) {
				// read data from input file into vars
				inputFile >> lastName >> firstName >> currentSalary >> percentPayIncrease;

				// calculate updated salary
				updatedSalary = currentSalary + (currentSalary * (percentPayIncrease / 100));

				// write data to output file
				outputFile << firstName << " " << lastName << " " << setprecision(2) << fixed << updatedSalary << endl;
			}

			// close input and output file streams
			inputFile.close();
			outputFile.close();
		}
	}

	return 0;
}