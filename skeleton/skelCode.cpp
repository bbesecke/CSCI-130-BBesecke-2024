

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main(int argc, char *argv[])
{
  int num1;// initial velocity m/s
  int num2;// acceleration m/s^2
  int num3; // time traveled sec
  double num4;
  cin >> num1 >> num2 >> num3;
  num4= num1(num3) + (.5 * (num2) * (pow(num3, 2)));
  cout << fixed << setprecision(10) << num4 << endl;
}