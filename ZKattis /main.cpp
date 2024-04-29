#include <iostream>

using namespace std;
int parked(int num1, int num2, int num3);

int main(int argc, char *argv[])
{
    int num1, num2, num3;
    parked(num1, num2, num3); 
}
int parked(int num1, int num2, int num3)
{
    
    cin >> num1;
    cin >> num2;
    num3 = num1 + num2;
    cout << num3 << endl;

    return 0;
}