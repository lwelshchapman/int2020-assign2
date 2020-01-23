/*
 * Logan Welsh
 * lwelsh@chapman.edu
 * CPSC-298-07
 * int2020-assign2
 * 2darray.cpp
 */

/*
 * Problem 2 (2darray.cpp):
 * Write code that will fill the array a (declared below) with numbers typed in at the keyboard.
 * The numbers will be input five per line, on four lines
 * (although your solution need not depend on how the input numbers are divided into lines).
 * 
 * int a[4][5];
 */

#include <iostream>
using namespace std;

int main(int argc, char **argv) {

	// DECLARE VARIABLES
	const int A_X = 4;
	const int A_Y = 5;
	int a[A_X][A_Y];


	// GET VALUES FROM USER
	for(int i = 0; i < A_X; ++i) {
		for(int j = 0; j < A_Y; ++j) {
			cin >> a[i][j];
		}
	}


	// OUTPUT ARRAY CONTENTS
	cout << endl;
	for(int i = 0; i < A_X; ++i) {
		for(int j = 0; j < A_Y; ++j) {
			cout << a[i][j] << ' ';
		}
		cout << endl;
	}

	return 0;
}