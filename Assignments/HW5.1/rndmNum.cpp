//  Name: Burton Besecke 03 April 2024
// Class: CSCI 130-002
// HW5
/* Using a function to choose a random number between 1 and 20, then having a user pick a number
between 1 and 20 to try and guess what the random number generated is.
A function will tell the user if they are to high, to low, or if they matched it. The user has 6 chances
to figure out what the number is.
After either the 6 chances are up, or the number is found, the user will have the option to play again or exit.*/

#include <iostream>
#include <random>
#include <string>
#include <cstdlib>
#include <ctime>
#include <cassert>

using namespace std;

int rndmNum();
int readnum();
double game();

int main(int argc, char *argv[])
{
  game();

  return 0;
}

// Define a function called randomNumber that generates and returns a random number between 1 and 20.
int rndmNum()
{
  // chatgpt used for reference
  srand(time(0));
  return (rand() % 20) + 1;
}
double game()
{
  // Greet the user and ask for name
  string name;
  int num1 = rndmNum();
  cout << "What is your name?" << endl;
  cin >> name;
  // Ask user to choose a number
  cout << "Welcome " << name << ", choose a whole number between 1 and 20; " << endl;
  int num2;
  num2 = 0;
  // Validate that the number is between 1 and 20
  while (num2 != num1)
  {
    cin >> num2;
    if (num2 < 1 || num2 > 20)
    {
      cout << "That is not between 1 and 20, try again; " << endl;
    }
    else
    {
      // Guesscheck returns -1 if the first number is less than second
      if (num1 < num2)
      {
        return -1;
        cout << "The number you guessed is too high, try gain;" << endl;
      }
      // returns 2 otherwise
      else if (num1 > num2)
      {
        return 2;
        cout << "The number you guessed is too low, try gain;" << endl;
      }
      // returns 0 if the numbers are equal
      else if (num1 == num2)
      {
        cout << num1 << endl;
      }
    }
  }
  return 0;
}
// int readnum()
// {

// }
// int gsschk(int num1, int num2)
// {

// }