/*
 * Logan Welsh
 * lwelsh@chapman.edu
 * CPSC-298-07
 * int2020-assign2
 * zeroboth.cpp
 */

/*
 * Problem 3 (zeroboth.cpp):
 * Implement a void function called zeroBoth that has two call-by-reference parameters,
 * both of which are variables of type int, and sets the values of both variables to 0.
 */

#include <iostream>
using namespace std;


void zeroBoth(int& a, int& b) {	// a and b are called by reference, denoted by '&'.
	a = 0;
	b = 0;
}


int main(int argc, char **argv) {

	// DECLARE VARIABLES
	int x = 42;
	int y = 117;
	
	
	// PRINT VALUES BEFORE CALLING zeroBoth
	cout << "Values BEFORE calling zeroBoth:\t" << x << '\t' << y << endl;
	
	
	// CALL zeroBoth
	zeroBoth(x, y);
	
	
	// PRINT VALUES AFTER CALLING zeroBoth
	cout << "Values AFTER calling zeroBoth:\t" << x << '\t' << y << endl;


	return 0;
}