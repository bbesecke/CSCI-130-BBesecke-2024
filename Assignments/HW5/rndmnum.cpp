//  Name: Burton Besecke 03 April 2024
// Class: CSCI 130-002
// HW5

// 8. Your game will continue to run until the user wants to quit when the game is over.

#include <iostream>
#include <random>
#include <string>
#include <cstdlib>
#include <ctime>
#include <cassert>
using namespace std;

int game();
int readnum(int);
void validate(int, int);
int getnum(int);
int rndmNum();
int gsschk(int, int);
void test();
void clearscreen();

int main()
{

  clearscreen();
  game();
  cout << endl;

  return 0;
}
int game()
{
  int rndmNum
  int guess;
  int validate
}
// Define a function called randomNumber that generates and returns a random number between 1 and 20.
int rndmNum()
{
  // chatgpt used for reference
  srand(time(nullptr));
  return (rand() % 20) + 1;
}
int readnum(int num2)
{
  for (size_t i2 = 0; i2 < 1;)
  {
    string name;
    int num2;
    cout << "What is your name?" << endl;
    cin >> name;
    cout << "Welcome " << name << " , please choose a number between 1 and 20:";
    cin >> num2; // You must validate the guessed number to be between 1 and 20.
    if (num2 > 0 && num2 < 21)
    {
      i2++;
    }
    else
    {
      cout << "That isn't a valid choice, choose between 1 and 20!" << endl;
    }
  }
  return num2;
}
void validate(int num1, int num2)
{
  if (gsschk(num1, num2) == -1)
  {
    cout << num2 << " is a terrible choice because it is more than the correct number" << endl;
  }
  else if (gsschk(num1, num2) == 2)
  {
    cout << num2 << " is a terrible choice because it is less than the correct number" << endl;
  }
  else if (gsschk(num1, num2) == 0)
  {
    cout << num2 << " is correct, you figured it out. You won!!" << endl;
  }
}
int gsschk(int num1, int num2)
{
  // returns -1 if the first number is less than second
  if (num1 < num2)
  {
    return -1;
  }
  // returns 2 otherwise
  else if (num1 > num2)
  {
    return 2;
  }
  // returns 0 if the numbers are equal
  return 0;
}

// Write 3 test cases for checkGuess function using assert statement.
// void test()
// {
//   int tnum1 = 2, tnum2 = 4, tnum3 = 8;
//   // Testing the gsschk function//
//   int result1 = gsschk(tnum1, tnum2);
//   int expected1 = -1;
//   assert(fabs(result1 - expected1) == 0);

//   int result2 = gsschk(tnum3, tnum2);
//   int expected2 = 2;
//   assert(fabs(result2 - expected2) == 0);

//   int result3 = gsschk(tnum2, tnum2);
//   int expected3 = 0;
//   assert(fabs(result3 - expected3) == 0);

//   cout << " Test functions passed" << endl;
// }

void clearscreen()
{
  system("clear");
}