/* Name: Burton Besecke
Class: CSCI 130-002
Conditionals HW4
User will enter their name , then choose 5 numbers to use in the program.

Menu will be displayed with 6 options.

Sum, Product, Average, Largest number, Smallest number and if the Floor of the sum
is odd, even or zero.

Run on a loop until user chooses the option to quit.

Run 3 tests for each function.

At least one function must be templated to work on various types.
*/

#include <iostream>
#include <cmath>
#include <iomanip>
#include <cassert>
#include <string>

using namespace std;

// Use function prototypes//
// Menu for user
void printMenu(void);
// Users choice of numebrs
void getFiveNums(double &, double &, double &, double &, double &);
// Sum with templatefor multiple types
template <class t1, class t2, class t3, class t4, class t5>
t1 sum(t1 &, t2 &, t3 &, t4 &, t5 &);
// Product
double product(double &, double &, double &, double &, double &);
// Average
double avg(double &, double &, double &, double &, double &);
// Largest number
double lgst(double &, double &, double &, double &, double &);
// Smallest number
double smlst(double &, double &, double &, double &, double &);
// Floor of the sum
int flor(double &, double &, double &, double &, double &);
// Test functions
void test();
// Clear screen when program is started
void clearscreen();

int main(int argc, char* argv[])

{
    if (argc == 2 && string(argv[1]) == "test")
    {
        test();
        exit(EXIT_SUCCESS);
    }
    else
    {
        int choice;
        string name;
        bool keepRunning = true;
        clearscreen();
        // Prompt user for name .
        cout << "Greeting, enter your name: ";
        cin >> name;

        // Program will loop from point of 5 numbers to be entered until user stops using case 7
        while (keepRunning)

        {
            // prompt user to enter 5 numbers
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
                int flor = floor(sum(num1, num2, num3, num4, num5));

                if (flor == 0)
                {
                    cout << "The floor is zero.\n";
                }
                else if (flor % 2 == 1)
                {
                    cout << "The floor is odd.\n";
                }
                else
                {
                    cout << "The floor is even.\n";
                }
                break;
            }
            case 7:
            {
                keepRunning = false;
                break;
            }
            }
        }
    }
    return 0;
}
void getFiveNums(double &num1, double &num2, double &num3, double &num4, double &num5)
{
    cout << "Now enter 5 numbers seperated by a space: ";

    cin >> num1 >> num2 >> num3 >> num4 >> num5;
}
template <class t1, class t2, class t3, class t4, class t5>
t1 sum(t1 &num1, t2 &num2, t3 &num3, t4 &num4, t5 &num5)
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

int flor(double &num1, double &num2, double &num3, double &num4, double &num5)
{
    int flor;
    flor = floor(sum(num1, num2, num3, num4, num5));
    return flor;
}

void test()

{
    // Testing each function of the program//
    double tnum1 = 1, tnum2 = 2, tnum3 = 3, tnum4 = 4, tnum5 = 5, tnum6 = 6, tnum7 = 7, tnum8 = 8;
    // Sum function
    double result1 = sum(tnum1, tnum2, tnum3, tnum4, tnum6);
    double expected1 = 16;
    assert(fabs(result1 - expected1) <= .001);

    double result2 = sum(tnum2, tnum4, tnum6, tnum8, tnum6);
    double expected2 = 26;
    assert(fabs(result2 - expected2) <= .001);

    double result3 = sum(tnum1, tnum3, tnum5, tnum7, tnum6);
    double expected3 = 22;
    assert(fabs(result3 - expected3) <= .001);

    // Product function
    double result4 = product(tnum1, tnum2, tnum3, tnum4, tnum6);
    double expected4 = 144;
    assert(fabs(result4 - expected4) <= .001);

    double result5 = product(tnum2, tnum2, tnum3, tnum4, tnum6);
    double expected5 = 288;
    assert(fabs(result5 - expected5) <= .001);

    double result6 = product(tnum2, tnum2, tnum3, tnum4, tnum6);
    double expected6 = 288;
    assert(fabs(result6 - expected6) <= .001);

    // Average Function
    double result7 = avg(tnum2, tnum2, tnum3, tnum4, tnum6);
    double expected7 = 3.4;
    assert(fabs(result7 - expected7) <= .001);

    double result8 = avg(tnum2, tnum1, tnum3, tnum4, tnum6);
    double expected8 = 3.2;
    assert(fabs(result8 - expected8) <= .001);

    double result9 = avg(tnum5, tnum3, tnum5, tnum7, tnum6);
    double expected9 = 5.2;
    assert(fabs(result9 - expected9) <= .001);

    // Largest function
    double result0 = lgst(tnum5, tnum3, tnum4, tnum7, tnum6);
    double expected0 = 7;
    assert(fabs(result0 - expected0) <= .001);

    double result11 = lgst(tnum1, tnum5, tnum2, tnum4, tnum8);
    double expected11 = 8;
    assert(fabs(result11 - expected11) <= .001);

    double result12 = lgst(tnum5, tnum3, tnum1, tnum2, tnum4);
    double expected12 = 5;
    assert(fabs(result12 - expected12) <= .001);

    // Smallest function
    double result13 = smlst(tnum5, tnum3, tnum1, tnum2, tnum4);
    double expected13 = 1;
    assert(fabs(result13 - expected13) <= .001);

    double result14 = smlst(tnum5, tnum3, tnum7, tnum2, tnum4);
    double expected14 = 2;
    assert(fabs(result14 - expected14) <= .001);

    double result15 = smlst(tnum5, tnum3, tnum7, tnum6, tnum4);
    double expected15 = 3;
    assert(fabs(result15 - expected15) <= .001);

    // Foor function
    double result16 = flor(tnum5, tnum3, tnum1, tnum2, tnum4);
    double expected16 = 15;
    assert(fabs(result16 - expected16) <= .001);

    double result17 = flor(tnum5, tnum5, tnum2, tnum2, tnum4);
    double expected17 = 18;
    assert(fabs(result17 - expected17) <= .001);

    double result18 = flor(tnum2, tnum2, tnum3, tnum8, tnum7);
    double expected18 = 22;
    assert(fabs(result18 - expected18) <= .001);

    cout << " Test functions passed" << endl;
}

void clearscreen()
{
    system("clear");
}
