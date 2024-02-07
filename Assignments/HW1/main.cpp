/*Burton Besecke csci 130 HW1
Stages of Hangman Game
Started 02 Feb 2024*/

#include <iostream>

 using namespace std;

 int main()

{
    // string myName;

    // cout << " Say my name";

    // cin >> myName;

    // cout << " Your name is " << myName << " master!" << endl;


string playerOne;

 cout << "Who is Player 1?";

 cin >> playerOne;

 cout << "Welcome " << playerOne << ". Gird your loins for battle and rejoice,\n"
  "for the chance to prove your metal!";

string playerTwo;

cout << "Who is player 2?";

cin >> playerTwo;

cout << "Welcome " << playerTwo << ". Fear neither defeat or success,\n"
" for they are just different sides of the coin of life!";

string stage1 = "After entering player information, and game play is started, the scaffold in which \n";
"to build the body of the victim is built";
cout << stage1 << endl;

string stage2 = "The body is now starting to be constructed with pieces being added as players\n"
"miss thier guesses for letters";
cout << stage2 << endl;



// wait for players to finish before exiting//

system ("PAUSE");
return 0;

}