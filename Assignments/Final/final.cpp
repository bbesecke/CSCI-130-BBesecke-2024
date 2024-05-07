/* Burton Besecke CSCI-130-001
Final Project of Tic Tak Tow*/

#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
 int space[3][3] = { {0, 1, 2}, {3, 4, 5}, {6, 7, 8} };
    string player;
    cout << "What is your name? ";
    cin >> player;
    cout << "Hello "<<player<<", please choose a space 0-8\n";
   
cout << "  "  <<space [0][0]<<  "     "  <<space [0][1]<<  "     "  <<space[0][2]<<  "\n";
cout << "     |     |    \n";
cout << "     |     |    \n";
cout << "_____|_____|_____\n";
cout << "  "<<space [1][0]<<"     "<<space [1][1]<<"     "<<space[1][2]<<"\n";
cout << "     |     |    \n";
cout << "     |     |    \n";
cout << "_____|_____|____\n";
cout << "  "<<space [2][0]<<"     "<<space [2][1]<<"     "<<space[2][2]<<"\n";
cout << "     |     |    \n";
cout << "     |     |    \n";
cout << "     |     |    \n";
return 0;



}
