#include <iostream>
#include <vector>
#include <algorithm>
#include <sstream>

using namespace std;

// Function prototypes
vector<int> read_integers(int count);
void alice_bob(const vector<int> &numbers, vector<int> &alice, vector<int> &bob);
int sum_of_vector(const vector<int> &vec);

int main()
{
    // Step 1: Get the number of integers
    int count;
    cout << "Enter the number of integers (between 1 and 15): ";
    cin >> count;

    if (count < 1 || count > 15)
    {
        cout << "Error: Invalid count, must be between 1 and 15." << endl;
        return 1; // Exit with error code
    }

    cin.ignore(); // Ignore the newline after the first input

    // Step 2: Get the space-separated integers
    cout << "Enter " << count << " integers separated by spaces (between 1 and 100): ";
    string line;
    getline(cin, line);

    // Parse the input line
    vector<int> numbers;
    stringstream ss(line);
    int value;
    while (ss >> value)
    {
        if (value < 1 || value > 100)
        {
            cout << "Error: Invalid integer, must be between 1 and 100." << endl;
            return 1; // Exit with error code
        }
        numbers.push_back(value);
    }

    if (numbers.size() != count)
    {
        cout << "Error: Incorrect number of integers entered." << endl;
        return 1;
    }

    // Step 3: Sort in descending order
    sort(numbers.begin(), numbers.end(), greater<int>());

    // Step 4: Separate into two columns
    vector<int> alice;
    vector<int> bob;
    alice_bob(numbers, alice, bob);

    // Step 5: Compute sums of columns
    int asum1 = sum_of_vector(alice);
    int bsum2 = sum_of_vector(bob);

    // Step 6: Output results
    cout << asum1 << " " << bsum2 << endl;
}

// Function to separate the integers into two columns
void alice_bob(const vector<int> &numbers, vector<int> &alice, vector<int> &bob)
{
    for (size_t i = 0; i < numbers.size(); ++i)
    {
        if (i % 2 == 0)
        {
            alice.push_back(numbers[i]);
        }
        else
        {
            bob.push_back(numbers[i]);
        }
    }
}

// Function to calculate the sum of elements in a vector
int sum_of_vector(const vector<int> &vec)
{
    int sum = 0;
    for (int num : vec)
    {
        sum += num;
    }
    return sum;
}
