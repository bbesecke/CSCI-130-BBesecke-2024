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

 cout << "Welcome " << playerOne << " & " << playerTwo << ". These are the 7 stages of Handgman.\n"
 "Yes, the stages start at 0\n";
 
 cout << "Stage 0:\n" 
         "   |----------------\n";
 cout << "   |/          |\n";
 cout << "   |\n";
 cout << "   |\n";
 cout << "   |\n";
 cout << "   |\n";
 cout << "   |\n";
 cout << "====================\n";
 
 cout << "Stage 1:\n" 
         "   |----------------\n";
 cout << "   |/          |\n";
 cout << "   |           O\n";
 cout << "   |\n";
 cout << "   |\n";
 cout << "   |\n";
 cout << "   |\n";
 cout << "====================\n";

 cout << "Stage 2:\n" 
         "   |----------------\n";
 cout << "   |/          |\n";
 cout << "   |           O\n";
 cout << "   |           |\n";
 cout << "   |\n";
 cout << "   |\n";
 cout << "   |\n";
 cout << "====================\n";

 cout << "Stage 3:\n" 
         "   |----------------\n";
 cout << "   |/          |\n";
 cout << "   |           O\n";
 cout << "   |          /|\n";
 cout << "   |\n";
 cout << "   |\n";
 cout << "   |\n";
 cout << "====================\n";

 cout << "Stage 4:\n" 
         "   |----------------\n";
 cout << "   |/          |\n";
 cout << "   |           O\n";
 cout << "   |          /|\\\n";
 cout << "   |\n";
 cout << "   |\n";
 cout << "   |\n";
 cout << "====================\n";

 cout << "Stage 5:\n" 
         "   |----------------\n";
 cout << "   |/          |\n";
 cout << "   |           O\n";
 cout << "   |          /|\\\n";
 cout << "   |          /\n";
 cout << "   |\n";
 cout << "   |\n";
 cout << "====================\n";

cout << "Stage 6:\n" 
         "   |----------------\n";
 cout << "   |/          |\n";
 cout << "   |           O\n";
 cout << "   |          /|\\\n";
 cout << "   |          / \\\n";
 cout << "   |\n";
 cout << "   |\n";
 cout << "====================\n";

 cout << "It was later discovered the poor person was innocent and exonerated of all crimes on record";

 // wait for players to finish before exiting//

 getchar();
 return 0;

 }