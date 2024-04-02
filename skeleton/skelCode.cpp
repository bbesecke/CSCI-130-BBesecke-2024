/* Name: Burton Besecke
Class: CSCI 130-002

*/

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

void printTriangle(int height)
{
    
    int row = 1;

    while (row <= height)
    {
        
        for (int col = 1; col <= row; col++)
            cout << "* ";
        row += 1;
        cout << endl;
    }
}
int main(int argc, char *argv[])

{
   bool keeprunning= true;
   while(keeprunning)
int height;
 printTriangle(height);

   return 0;
}