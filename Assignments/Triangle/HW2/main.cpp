// Burton Besecke CSCI 130-002
/*Calculating the area and perimiter of a triangle 
with user input of the length of the 3 sides. 
Herons formula for area and adding length of sides. */

#include <iostream>

 using namespace std;

 int main ()
 {
    // setting up variables and prompting user input for side lengths of triangle

    float sideOne, sideTwo, sideThree;

    cout << "To determine the area and permiter of your triangle,\n"
    "please enter the length of the sides.\n";
    "\n"
    "Length of side 1?";

    cin >> sideOne;

    cout << "The first side is "<< sideOne <<".\n"
    "Enter the length of the second side.";

    cin >> sideTwo;

      cout << "The second side is "<< sideTwo <<".\n"
    "Enter the length of the last side.";

    cin >> sideThree;

    cout << "Your triangle sides are," << sideOne << "," << sideTwo << ",and" << sideThree;




    getchar();
    return 0;


 }