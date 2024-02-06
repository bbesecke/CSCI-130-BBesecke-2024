/* Burton Besecke Lab 1 ASCII Art
https://github.com/rambasnet/CPP-Fundamentals/tree/505d31c1188c813cb4148c274014704372a6e7f7/labs/stdio
*/
/*
    StdIO Lab
    ASCII Art - using literals and variables
    
    Updated By: <Burton Besecke> #FIXME1 Fixed
    Date: 05 Feb 2024 #FIXME2 Fixed
    
    This program produces an ASCII art on the console.

    Algorithm steps: 
    1. Use variables to store data/values
    2. Write a series of cout statements to print the data/values
*/

#include <iostream> //library for input and output
#include <string> //library for string data
 
using namespace std; //resolve cout, cin, and endl names
 
//main entry point of the program
int main()
{
    //FIXME3: declare a variable to store name. FIXED
    string myName;
    //FIXME4: prompt user to enter their name and store the value in variable FIXED
    cout << "Player, enter your name";

    cin >> myName;
    
    //FIXME5: greet the name using the variable as the following output FIXED
    //must output: Nice meeting you, <name>!

    cout << "Welcome  " << myName << ". It's nice to meet you, now hold on, it's going to get wild. ";

    cout << "Hope you like my Tom & Jerry ASCII art...\n\n";

    string line1 = "   |\\_/|    **********************      (\\_/)\n";
    cout << line1;
    string line2 = "  / @ @ \\   *     ASCII Lab      *     (='.'=)\n";
    cout << line2; 
    string line3 = " ( > 0 < )  *  By Burton Besecke *     (\")_(\")\n";
    cout << line3;
    string line4 = "   >>x<<    *      CSCI 130      * \n";
    cout << line4;
    string line5 = "  /  O  \\   ********************** ";
    cout << line5;
    //FIXME6: use variable to print the second line line of the graphic FIXED
    //FIXME7: print the third line of the graphics FIXED
    //FIXME8: use variable to print the fourth line FIXED
    //FIXME9: use variable to print the fifth line FIXED
    //Note: You can add more lines or print more ASCII arts of your choice if you'd like...

    cout << "\nGood bye... hit enter to exit the program: " << '\n';
    //FIXME10: make the console wait for user input 
    /*FIXED via https://www.physicsforums.com/threads/c-console-help-show-output-and-
    close-on-enter-key.209736/#:~:text=To%20make%20a%20C%2B%2B%20console,
    and%20close%20the%20console%20window.*/
    getchar();

    return 0; //exit program by returning 0 status to the system
}