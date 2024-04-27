#include <iostream>
#include <vector>
#include <sstream>

using namespace std;

void bubblesort(vector<int> &arr);
void alice_bob(const vector<int> &sorted_numbers, vector<int> &alice, vector<int> &bob);
int sumVector(const vector<int> &vect);

int main(int argc, char *argv[])
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
    alice_bob(numbers, alice, bob);

    int alice_sum = sumVector(alice);
    int bob_sum = sumVector(bob);

    cout << alice_sum << " " << bob_sum << endl;

    return 0;
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

void alice_bob(const vector<int> &sorted_numbers, vector<int> &alice, vector<int> &bob)
{
    for (size_t i = 0; i < sorted_numbers.size(); ++i)
    {
        if (i % 2 == 0)
        {
            alice.push_back(sorted_numbers[i]);
        }
        else
        {
            bob.push_back(sorted_numbers[i]);
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
