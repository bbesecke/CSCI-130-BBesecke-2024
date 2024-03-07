/* Name: Burton Besecke
Class: CSCI 130-002
Making a basic calculator that takes in 2 mubers and displays results
describing what the reult is

Call all the functions passing those two entered numbers and print the calculated
results with proper descriptions.

Write a test function to automatically test each function with at least two different
test cases. (5*7 = 35 points)
*/

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

/*Define a function that takes two numbers, adds two numbers and returns the sum.*/
float add(float num1, float num2)
{
    return num1 + num2;
}

/* Define a function that takes two numbers, subtracts the second from the first and returns the difference.*/
float subtract(float num1, float num2)
{
    return num2 - num1;
}

/*Define a function that takes two numbers, multiplies the two numbers and returns the product.*/
float multiply(float num1, float num2)
{
    return num1 * num2;
}

/*Define a function that takes two numbers; divides the first number by the second and returns the quotient.*/
float divide(float num1, float num2)
{
    return num1 / num2;
}

/* Define a function that takes two numbers, finds and returns the remainder of the
first number divided by the second.*/
float rmainder(float num1, float num2)
{
    // Typecast float to int//
    return ((int)num1 % (int)num2);
}

/*Define a function that takes two numbers, finds the first to the power of the
second number and returns the result.*/
float power(float num1, float num2)
{
    return (pow(num1, num2));
}

// Define a function that takes a number and returns the square-root of the number.//
float sroot(float num1)
{
    return sqrt(num1);
}

// Clears screen when program is run//
void clearScreen()

{
    system("clear");
}

int main()
{
    // Loop for main//
    char repeat = 'y';

    while (repeat != 'n')

    {
        clearScreen();
        float num1, num2, sum;

        // Prompt the user to enter two numbers.//
        cout << "Please enter 2 numbers seperated by a space: ";
        cin >> num1 >> num2;

        cout << "\n";

        // Adding the numbers//
        sum = add(num1, num2);
        cout << "The sum of " << num1 << " and " << num2 << " is " << sum << endl;

        cout << "\n";

        // Subtracting the numbers//
        sum = subtract(num1, num2);
        cout << "The subtraction of " << num1 << " from " << num2 << " is " << sum << endl;

        cout << "\n";

        // Multiplying the numbers//
        sum = multiply(num1, num2);
        cout << "The product of " << num1 << " and " << num2 << " is " << sum << endl;

        cout << "\n";

        // Dividing the numbers//
        sum = divide(num1, num2);
        cout << "The quotient of " << num1 << " divded by " << num2 << " is: " << sum << endl;

        // Remainder after dividing the numbers//
        sum = rmainder(num1, num2);
        cout << "remainder of the quotient is: " << sum << endl;

        cout << "\n";

        // square root of num1 and num2//
        {
            float result1 = sqrt(num1);

            cout << "The square root of " << num1 << " is:" << result1 << endl;

            float result2 = sqrt(num2);

            cout << "The square root of " << num2 << " is:" << result2 << endl;

            cout << "\n";
        }

        // num1 to the power of num2//
        {
            float result = (pow(num1, num2));

            cout << num1 << " to the power of " << num2 << " is: ";
            cout.precision(3);
            cout << scientific << result << endl;
            cout << fixed;
        }

        cout << "\n";

        

            // Loop to use a different set of numbers//
            cout << "Do you want to run another set of numbers?\n"
                    "Enter y for yes, or n for no: "
                 << endl;
            cin >> repeat;
        
    
    }
}