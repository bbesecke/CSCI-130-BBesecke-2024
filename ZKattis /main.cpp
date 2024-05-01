#include <iostream>

using namespace std;

int parked(int, int);

int main()
{
    int num1, num2;
    cin >> num1;
    cin >> num2;
    int num3 = parked(num1, num2);
    cout << num3 << endl;
    return 0;
}

int parked(int num1, int num2)
{
    return num1 + num2; 
}
