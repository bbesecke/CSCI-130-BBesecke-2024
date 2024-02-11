// Burton Besecke CSCI 130-002
/*Calculating the area using Herons formula and the perimiter of a triangle  
with user input of the length of the 3 sides. 
Herons formula ((s= sideOne + sideTwo + sideThree / 2) 
then sqrt(s * (s - sideOne) * (s - sideTwo) * (s - sideThree)*/

 #include <iostream>
 #include <cmath>

 using namespace std;

 int main ()
 {
    // setting up variables and prompting user input for side lengths of triangle

    float sideOne, sideTwo, sideThree;

    // Describing to user what is being calculated and entering side variables
    cout << "To determine the area and permiter of your triangle,\n"
    "please enter the length of the sides.\n"
    "\n"
    "What is the length of side 1: ";

    cin >> sideOne;

    cout << "\n";

    cout << "The first side is "<< sideOne <<".\n"
     "\n"
    "Enter the length of the second side: ";

    cin >> sideTwo;

    cout << "\n";

    cout << "The second side is "<< sideTwo <<".\n"
     "\n"
    "Enter the length of the third side: ";

    cin >> sideThree;

    cout << "\n";

    cout << "The third side is " << sideThree;

    cout << "\n";
    cout << "\n";

    //Telling user what values they entered in case of improper input
    cout << "Your triangle sides are, 1: " << sideOne << ", 2: " << sideTwo << ", and 3: " << sideThree;

    cout << "\n";

    float sum1;

    sum1 = sideOne + sideTwo + sideThree;
    
    // Summing the 3 sides to give perimeter length
    cout << "The triangles perimeter length is " << sum1;

    //Setting up Herons formula by setting variable sum2 = s in terms of sideOne, sideTwo and sideThree. 
    float sum2;
    
    sum2 = (sum1/2);
    
    float sum3;

    sum3 = sqrt(sum2 * (sum2 - sideOne) * (sum2 - sideTwo) * (sum2 - sideThree));

    cout << "\n";

    cout << "The triangles area is " << sum2;

    cout << "\n";
    cout << "\n";

    getchar();
    return 0;
    

 }