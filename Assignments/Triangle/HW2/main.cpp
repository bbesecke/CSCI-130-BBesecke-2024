// Burton Besecke CSCI 130-002
/*Calculating the area using Herons formula and the perimiter of a triangle  
with user input of the length of the 3 sides. 
Herons formula ((s= sideOne + sideTwo + sideThree / 2) 
then sqrt(s * (s - sideOne) * (s - sideTwo) * (s - sideThree)*/

 #include <iostream>
 #include <cmath>
 #include <iomanip>

 using namespace std;

    int main ()
 {
    // setting up variables and prompting user input for side lengths of triangle

    float sideOne, sideTwo, sideThree;

    // Describing to user what is being calculated and entering side variables
    cout << "To determine the area and permiter of your triangle,\n"
    "please enter the length of the sides.\n";

    cout << "\n";

    cout << "What is the length of side 1: ";

    cin >> sideOne;

    cout << "\n";

    cout << "The first side is ";
    cout << fixed << setprecision(2) << sideOne;
    cout << "\n"
    "Enter the length of the second side: ";

    cin >> sideTwo;

    cout << "\n";

    cout << "The second side is ";
    cout << fixed << setprecision(2) << sideTwo;

    cout << "\n";

    cout << "Enter the length of the third side: ";

    cin >> sideThree;

    cout << "\n";

    cout << "The third side is ";
    cout << fixed << setprecision(2) << sideThree;

    cout << "\n";
    cout << "\n";

    //Telling user what values they entered in case of improper input
    cout << "Your triangle sides are, 1: " << sideOne << ", 2: " << sideTwo << ", and 3: " << sideThree;
     
    cout << "\n";

 // Summing the 3 sides to give perimeter length
    float sum1;

    sum1 = sideOne + sideTwo + sideThree;
    
    cout << "The triangles perimeter length is ";
    
    cout << fixed << setprecision(2) << sum1;

    cout << " units";

    //Setting up Herons formula by setting variable s = sum2 in terms of sideOne, sideTwo and sideThree. 
    float sum2;
    
    sum2 = (sum1/2);
    
    float sum3;

    sum3 = sqrt(sum2 * (sum2 - sideOne) * (sum2 - sideTwo) * (sum2 - sideThree));

    cout << "\n";

    cout << "The triangles area is ";

    cout << fixed << setprecision(2) << sum3;

    cout << " units";

    cout << "\n";

    // Wait for user input to exit program

   //  cout << "Press enter to exit";

    cout << "\n";

    cin.get();

    getchar();

    return 0;
    

 }