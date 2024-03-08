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
#include <cassert>
#include <string>

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
    // Testing each function of the program//
    float tnum1 = 1, tnum2 = 2, tnum3 = 3, tnum4 = 4;

    float result1 = add(tnum1, tnum2);
    float expected1 = 3;
    assert(fabs(result1 - expected1) <= .001);

    float result2 = add(tnum3, tnum4);
    float expected2 = 7;
    assert(fabs(result2 - expected2) <= .001);

    float result3 = subtract(tnum2, tnum4);
    float expected3 = 2;
    assert(fabs(result3 - expected3) <= .001);

    float result4 = subtract(tnum1, tnum4);
    float expected4 = 3;
    assert(fabs(result4 - expected4) <= .001);

    float result5 = multiply(tnum1, tnum2);
    float expected5 = 2;
    assert(fabs(result5 - expected5) <= .001);

    float result6 = multiply(tnum3, tnum4);
    float expected6 = 12;
    assert(fabs(result6 - expected6) <= .001);

    float result7 = divide(tnum4, tnum2);
    float expected7 = 2;
    assert(fabs(result7 - expected7) <= .001);

    float result8 = divide(tnum3, tnum1);
    float expected8 = 3;
    assert(fabs(result8 - expected8) <= .001);

    float result9 = rmainder(tnum3, tnum1);
    float expected9 = 0;
    assert(fabs(result9 - expected9) <= .001);

    float result0 = rmainder(tnum4, tnum2);
    float expected0 = 0;
    assert(fabs(result0 - expected0) <= .001);

    float result11 = sroot(tnum4);
    float expected11 = 2;
    assert(fabs(result11 - expected11) <= .001);

    float result11 = sroot(tnum1);
    float expected11 = 1;
    assert(fabs(result11 - expected11) <= .001);

    float result12 = power(tnum2, tnum3);
    float expected12 = 8;
    assert(fabs(result12 - expected12) <= .001);

    float result12 = power(tnum3, tnum1);
    float expected12 = 3;
    assert(fabs(result12 - expected12) <= .001);
}