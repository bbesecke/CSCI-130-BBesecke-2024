// Burton Besecke CSCI-130
// 30 April 2024
// Based on the stupid Kattis problem Falling Apart. User chooses an integer between 1 and 15,
// then user chooses that many integers between 1 and 100. The inegers will be sorted highest to lowest,
// then split into 2 arrays with the first one getting the first/highest integer, followed by everyother integer.
// The 2 arrays are then summed up.*/
// I relied heavily on Chatgpt for this assignement. I don't really understand how to use
// arrays or vectors even though I kind of understand what they are. After asking for a function or action,
// I made the necessary corrections I could see to make it all work together.

#include <iostream>
#include <vector>
#include <sstream>
#include <cassert>

using namespace std;

void bubblesort(vector<int> &arng);
void aliceBob(const vector<int> &sorted, vector<int> &alice, vector<int> &bob);
int sum(const vector<int> &vect);
void test();

int main(int argc, char *argv[])
{
    if (argc == 2 && string(argv[1]) == "test")
    {
        test();
    }
    else
    {
        int pieces;
        cin >> pieces;

        cin.ignore();

        string line;
        getline(cin, line);

        vector<int> numbers;
        stringstream ss(line);
        int value;

        while (ss >> value)
        {
            numbers.push_back(value);
        }

        bubblesort(numbers);

        vector<int> alice;
        vector<int> bob;

        aliceBob(numbers, alice, bob);

        int aliceSum = sum(alice);
        int bobSum = sum(bob);

        cout << aliceSum << " " << bobSum << endl;
    }

}

void bubblesort(vector<int> &arng)
{
    size_t n = arng.size();
    for (size_t i = 0; i < n - 1; ++i)
    {
        for (size_t j = 0; j < n - 1 - i; ++j)
        {
            if (arng[j] < arng[j + 1])
            {
                swap(arng[j], arng[j + 1]);
            }
        }
    }
}

void aliceBob(const vector<int> &sorted, vector<int> &alice, vector<int> &bob)
{
    for (size_t i = 0; i < sorted.size(); ++i)
    {
        if (i % 2 == 0)
        {
            alice.push_back(sorted[i]);
        }
        else
        {
            bob.push_back(sorted[i]);
        }
    }
}

int sum(const vector<int> &vect)
{
    int total = 0;
    for (int num : vect)
    {
        total += num;
    }
    return total;
}

void test()
{
    vector<int> vector1 = {1, 2, 3};
    int expected1 = 6;
    assert(sum(vector1) == expected1);

    vector<int> vector2 = {4, 5, 6};
    int expected2 = 15;
    assert(sum(vector2) == expected2);

    vector<int> vector3 = {7, 8, 9};
    int expected3 = 24;
    assert(sum(vector3) == expected3);

    cout << "All tests passed." << endl;
}
