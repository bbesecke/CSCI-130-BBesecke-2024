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

 string line1 = "Stage 0:\n"
                 "  |----------------\n";
 cout << line1;
 string line2 =  "  |/           |\n";
 cout << line2;
 string line3 =  "  |\n";
 cout << line3;
 string line4 =  "  |\n";
 cout << line4;
 string line5 =  "  |\n";
 cout << line5;
 string line6 =  "  |\n";
 cout << line6;
 string line7 =  "  |\n";
 cout << line7;
 string line8 =  "====================\n";
 cout << line8;


 // wait for players to finish before exiting//

 getchar();
 return 0;

 }