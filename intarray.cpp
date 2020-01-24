/*
 * Logan Welsh
 * lwelsh@chapman.edu
 * CPSC-298-07
 * int2020-assign2
 * intarray.cpp
 */

/*
 * Problem 1 (intarray.cpp):
 * Write a program that will read up to ten nonnegative integers into an array called numberArray
 * and then write the integers back to the screen (console output).
 * For this exercise you need not use any functions. 
 */

#include <iostream>
using namespace std;

int main(int argc, char **argv) {

	// DECLARE VARIABLES
	const int ARRAY_SIZE = 10;
	
	int numberArray[ARRAY_SIZE];


	// GET VALUES FROM USER
	for(int i = 0; i < ARRAY_SIZE; ++i) {
		
		bool keepAsking = true;
		
		while (keepAsking) {	// For each index in the array, will continue to prompt for an int until a valid one is given
			cout << "Index " << i << ": ";

			int intIn;
			cin >> intIn;
			
			if (intIn >= 0) {	// If the given int is non-negative, store to array and continue...
				numberArray[i] = intIn;
				keepAsking = false;
			}
			else {	// ...if the given int is negative, inform user and ask for another int
				cout << "This array only accepts non-negative integers. Try again." << endl;
			}
		}
		
	}


	// OUTPUT ARRAY CONTENTS
	cout << "numberArray's contents:";
	for(int i = 0; i < ARRAY_SIZE; ++i) {
		cout << ' ' << numberArray[i];
	}
	cout << endl;
	
	return 0;
}