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

int rndmNum();
void clearscreen();

int main()
{

  // chatgpt used for reference
  srand(time(nullptr));
  return (rand() % 20) + 1;

  return 0;
}
  // Define a function called randomNumber that generates and returns a random number between 1 and 20.
  // int rndmNum()
  // {
  //   // chatgpt used for reference
  //   srand(time(nullptr));
  //   return (rand() % 20) + 1;
  // }

  void clearscreen()
  {
    system("clear");
  }