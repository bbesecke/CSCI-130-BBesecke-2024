/* Name: Burton Besecke
Class: CSCI 130-002
Conditionals HW
6. Write algorithm steps.

Define a function that takes 5 numbers, calculates and returns the sum of the
numbers.

 Define a function that takes 5 numbers, calculates and returns the product of the
numbers.

 Define a function that takes 5 numbers, calculates and returns the average of the
numbers. Must call the function you defined earlier to find the sum of the five
numbers.

 Define a function that takes 5 numbers, finds and returns the largest value
among the numbers. Must use your own conditional statements and NOT use
any built-in function.

 Define a function that takes 5 numbers, finds and returns the smallest value
among the numbers. Must use your own conditional statements and NOT use
any built-in function.

 Define a function that takes five numbers and returns if the floor of the sum of
those numbers is even, odd or zero.

 At least one function must be templated to work on various types.

 Greet the user by their name and prompt them to enter 5 numbers.

 Display menu options for each function and call the specific function based on
the user's choice to calculate the result using switch statement and display the
result with proper descriptions.

 Define a function called test (5*5=25 points)
a. For each of the functions you defined above write at least 3 automated
test cases using assert statements to automatically test and verify that the
functions provide correct results.
b. Try to come up with corner cases (various data) to confirm the functions
still provide the correct results.

 Call the test function only if the “test” argument is passed to main. (5 points)

 10 bonus points will be given if you make your program continue to run and
calculate the statistical values of as many sets of 5 numbers as a user wishes
until they want to quit the program.

*/

#include <iostream>
#include <cmath>
#include <iomanip>
#include <cassert>
#include <string>

using namespace std;
// Use function prototypes//
double sum(double, double, double, double, double);
double product(double, double, double, double, double);
double avg(double, double, double, double, double);
double lgst(double, double, double, double, double);
double smlst(double, double, double, double, double);
double floor(double, double, double, double, double);

int main()

{
    string name;
    cout << "Greeting, enter your name:";

    cin >> name;

    cout << "Hello " << name << ", please enter 5 numbers seperated by a space:";

    double nums5;

    cin >> nums5;
    
    cout << "\n";

    cin.get();

    getchar();

    return 0;
}