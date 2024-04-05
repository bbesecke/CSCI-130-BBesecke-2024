/* Name: Burton Besecke 03 April 2024
Class: CSCI 130-002
HW5


5. Write 3 test cases for checkGuess function using assert statement.

7. When the game is over, your program will inform whether the player won or lost the
game and reveal the secret random number picked by the computer, especially if they
lose.

8. Your game will continue to run until the user wants to quit when the game is over.

9. Bonus: When the user quits the program/game, your program provides the
following stats of the player:
a. number of times played
b. percentage of times won
c. percentage of times lost

10. Follow the best programming practices:
a. Write adequate comments
b. Properly format source codes with adequate white spaces
c. Do NOT use global variables!
*/

#include <iostream>
#include <random>
#include <string>
#include <cstdlib>
#include <ctime>
#include <cassert>
using namespace std;

int readnum(int);
int validate(int, int);
int getnum(int);
int rndmNum();
int gsschk(int, int);

int main()
{
  int num2;
  string name;
  int num1 = rndmNum();
  cout << "What is your name? " << endl;
  cin >> name;
  cout << "Hello " << name << ", would you like to play a game?\n"
       << endl;
  // If the player guesses the number within six tries, the game is over and the player wins.
  // If the player can't guess the number within six tries, the game is over and the player loses.
  for (size_t i = 0; i < 5; i++)
  {
    num2 = readnum(num2);

    validate(num1, num2);
  }

  cout << num1;
  cout << endl;

  return 0;
}

// Define a function called randomNumber that generates and returns a random number between 1 and 20.
int rndmNum()
{
  // chatgpt used for reference
  srand(time(nullptr));
  return (rand() % 20) + 1;
}
// Define a function called readNumber that prompts the user to take a guess and returnthe guessed number.
// You must validate the guessed number to be between 1 and 20.
int readnum(int num2)
{
  for (size_t i2 = 0; i2 < 1;)
  {
    cout << "Choose an integer between 1 and 20: ";
    cin >> num2;
    if (num2 > 0 && num2 < 21)
    {
      i2++;
    }
    else
    {
      cout << "That isn't a valid choice, do it again and do it right!" << endl;
    }
  }
  return num2;
}
/*Define a function called readNumber that prompts the user to take a guess and returns the guessed number.
You must validate the guessed number to be between 1 and 20.
For every wrong guess, your program informs the player whether the guess is too
high or too low by calling checkGuess function.*/
int validate(int num1, int num2)
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
    cout << num2 << " is correct, you figured it out." << endl;
  }
  return 0;
}
/*Define a function called checkGuess that takes two integers compares the two numbers
and returns the following result:*/
int gsschk(int num1, int num2)
{
  // returns -1 if the first number is less than second
  if (num1 < num2)
  {
    return -1;
  }
  // returns 2 otherwise
  else if (num1 < num2)
  {
    return 2;
  }
  // returns 0 if the numbers are equal
  return 0;
}
