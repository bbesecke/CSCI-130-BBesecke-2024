/* HW4
Updated By: Burton Besecke
CSCI 130-002
Date: 25 Mar 2024
*/

#include <iostream>
#include <cstdio>
#include <string>
#include <cassert>

using namespace std;


void printMenu(void);

void getFiveNumbers(double &, double &, double &,double &,double &);


double findSum(const double &, const double &, const double &, const double &, const double &);
double findProduct(const double &, const double &, const double &, const double &, const double &);
void findAvg(const double &, const double &, const double &, const double &, const double &, const double &);
double findLrgst(const double &, const double &, const double &, const double &, const double &);
double findSmlst(const double &, const double &, const double &, const double &, const double &);
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

    cout << "[1] Add two numbers\n";
    cout << "[2] Multiply 5 numbers\n";
    cout << "[3] Find larger of 5 numbers\n";
    cout << "[4] Find smaller of 5 numbers\n";
    cout << "[5] Find average of 5 numbers\n";
     cout <<"[6] Find the floor of 5 numbers\n";
    cout << "[7] Quit the program\n";
    cout << "Enter one of the menu options [1-8]: ";
}

void getFiveNumbers(double &n1, double &n2, double &n3, double &n4, double &n5)
{
    cout << "Enter two numbers separated by a space: ";
    cin >> n1 >> n2 >> n3 >> n4 >> n5;
}

double findSum(const double &n1, const double &n2, const double &n3, const double &n4, const double &n5)
{
    return (n1 + n2 + n3 + n4 + n5);
}

double findProduct(const double &n1, const double &n2, const double &n3, const double &n4, const double &n5)
{
    return (n1 * n2);
}

void findAvg(const double &n1, const double &n2, const double &n3, const double &n4, const double &n5, double &avg)
{
    avg = findSum(n1, n2, n3, n4, n5) / 2;

}

double findLrgst(const double &n1, const double &n2, const double &n3, const double &n4, const double &n5)
{
    double larger = (n1 >= n2, n2 >= n3, n3 >= n4, n4 >= n5) ? n1 : n5;
    return larger;
}

double findSmlest(const double &n1, const double &n2, const double &n3, const double &n4, const double &n5)
{

    double smaller = (n5 >= n4, n4 >= n3, n3 >= n2, n2 >= n1) ? n1 : n5;
    return smaller;
}

double floor(const double &n1, const double &n2, const double &n3, const double &n4, const double &n5)
{
    double floor = (n1 , n2, n3, n4, n5);
    return floor;
}

void test()
{      
    assert(findSum(-5, 10, 4, 6, 2) == 17); 
    assert(findSum(10, 10, 10, 10, 10) == 50);

    assert(findProduct(10, 10, 1, 1, 2) == 200);
    assert(findProduct(10, 5, 1, 1, 2) == 100);

    assert(findLrgst(2, 10, 2, 4, 5) == 10);
    assert(findLrgst(10, 5, 1, 8, 4) == 10);

    assert(findSmlest(2, 10, 4, 7, 4) == 2);
    assert(findSmlest(10, 5, 4, 7, 9) == 4);

    double avg, avg2;
    findAvg(10, 10, 10, 10, 10, avg);
    assert(avg == 10);
    findAvg(10, 8, 2, 2, 2 avg2);
    assert(avg2 == 12);

        printf("%s\n", "all test cases passed...");
}


bool program()
{
    int option = 1;           
    double num1 = 0, num2 = 0, num3 = 0, num4 = 0, num5 = 0; 
    printMenu();

    do
    {
        if (cin >> option && option >= 1 && option <= 7)
        {
        
            break;
        }
        else
        {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Invalid option, please enter a value between 1 and 7" << endl;
        }
    } while (true);

    switch (option)
    {
    case 1:
    {
    
        getFiveNumbers(num1, num2, num3, num4, num5);
       
        double sum = findSum(num1, num2, num3, num4, num5);
        // display the result with proper description
        printf("%.2f + %.2f = %.2f\n", num1, num2, num3, num4, num5, sum);
        break;
    }
    case 2:
    {

        getFiveNumbers(num1, num2, num3, num4, num5);
       
        double product = findProduct(num1, num2, num3, num4, num5);

        printf("%.2f - %.2f = %.2f\n", num1, num2, product);
        break;
    }
    case 3:
    {
        // FIXME12: get two numbers and find their product using functions FIXED
        getFiveNumbers(num1, num2);
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