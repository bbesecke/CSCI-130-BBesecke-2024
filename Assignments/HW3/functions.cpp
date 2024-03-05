/* Name: Burton Besecke
Class: CSCI 130-002

1)Define a function that takes two numbers, adds two numbers and returns the
sum. The function must be templated so it works for integers and floats.

2) Define a function that takes two numbers, multiplies the two numbers and returns
the product. The function must be templated so it works for integers and floats.

3) Define a function that takes two numbers; divides the first number by the second
and returns the quotient. The function must be templated so it works for integers
and floats.

4) Define a function that takes two numbers, subtracts the second from the first and
returns the difference. The function must be templated so it works for integers
and floats.

5) Define a function that takes two numbers, finds and returns the remainder of the
first number divided by the second. The function must be templated so it works
for integers and floats.

6) Define a function that takes two numbers, finds the first to the power of the
second number and returns the result. The function must be templated so it
works for integers and floats.

7) Define a function that takes a number and returns the square-root of the number.
The function must be templated so it works for integers and floats.

8) Prompt the user to enter two numbers.

9) Call all the functions passing those two entered numbers and print the calculated
results with proper descriptions.

10) Write a test function to automatically test each function with at least two different
test cases. (5*7 = 35 points)
*/

#include <iostream>
#include <cmath>

using namespace std;

float addTwoNums(int num1, int num2);

int main()

{
    int num1, num2;

    cout << "Please enter 2 numbers seperated by a space:  ";
    cin >> num1 >> num2;

    addTwoNums(num1, num2);
    cout << "The sum of " << num1 << " and " << num2 << " is " << num1 + num2 << endl;

    getchar();

    return 0;
}