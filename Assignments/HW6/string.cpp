// By: Burton Besecke
// Date: 16 Apr

// Apaxxians on Kattis
/* With all lowercase letters, take a name with multiple instances of recusrsive letters and
 make the recursive letter into one instance*/

//  Write programmer info and briefly describe the program as comments.

//  Write algorithm steps as comments (10 points).

//  Using function(s) design your solution in such a way that it can be tested independently
// using unit testing with assert statements (40 points).

//  Write a test function that automatically tests (using assert statements) for at least three
// different input values other than the ones provided by the problem (20 points).

//  Call the test function in main and execute it when a “test” argument is provided to your
// program or main(). (10 points)

//  Create and use a Makefile to test kattis sample input files as well as your unit testing (10 points).

//  Once the solution is well tested locally (create screenshots) upload to kattis online
// judge for judging. You can submit your solution as many times as you wish but your goal
// is to get an Accepted verdict in as few tries as possible.

//  Once the solution is accepted, create a screenshot that shows your full name and the

// Accepted verdict for the problem and submit it to D2L.

#include <iostream>
#include <cassert>
#include <string>

using namespace std;
string shorter(string &);
void test();

int main()
{
    string name;
    string short;
    shorter(name, short);
    cout << " Enter the name: " << endl;
    cin >> name >> endl;
    cout << shorter << " is the easier version." << endl;

    return 0; // This exits the program, huzzah!
}
string shorter(string &name, string &short)
{
}