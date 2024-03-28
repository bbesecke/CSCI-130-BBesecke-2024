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
void printMenu(void);

void getFiveNums(double &, double &, double &, double &, double &);

double sum(double &, double &, double &, double &, double &);
double product(double &, double &, double &, double &, double &);
double avg(double &, double &, double &, double &, double &);
double lgst(double &, double &, double &, double &, double &);
double smlst(double &, double &, double &, double &, double &);
double flor(double &, double &, double &, double &, double &);

void test();
void clearscreen();

int main(int argc, char *argv[])

{
    int choice;
    string name;
    clearscreen();
    // user enters name//
    cout << "Greeting, enter your name: ";

    cin >> name;

    // user enters 5 nums//
    double num1, num2, num3, num4, num5;
    getFiveNums(num1, num2, num3, num4, num5);

    // user chooses action to perform//
    cout << "Hello " << name << ", choose an option from the menu:\n";

    cout << "   Menu\n";
    cout << "[1] Sum of the 5 numbers\n";
    cout << "[2] Product of the 5 numbers\n";
    cout << "[3] Average of the 5 numbers\n";
    cout << "[4] Largest of the 5 numbers\n";
    cout << "[5] Smallest of the 5 numbers\n";
    cout << "[6]The floor value of the 5 numbers\n";
    cout << "[7] Quit the program\n";
    cout << "Enter one of the menu options [1-7]: ";

    cin >> choice;

    switch (choice)
    {
        // user picks 1, sum 5 nums//
    case 1:
    {
        cout << "The sum is " << sum(num1, num2, num3, num4, num5) << "\n";
        break;
    }
        // user picks 2, product of 5 nums//
    case 2:
    {
        cout << "The product is " << product(num1, num2, num3, num4, num5) << "\n";
        break;
    }
        // user picks 3, average of 5 nums//
    case 3:
    {
        cout << "The average is " << avg(num1, num2, num3, num4, num5) / 5 << "\n";
        break;
    }
        // user picks 4, largest of 5 nums//
    case 4:
    {
        cout << "The largest number is " << lgst(num1, num2, num3, num4, num5) << "\n";
        break;
    }
        // user picks 5, smallest of 5 nums//
    case 5:
    {
        cout << "The smallest number is " << smlst(num1, num2, num3, num4, num5) << "\n";
        break;
    }

    // user picks 6, floor of 5 nums//
    case 6:
    {
        if (flor / 2 ==0)
        cout << "The floor " << flor << " is even.";
        else
            cout << "Th floor " << flor << " is odd.";

        break;
    }
    }

    return 0;
}

void getFiveNums(double &num1, double &num2, double &num3, double &num4, double &num5)
{
    cout << "Now enter 5 numbers seperated by a space: ";

    cin >> num1 >> num2 >> num3 >> num4 >> num5;
}

double sum(double &num1, double &num2, double &num3, double &num4, double &num5)
{
    return (num1 + num2 + num3 + num4 + num5);
}

double product(double &num1, double &num2, double &num3, double &num4, double &num5)
{
    return (num1 * num2 * num3 * num4 * num5);
}

double avg(double &num1, double &num2, double &num3, double &num4, double &num5)
{
    double avg;
    avg = (sum(num1, num2, num3, num4, num5) / 5);
    return avg;
}

double lgst(double &num1, double &num2, double &num3, double &num4, double &num5)
{
    double lgst1 = max(num1, num2);
    double lgst2 = max(lgst1, num3);
    double lgst3 = max(lgst2, num4);
    double lgst4 = max(lgst3, num5);
    return lgst4;
}

double smlst(double &num1, double &num2, double &num3, double &num4, double &num5)
{
    double smlst1 = min(num1, num2);
    double smlst2 = min(smlst1, num3);
    double smlst3 = min(smlst2, num4);
    double smlst4 = min(smlst3, num5);
    return smlst4;
}

double flor(double &num1, double &num2, double &num3, double &num4, double &num5)
{
    double flor;
    double avg;
    flor = (avg /2);
    return flor;
}

void clearscreen()

{
    system("clear");
}
