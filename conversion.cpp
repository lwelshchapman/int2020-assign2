/*
 * Logan Welsh
 * lwelsh@chapman.edu
 * CPSC-298-07
 * int2020-assign2
 * conversion.cpp
 */

/*
 * Problem 5 (conversion.cpp):
 * Write a program that will read in a length in feet and inches
 * and output the equivalent length in meters and centimeters.
 * Use at least three functions:
 *	one for user input,
 *	one or more for calculating,
 *	and one for output(console).
 * Include a loop that lets the user repeat this computation for new input values
 * until the user says he or she wants to end the program (user has to type exit).
 * There are 0.3048 meters in a foot, 100 centimeters in a meter, and 12 inches in a foot.
 */

#include <iostream>
using namespace std;


void getLengthSAE(int& feet, double& inches) {
	
	cout << "Feet: ";
	cin >> feet;
	
	cout << "Inches: ";
	cin >> inches;

}


void SAEtoMetric(int feet, double inches, int& meters, double& centimeters) {

	double fullMeters = (feet + (inches/12)) * 0.3048;	// Combine feet & inches into one double, then convert that to metric

	while ((fullMeters - 1) >= 0) {	// Move each whole meter out of fullMeters into meters one by one...
		meters++;
		fullMeters--;
	}

	centimeters = fullMeters * 100;	// ..the remaining value, multiplied by 100, gives the number of centimeters

}


void outputMetric(int meters, double centimeters) {

	cout << endl;	// Blank line to separate SAE and metric measurements

	cout << "Meters:\t" << meters << endl;
	cout << "Centimeters:\t" << centimeters << endl;

}


int main(int argc, char **argv) {

	// DECLARE VARIABLES
	int feet = 0;
	double inches = 0.0;
	
	int meters = 0;
	double centimeters = 0.0;
	
	
	// GET SAE LENGTH
	getLengthSAE(feet, inches);
	
	// CONVERT SAE MEASUREMENTS TO METRIC
	SAEtoMetric(feet, inches, meters, centimeters);
	
	// OUTPUT METRIC RESULTS
	outputMetric(meters, centimeters);


	return 0;
}