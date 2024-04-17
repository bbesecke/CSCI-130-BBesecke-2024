// By: Burton Besecke
// Date: 16 Apr
// Make program that follows the Kattis Apaxian thingy

#include <iostream>
#include <cassert>
#include <string>

using namespace std;
string shorter(string &, string &);
void test();

int main(int argc, char *argv[])
{
    if (argc == 2 && string(argv[1]) == "test")
    {
        test();
    }
    else
    {
        // Enter a name with repeating letters to get a version with only a single instance of the repeating letters
        // Variables for full Apaxian name and shortened version
        string name;
        string shart;
        cout << " Enter the name: " << endl;
        cin >> name;
        cout << shorter(name, shart) << " is the shortened version." << endl;
        cout << shorter(name, shart);
        return 0;
    }
}
// Function for canceling repeating letters after first instance
string shorter(string &name, string &shart)
{
    shart = name[0];
    for (size_t i = 1; i < name.size(); i++)
    {
        if (name[i] != name[i - 1])
            shart += name[i];
    }
    return shart;
}
// 3 tests for shorter function
void test()
{
    string test1 = "Boob", test2 = "Norm", test3 = "Staaaan", shart;
    assert(shorter(test1, shart) == "Bob");
    assert(shorter(test2, shart) == "Norm");
    assert(shorter(test3, shart) == "Stan");

    cout << "Tests worked." << endl;
}