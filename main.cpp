// COP3014 Assignment 1
// Author: <fill in your name here>
// Date: <fill in the date you submitted this assignment here>
//
// Convert a temperature from celsius to fahrenheit.
//
#include <iostream>
int main() {
	// Prompt user for celsius temperature.
	cout << "Please enter a temperature in celsius: " << flush;

	// Read the celsius temperature.  float celsius;
	cin >> celsius;

	// Convert the celsius value to fahrenheit.  float fahrenheit;
	fahrenheit = (9.0/5.0)*celsius - 32;

	Print out the result.
	cout << celsius << " degrees in celsius is equal to "
	<< fahrenheit << " degrees in fahrenheit." << endl;

	return 0;
}
