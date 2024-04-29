#include <iostream>
#include <vector>
#include <sstream>
#include <cassert>

using namespace std;

void bubblesort(vector<int> &arr);
void aliceBob(const vector<int> &sorted, vector<int> &alice, vector<int> &bob);
int sumVector(const vector<int> &vect);
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

        int aliceSum = sumVector(alice);
        int bobSum = sumVector(bob);

        cout << aliceSum << " " << bobSum << endl;
        return 0;
    }
}

void bubblesort(vector<int> &arr)
{
    size_t n = arr.size();
    for (size_t i = 0; i < n - 1; ++i)
    {
        for (size_t j = 0; j < n - 1 - i; ++j)
        {
            if (arr[j] < arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
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

int sumVector(const vector<int> &vect)
{
    int sum = 0;
    for (int num : vect)
    {
        sum += num;
    }
    return sum;
}
void test()
{
    vector<int> testArray1 = {5, 3, 8, 1, 9};
    bubblesort(testArray1);
    assert((testArray1 == vector<int>{9, 8, 5, 3, 1}) && "Test 1: Bubble sort failed");

    vector<int> alice, bob;
    aliceBob(testArray1, alice, bob);
    assert((alice == vector<int>{9, 5, 1}) && "Alice distribution failed");
    assert((bob == vector<int>{8, 3}) && "Bob distribution failed");
    assert(sumVector(alice) == 15 && "Alice sum failed");
    assert(sumVector(bob) == 11 && "Bob sum failed");

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