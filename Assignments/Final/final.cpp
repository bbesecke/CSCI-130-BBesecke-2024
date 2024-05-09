/*Burton Besecke CSCI 130-001
Final Tick Tack Tow program
Build grid and number spaces 0-8
Player vs. computer game with player going first as x
Show win, lose or draw
I used this base code I found online that was terrible, then worked at making it function how I wanted it to work.
https://www.quora.com/How-do-I-construct-a-Tic-Tac-Toe-game-player-vs-AI-in-C++
I had it get rid of the goto's since I don't remember hearing about them and wasn't
sure what to replace them with. ChatGPT told me what I needed to do there. 
*/

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

// Function Prototypes
void Board(char board[3][3]);
void showBoard(const char board[3][3]);
bool win(const char board[3][3], char player);
bool draw(const char board[3][3]);
void playTurn(char board[3][3], char player);
void compTurn(char board[3][3]);

int main()
{
    char board[3][3];
    Board(board);
    bool isPlayerTurn = true;
    string player;
    cout << "What is your name? " << endl;
    cin >> player;
    cout << "Welcome to Tick Tack Tow " << player << endl;

    while (true)
    {
        showBoard(board);

        if (isPlayerTurn)
        {
            playTurn(board, 'X');
        }
        else
        {
            compTurn(board);
        }

        if (win(board, 'X'))
        {
            showBoard(board);
            cout << "Player Wins\n";
            break;
        }
        else if (win(board, 'O'))
        {
            showBoard(board);
            cout << "Computer Wins\n";
            break;
        }
        else if (draw(board))
        {
            showBoard(board);
            cout << "Draw\n";
            break;
        }

        isPlayerTurn = !isPlayerTurn;
    }

    return 0;
}

// Function Definitions
void Board(char board[3][3])
{
    char value = '1';
    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            board[i][j] = value++;
        }
    }
}

void showBoard(const char board[3][3])
{
    cout << "      |     |     \n";
    cout << "   " << board[0][0] << "  |  " << board[0][1] << "  |  " << board[0][2] << "\n";
    cout << " _____|_____|_____\n";
    cout << "      |     |     \n";
    cout << "   " << board[1][0] << "  |  " << board[1][1] << "  |  " << board[1][2] << "\n";
    cout << " _____|_____|_____\n";
    cout << "      |     |    \n";
    cout << "   " << board[2][0] << "  |  " << board[2][1] << "  |  " << board[2][2] << "\n";
    cout << "      |     |    \n";
}

bool win(const char board[3][3], char player)
{

    for (int i = 0; i < 3; ++i)
    {
        if ((board[i][0] == player && board[i][1] == player && board[i][2] == player) ||
            (board[0][i] == player && board[1][i] == player && board[2][i] == player))
        {
            return true;
        }
    }
    return (board[0][0] == player && board[1][1] == player && board[2][2] == player) ||
           (board[0][2] == player && board[1][1] == player && board[2][0] == player);
}

bool draw(const char board[3][3])
{
    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            if (board[i][j] != 'X' && board[i][j] != 'O')
            {
                return false;
            }
        }
    }
    return true;
}

void playTurn(char board[3][3], char player)
{
    while (true)
    {
        int position;
        
        cout << "Choose an empty space 0-8: ";
        cin >> position;
        if (position < 1 || position > 9)
        {
            cout << "Not a playable space, try again.\n";
            continue;
        }
        int row = (position - 1) / 3;
        int col = (position - 1) % 3;
        if (board[row][col] == 'X' || board[row][col] == 'O')
        {
            cout << "Not a playable space, try again.\n\n";
            continue;
        }
        board[row][col] = player;
        break;
    }
}

void compTurn(char board[3][3])
{
    srand(time(0));
    while (true)
    {
        int randomPosition = (rand() % 9) + 1;
        int row = (randomPosition - 1) / 3;
        int col = (randomPosition - 1) % 3;
        if (board[row][col] != 'X' && board[row][col] != 'O')
        {
            board[row][col] = 'O';
            break;
        }
    }
}
