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

 cout << "Welcome " << playerOne << " & " << playerTwo << " These are the stages of Handgman.\n";

 cout << "Stage 0:\n" 
 "           |----------------\n";
 cout <<"    |/           |\n";
 cout << "   |\n";
 cout << "   |\n";
 cout << "   |\n";
 cout << "   |\n";
 cout << "   |\n";
 cout << "====================\n";
 

 // wait for players to finish before exiting//

 getchar();
 return 0;

 }