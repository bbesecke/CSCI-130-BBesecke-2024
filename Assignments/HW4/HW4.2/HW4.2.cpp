/* HW4
Updated By: Burton Besecke
CSCI 130-002
Date: 11 Mar 2024
*/

#include <iostream>
#include <cstdio>
#include <string>
#include <cassert>

using namespace std;


void printMenu(void);

void getFiveNumbers(double &, double &, double &,double &,double &);

// function takes 5 numbers; finds and returns the sum of the 5
double findSum(const double &, const double &, const double &, const double &, const double &);

// function takes 5 numbers; finds and returns the product of the 5
double findProduct(const double &, const double &, const double &, const double &, const double &);

// function takes 5 numbers; finds and returns the average of the 5
void findAvg(const double &, const double &, const double &, const double &, const double &, const double &);

// function takes 5 numbers; finds and returns the larger of the 5
double findLrgst(const double &, const double &, const double &, const double &, const double &);

// function takes 5 numbers; finds and returns the smaller of the 5
double findSmalst(const double &, const double &, const double &, const double &, const double &);

// function takes 5 numbers; finds and returns the floor of the 5
double floor(const double &, const double &, const double &, const double &, const double &);

void test();

bool program();


void clearScreen()
{
#ifdef _WIN32
    system("clS");
#else
    system("clear");
#endif
}
int main(int argc, char *argv[])
{
    if (argc == 2 && string(argv[1]) == "test")
    {
        test();
        exit(EXIT_SUCCESS);
    }
    else
    {
        while (true)
        {
            if (!program())
                break;      
            cin.ignore(100, '\n');
            cout << "Enter to continue...";
            cin.get();
            clearScreen();
        }
    }
    cin.ignore(100, '\n');
    cout << "Enter to quit the program.\n";
    cout << "Good bye..." << endl;
    cin.get();
    return 0;
}

void printMenu(void)
{
    cout << "Menu options:\n";
    cout << "[1] Add two numbers\n";
    cout << "[2] Subtract two numbers\n";
    cout << "[3] Multiply two numbers\n";
    cout << "[4] Divide two numbers\n";
    cout << "[5] Find larger of two numbers\n";
    cout << "[6] Find smaller of two numbers\n";
    cout << "[7] Find average of two numbers\n";
    cout << "[8] Quit the program\n";
    cout << "Enter one of the menu options [1-8]: ";
}

void getTwoNumbers(double &n1, double &n2)
{
    cout << "Enter two numbers separated by a space: ";
    cin >> n1 >> n2;
}

double findSum(const double &n1, const double &n2)
{
    return (n1 + n2);
}

double findDifference(const double &n1, const double &n2)
{
    // FIXME3 - subtract n2 from n1 and return the difference FIXED

    return (n1 - n2);
}

double findProduct(const double &n1, const double &n2)
{
    // FIXME4 - multiply n1 by n2 and return the product FIXED
    return (n1 * n2);
}

void findAverage(const double &n1, const double &n2, double &avg)
{
    // FIXME5 - find the average of n1 and n2 and update avg FIXED

    avg = findSum(n1, n2) / 2;

    // FIXME6 - Must call findSum function to find the sum of n1 and n2 FIXED
    //  Note: this void function doesn't return a value but
    //  the average will be stored in avg
}

double findLarger(const double &n1, const double &n2)
{
    // find the larger of n1 and n2 and return it
    double larger = (n1 >= n2) ? n1 : n2;
    return larger;
}

double findSmaller(const double &n1, const double &n2)
{
    // FIXME7 - find the smaller of n1 and n2 and return it Fixed
    double smaller = (n2 >= n1) ? n1 : n2;
    return smaller;
}

double findQuotient(const double &n1, const double &n2)
{
    // FIXME8 - divide n1 by n2 and return the quotient FIXED
    double quotient = (n1 / n2);
    return quotient;
}

// functions to run automated testing for various user-defined functions
void test()
{      
    assert(findSum(-5, 10.5) == 5.5); 
    assert(findSum(10, 10) == 20);

    assert(findDifference(10, 10) == 0);
    assert(findDifference(10, 5) == 5);

    assert(findProduct(10, 10) == 100);
    assert(findProduct(10, 5) == 50);

    assert(findLarger(2, 10) == 10);
    assert(findLarger(10, 5) == 10);

    assert(findSmaller(2, 10) == 2);
    assert(findSmaller(10, 5) == 5);

    assert(findQuotient(10, 10) == 1);
    assert(findQuotient(10, 5) == 2);

    double avg, avg2;
    findAverage(10, 10, avg);
    assert(avg == 10);
    findAverage(10, 8, avg2);
    assert(avg2 == 9);


        /* FIXME9 – Using assert function write at least 2 test cases for each of the following functions
        // findDifference(), findProduct(), findLarger(),
        // findSmaller(), findQuotient(), findAverage()
        FIXED*/
        printf("%s\n", "all test cases passed...");
}

// the crux of the program that uses all the defined functions
// the program is menu driven
bool program()
{
    int option = 1;            // variable to store user entered option
    double num1 = 0, num2 = 0; // variables to store two numbers entered by user
    // display menu options
    printMenu();
    // Input validation
    do
    {
        if (cin >> option && option >= 1 && option <= 8)
        {
            // input is valid, break loop
            break;
        }
        else
        {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Invalid option, please enter a value between 1 and 8" << endl;
        }
    } while (true);

    // Call the function(s) or perform some operations based on user input
    switch (option)
    {
    case 1:
    {
        // get two numbers and store them into num1 and num2 using function
        getTwoNumbers(num1, num2);
        // call findSum function; store the returned value in sum variable
        double sum = findSum(num1, num2);
        // display the result with proper description
        printf("%.2f + %.2f = %.2f\n", num1, num2, sum);
        break;
    }
    case 2:
    {
        // FIXME10: call getTwoNumbers function FIXED
        getTwoNumbers(num1, num2);
        // FIXME11: call findDifference function and print the result FIXED
        double difference = findDifference(num1, num2);

        printf("%.2f - %.2f = %.2f\n", num1, num2, difference);
        break;
    }
    case 3:
    {
        // FIXME12: get two numbers and find their product using functions FIXED
        getTwoNumbers(num1, num2);
        double product = findProduct(num1, num2);
        printf("%.2f x %.2f = %.2f\n", num1, num2, product);
        break;
    
    }
    // FIXME13: complete the rest of the cases 4, 6, and 7 FIXED
    case 4:
    {
        getTwoNumbers(num1, num2);
        double quotient = findQuotient(num1, num2);
        printf("The quotient of %.2f & %.2f = %.2f\n", num1, num2, quotient);
        break;
    }
    case 5:
    {
      // find the larger of the two numbers
        getTwoNumbers(num1, num2);
        double max = findLarger(num1, num2);
        printf("The larger number between %.2f & %.2f is %.2f\n", num1, num2, max);
        break;
    }
    case 6:
    {
        // find the smaller of the two numbers
        getTwoNumbers(num1, num2);
        double smaller = findSmaller(num1, num2);
        printf("The smaller number between %.2f & %.2f is %.2f\n", num1, num2, smaller);
        break;
    }
    case 7:
    {
// find the average of the two numbers
        getTwoNumbers(num1, num2);
        double avg;
        findAverage(num1, num2, avg);
        printf("The average of %.2f & %.2f is %.2f\n", num1, num2, avg);
        break;
    }
    case 8:
    default:          // must be option 8
        return false; // exit the program
    }
    return true;
}