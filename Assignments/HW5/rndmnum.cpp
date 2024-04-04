/* Name: Burton Besecke 03 April 2024
Class: CSCI 130-002
HW5


3. Define a function called readNumber that prompts the user to take a guess and returnthe guessed number.
   You must validate the guessed number to be between 1 and 20.

4. Define a function called checkGuess that takes two integers compares the two numbers
and returns the following result:
a. returns 0 if the numbers are equal
b. returns -1 if the first number is less than second
c. returns 2 otherwise

5. Write 3 test cases for checkGuess function using assert statement.

6. Define a function called game that implements the logic of the guess the number game.
a. Call the randomNumber function defined above to generate a random number
for the user to guess for each game.
b. Until the game is over, your program will ask the player to guess the number
using the readNumber function defined above.
c. Use the function defined above called checkGuess to compare the user entered
number with the hidden random number.
d. If the player guesses the number within six tries, the game is over and the player
wins.
e. If the player can't guess the number within six tries, the game is over and the
player loses.
f. For every wrong guess, your program informs the player whether the guess is too
high or too low by calling checkGuess function.

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
int rndmNum();
int main()

{
  int num1 = rndmNum();
  cout << endl;

  return 0;
}

// 2. Define a function called randomNumber that generates and returns a random number between 1 and 20.
int rndmNum()
{
  // chatgpt used for reference
  srand(time(nullptr));
  return (rand() % 20) + 1;
}
