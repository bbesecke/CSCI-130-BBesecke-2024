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

 string playerTwo;

 cout << "Who is player 2?";

 cin >> playerTwo;

 cout << "Welcome " << playerOne << "&" << playerTwo << ". Fear neither defeat or success,\n"
 " for they are just different sides of the same coin of life!";

 string line1 = "After entering player information, and game play is started, the scaffold in which \n";
 "to build the body of the victim is built";
 cout << line1;
 string line2 = "The body is now starting to be constructed with pieces being added as players\n";
 "miss their guesses for letters";
 cout << line2;
 string line3 = "First the head appears";
 cout << line3;
 string line4 = "Then the body is added to the bottom of the head\n";
 cout << line4;
 string line5 = "The arms are then added to the sides of the body, one at a time\n";
 cout << line5;
 string line6 = "The legs come next one at a time to the bottom of the body\n";
 cout << line6;
 string line7 = "The game ends when the word is completed or the victims body is completed"; 
 cout << line7 << endl;


 // wait for players to finish before exiting//

 getchar();
 return 0;

 }