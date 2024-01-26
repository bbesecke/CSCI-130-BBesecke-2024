//
//  Conversion - Program to convert temperature from
//             Celsius degrees into Fahrenheits:
//             Fahrenheit = Celsius  * (212 - 32)/100 + 32
//
#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

int main(int nNumberofArgs, char* pszArgs[])
{
  // enter the temperature in Celsius
 double fahrenheit;
  cout << "Enter the temperature in Fahrenheit:";
  cin >> fahrenheit;

  // calculate conversion factor for Celsius
  // to Fahrenheit
 double factor;
  factor = 212.0 - 32.0;

  // use conversion factor to convert Celsius
  // into Fahrenheit values
 double celsius;
  celsius = factor / 1.8;

  // output the results (followed by a NewLine)
  cout << "Celsius value is:";
  cout << celsius << endl;

  // wait until user is ready before terminating program
  // to allow the user to see the program results
  system("PAUSE");
  return 0;
}

