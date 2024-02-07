/*Burton Besecke csci 130 HW1
Stages of Hangman Game
Started 02 Feb 2024*/

 #include <iostream>

 using namespace std;

 int main()

 {

 string playerOne;

 cout << "Who is Player 1?";

 cin >> playerOne;

 cout << "Welcome " << playerOne << ". Gird your loins for battle and rejoice,\n"
  "for the chance to prove your metal!";

 string playerTwo;

 cout << "Who is player 2?";

 cin >> playerTwo;

 cout << "Welcome " << playerTwo << ". Fear neither defeat or success,\n"
 " for they are just different sides of the coin of life!\n\n";

 string stage1 = "After entering player information, and game play is started, the scaffold in which \n";
 "to build the body of the victim is built";
 cout << stage1;
 string stage2 = "The body is now starting to be constructed with pieces being added as players\n";
 "miss their guesses for letters";
 cout << stage2;
 string stage3 = "First the head appears";
 cout << stage3;
 string stage4 = "Then the body is added to the bottom of the head\n";
 cout << stage4;
 string stage5 = "The arms are then added to the sides of the body, one at a time\n";
 cout << stage5;
 string stage6 = "The legs come next one at a time to the bottom of the body\n";
 cout << stage6;
 string stage7 = "The game ends when the word is completed or the victims body is completed"; 
 cout << stage7 << endl;


 // wait for players to finish before exiting//

 getchar();
 return 0;

 }