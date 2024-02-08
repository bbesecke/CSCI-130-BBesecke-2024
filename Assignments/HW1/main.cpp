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

 cout << "\n";

 cout << "Welcome " << playerOne << " & " << playerTwo << ". These are the 7 stages of Hangman.\n";
 cout << "\n"
 "Yes, the stages start at 0. It's a programming thing.\n";
 cout << "\n";
 cout << "Stage 0: Starts with the scaffolding.\n" 
         "   |----------------\n";
 cout << "   |/          |\n";
 cout << "   |\n";
 cout << "   |\n";
 cout << "   |\n";
 cout << "   |\n";
 cout << "   |\n";
 cout << "====================\n";

 cout << "\n";

 cout << "Stage 1: The head appears after the first missed letter.\n" 
         "   |----------------\n";
 cout << "   |/          |\n";
 cout << "   |           O\n";
 cout << "   |\n";
 cout << "   |\n";
 cout << "   |\n";
 cout << "   |\n";
 cout << "====================\n";

 cout << "\n";

 cout << "Stage 2: The body is next.\n" 
         "   |----------------\n";
 cout << "   |/          |\n";
 cout << "   |           O\n";
 cout << "   |           |\n";
 cout << "   |\n";
 cout << "   |\n";
 cout << "   |\n";
 cout << "====================\n";

 cout << "\n";

 cout << "Stage 3: Then the right arm,\n" 
         "   |----------------\n";
 cout << "   |/          |\n";
 cout << "   |           O\n";
 cout << "   |          /|\n";
 cout << "   |\n";
 cout << "   |\n";
 cout << "   |\n";
 cout << "====================\n";

 cout << "\n";

 cout << "Stage 4: Followed bythe left arm.\n" 
         "   |----------------\n";
 cout << "   |/          |\n";
 cout << "   |           O\n";
 cout << "   |          /|\\\n";
 cout << "   |\n";
 cout << "   |\n";
 cout << "   |\n";
 cout << "====================\n";

 cout << "\n";

 cout << "Stage 5: After the arms, comes the legs, right first,\n" 
         "   |----------------\n";
 cout << "   |/          |\n";
 cout << "   |           O\n";
 cout << "   |          /|\\\n";
 cout << "   |          /\n";
 cout << "   |\n";
 cout << "   |\n";
 cout << "====================\n";

 cout << "\n";

 cout << "Stage 6: Then the left.\n" 
         "   |----------------\n";
 cout << "   |/          |\n";
 cout << "   |           O\n";
 cout << "   |          /|\\\n";
 cout << "   |          / \\\n";
 cout << "   |\n";
 cout << "   |\n";
 cout << "====================\n";

 cout << "\n";

 cout << "Congratulations, you have now executed a stick man.\n";

 cout << "\n";

 cout << "It was later discovered the stickman was innocent and exonerated of all crimes.\n";

 cout << "\n";
 // wait for players to finish before exiting//

 getchar();
 return 0;

 }