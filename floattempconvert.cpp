//  Conversion - Program to convert temperature from
//             Celsius degrees into Fahrenheits:
//             Fahrenheit = Celsius  * (212 - 32)/100 + 32

#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

int main(int nNumberofArgs, char* pszArgs[])
{
  // enter the temperature in Celsius
 float fahrenheit;
  cout << "Enter the temperature in Fahrenheit:";
  cin >> fahrenheit;

  // use conversion factor to convert Celsius
  // into Fahrenheit values
 float celsius;
  celsius = (fahrenheit - 32) / 1.8;

  // output the results (followed by a NewLine)
  cout << "Celsius value is:";
  cout << celsius << endl;

  // End program when user is done
  return 0;
}