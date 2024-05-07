#include <iostream>

using namespace std;

int ann(int);

int main(int argc, char *argv[])
{
    int num1;
    cin >> num1;
    ann(num1);
}

int ann(int num2)
{
    if (num2 % 2 == 0)
    {
        cout << "Jebb" << endl;
    }
    else
        cout << "Neibb" << endl;
    return 0;
}
{
    int num1;
    while (true)
    {
        cin >> num1;
        if (num1 >= 1 && num1 <= 40)
        {

            break;
        }
        else
        {

            return 0;
        }
    }

    if (num2 % 2 == 0)
    {
        cout << "Jebb" << endl;
    }
    else
        cout << "Neibb" << endl;
    return 0;
}