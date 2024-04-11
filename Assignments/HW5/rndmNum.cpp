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
void readnum(int &);
double game();
int gschk(int, int, int &);
void test();
#define clear() system("clear")

int main(int argc, char *argv[])
{
  if (argc == 2 && string(argv[1]) == "test")
  {
    test();
  }
  else
  {
    game();
  }

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
  char quit, y1, y2;
  y1 = 'Y';
  y2 = 'y';
  quit = y1;

  // Greet the user and ask for name
  string name;
  int num1 = rndmNum();
  clear();
  cout << "What is your name?" << endl;
  cin >> name;
  while (quit == y1 || quit == y2)
  {
    clear();
    // Ask user to choose a number
    cout << "Welcome " << name << ", choose a whole number between 1 and 20; " << endl;
    int num2;
    num2 = 0;
    // Validate that the number is between 1 and 20
    int game = 0;
    while (num2 != num1)
    {
      game++;
      readnum(num2);
      gschk(num1, num2, game);
      if (game == 6)
      {
        break;
      }
    }

    cout << "To continue, enter Y or y. To quit, press the any key, then enter:" << endl;
    cin >> quit;

    if (quit == y1 || quit == y2)
    {
      cout << "Press enter to continue:";
      cin.get();
      getchar();
    }
  }
  return 0;
}

int gschk(int num1, int num2, int &game)
{
  // Guesscheck returns -1 if the first number is less than second
  if (num1 < num2)
  {
    if (game == 15)
    {
      return -1;
    }
    if (game == 6)
    {
      cout << "You didn't figure it out. You're a loser!!" << endl;
      cout << "The random number is " << num1 << endl;
      return -1;
    }
    cout << "The number you guessed is too high, try gain;" << endl;
    return -1;
  }
  // returns 2 otherwise
  else if (num1 > num2)
  {
    if (game == 15)
    {
      return 2;
    }

    if (game == 6)
    {
      cout << "You didn't figure it out. You're a loser!!" << endl;
      cout << "The random number is " << num1 << endl;
      return 2;
    }
    cout << "The number you guessed is too low, try gain;" << endl;
    return 2;
  }
  // returns 0 if the numbers are equal
  else if (num1 == num2)
  {
    if (game == 15)
    {
      return 0;
    }
    cout << "You win!!" << endl;
    cout << "The random number is " << num1 << endl;
  }
  return 0;
}

void readnum(int &num2)
{
  for (size_t i = 0; i < 1;)
  {
    cin >> num2;
    if (num2 < 1 || num2 > 20)
    {
      cout << "That is not between 1 and 20, try again; " << endl;
    }
    else
    {
      i++;
    }
  }
}
void test()
{
  int tnum1 = 2, tnum2 = 4, tnum3 = 8, game = 15;
  // Testing the gschk function//
  int result1 = gschk(tnum1, tnum2, game);
  int expected1 = -1;
  assert(fabs(result1 - expected1) == 0);

  int result2 = gschk(tnum3, tnum2, game);
  int expected2 = 2;
  assert(fabs(result2 - expected2) == 0);

  int result3 = gschk(tnum2, tnum2, game);
  int expected3 = 0;
  assert(fabs(result3 - expected3) == 0);

  cout << " Test functions passed" << endl;
}
