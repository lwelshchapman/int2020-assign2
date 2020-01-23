/*
 * Logan Welsh
 * lwelsh@chapman.edu
 * CPSC-298-07
 * int2020-assign2
 * salestax.cpp
 */

/*
 * Problem 4 (salestax.cpp):
 * Implement a function called addTax.
 * The function addTax has two formal parameters:
 *	taxRate, which is the amount of sales tax expressed as a percent;
 *	and cost, which is the cost of an item before tax.
 * The function returns the value (float) of cost so that it includes sales tax.
 */

#include <iostream>
using namespace std;


float addTax(float cost, float taxRate) {
	return cost * (1 + (taxRate / 100));	// Multiplies the cost by 1.taxRate		Example: taxRate = 5; return cost * 1.05
}

int main(int argc, char **argv) {

	// DECLARE VARIABLES
	float demoSubtotal = 19.99;
	float demoTaxRate = 7.25;
	float demoTotal = 0;
	
	
	// TEST THE FUNCTION
	cout << "Price before tax:\t" << demoSubtotal << endl;
	
	demoTotal = addTax(demoSubtotal, demoTaxRate);

	cout << "Price after tax:\t" << demoTotal << endl;



	return 0;
}