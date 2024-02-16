/*  
 Circle Lab
 By: Burton Besecke FIXME1 FIXED
 CSCI 130-002
 Date:15 Feb 2024 FIXME2  FIXED
 
 This program prompts the user to enter the radius of a circle.
 It then calculates and displays its area and circumference.
 
Algorithm steps:
1. Prompt user to enter radius of a circle and store the radius into a variable
2. Calculate area using the formula pi x radius x radius and store the value into a variable
3. Calculate circumference using the formula 2 x pi x radius and store the value into a variable
4. Output the calculated values for area and circumference
*/
 
#include <iostream> //library for common input, output and formatting
#include <string> // library for string type
#include <cmath> //library for pow and other math functions
#include <iomanip> // library for output formatting: setprecision()

using namespace std; //this line resolves cout, cin, endl, etc.
 
int main() //main entry function that returns 0
{
	const double pi = 3.14159;
	// variables declared and initialized
	double radius=0, area=0, circumference=0;

	string name = "Anonymous"; // variable to store user's name
	cout << "Hi there, what's your full name? ";
	// FIXME3: use getline to read user's fullname and store it into name variable FIXED

	getline(cin,name);

	cout << "Nice meeting you, " << name << "!" << endl;

	// display some information about this program to the user
	cout << "\nProgram finds area and circumference of a circle with the given radius.\n\n";

	// prompt user telling what to do
	cout << name << ", please enter radius of a circle: ";
	cin >> radius; //read the entered value and store it into radius variable

	area = pi * pow(radius, 2); // same as: area = pi * radius * radius;
	//FIXME4: find circumference FIXED

	circumference = 2 * pi * radius;

	cout << "Your circle has radius:\t" << fixed << setprecision(2) << radius << '\n';
	cout << "Area of the circle is:\t" << fixed << setprecision(2) << area << '\n';
	cout << "Circumference of the circle is:\t" << setprecision(2) << circumference <<  endl;
	//FIXME5: Output the value of circumference FIXED

	// the following code may be required to make your console pause...
	cout << "Good bye...\nHit enter to exit the program!" << '\n';
	cin.ignore(1000, '\n'); //ignore 1000 chars or until \n whichever comes first
	// make the console wait for user input
	cin.get();
	return 0;
}