/*
    Loops Lab
    Updated By:Burton Besecke
    CSCI 130
    Date: 30 Mar 2024


    Program prints geometric shapes of given height with * using loops
*/

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

void printTriangle(int height)
{
    // Function takes height as an argument to print the triangle
    // of that height with *
    int row = 1;
    // row
    while (row <= height)
    {
        // column
        for (int col = 1; col <= row; col++)
            cout << "* ";
        row += 1;
        cout << endl;
    }
}
/*
       Implement the function that takes height as an argument
       and prints a triangle with * of given height.
       Triangle of height 5, e.g., should look like the following.
       * * * * *
       * * * *
       * * *
       * *
       *

       */
// FIXME3 ... FIXED
void printFlippedTriangle(int height)
{
    cout << endl;
    int row = height;
    while (row >= 0)
    {
        // column
        for (int col = 1; col <= row; col++)
            cout << "* ";
        row -= 1;
        cout << endl;
    }
}
/*
FIXME4 FIXED
Design and implement a function that takes an integer as height and
prints square of the given height with *.
Square of height 5, e.g., would look like the following.

*  *  *  *  *
*  *  *  *  *
*  *  *  *  *
*  *  *  *  *
*  *  *  *  *

*/
void printSquare(int height)
{
    int row = 1;
    while (row <= height)
    {
        // column
        for (int col = 1; col <= height; col++)
            cout << "* ";
        row += 1;
        cout << endl;
    }
}
// function clears the screen system call
// NOTE: system call is not a security best pracice!
void clearScreen()
{
// use "cls" in windows and "clear" command in Mac and Linux
#ifdef _WIN32
    system("clS");
#else
    system("clear");
#endif
}

int main(int argc, char *argv[])
{
    for (int x = 0; x < 1;)
    {
        // FIXME5 add a loop to make the program to continue to run until the user wants to quit FIXED
        // FIXME6 call clearScreen function to clear the screen for each round of the loop FIXED
        int height;
        cout << "Program prints geometric shapes of given height with *\n";
        cout << "Please enter the height of the shape: ";
        cin >> height;
        // call printTriangle function passing user entered height
        printTriangle(height);

        // FIXME7 FIXED
        // Call printFlippedTriangle passing proper argument
        // Manually test the function
        printFlippedTriangle(height);

        // FIXME6 FIXED
        // Call the function defined in FIXME4 passing proper argument
        // Manually test the function

        printSquare(height);

        // FIXME9 FIXED
        // prompt user to enter y/Y to continue anything else to quit
        char quit, y1, y2;
        y1 = 'Y';
        y2 = 'y';
        cout << "To continue, enter Y or y. To quit, press the any key, then enter:" << endl;
        cin >> quit;

        // FIXME10 FIXED
        // Use conditional statements to break the loop or continue the loop
        if (quit == y1 || quit == y2)
        {
            cout << "Press enter to continue:";
            cin.get();
            getchar();
        }
        else
        {
            x++;
        }
    }
    return 0;
}