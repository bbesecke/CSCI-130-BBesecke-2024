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
        return 0;
    }
}

/// @brief Sorts integers from highest to lowest
/// @param arng 
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

/// @brief Splits the integers between Alice and Bob
/// @param sorted 
/// @param alice 
/// @param bob 
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

/// @brief Sums the integers that were split between Alice and Bob
/// @param vect 
/// @return The sums
int sum(const vector<int> &vect)
{
    int sum = 0;
    for (int num : vect)
    {
        sum += num;
    }
    return sum;
}

/// @brief Tests the function
void test()
{
    vector<int> testArray1 = {5, 3, 8, 1, 9};
    bubblesort(testArray1);
    assert((testArray1 == vector<int>{9, 8, 5, 3, 1}) && "Test 1: Bubble sort failed");

    vector<int> alice, bob;
    aliceBob(testArray1, alice, bob);
    assert((alice == vector<int>{9, 5, 1}) && "Alice distribution failed");
    assert((bob == vector<int>{8, 3}) && "Bob distribution failed");
    assert(sum(alice) == 15 && "Alice sum failed");
    assert(sum(bob) == 11 && "Bob sum failed");

    vector<int> testArray2 = {10, 20, 15, 7, 3};
    bubblesort(testArray2);
    assert((testArray2 == vector<int>{20, 15, 10, 7, 3}) && "Additional bubble sort failed");

    alice.clear();
    bob.clear();
    aliceBob(testArray2, alice, bob);
    assert((alice == vector<int>{20, 10, 3}) && "Alice distribution failed");
    assert((bob == vector<int>{15, 7}) && "Bob distribution failed");

    cout << "All tests passed!" << endl;
}