/*Burton Besecke CSCI 130-001
Final Tick Tack Tow program
Build grid and number spaces 1-9
Player vs. computer game with player going first as X
Show win, lose or tie
I used this base code I found online that was terrible, then worked at making it function how I wanted it to work.
https://www.quora.com/How-do-I-construct-a-Tic-Tac-Toe-game-player-vs-AI-in-C++
ChatGPT was used to help with the what I am still struggling on how to use. Mainly setting up the array needed
to get started.
*/

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void Board(char board[3][3]);
void showBoard(const char board[3][3]);
bool win(const char board[3][3], char player);
bool tie(const char board[3][3]);
void playTurn(char board[3][3], char player);
void compTurn(char board[3][3]);
bool filled(const char board[3][3], int row, int col);
#define clear() system("clear")

int main()
{
    clear();
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
        else if (tie(board))
        {
            showBoard(board);
            cout << "It's a tie\n";
            break;
        }

        isPlayerTurn = !isPlayerTurn;
    }

    return 0;
}

/// @brief Makes the board with [3][3] grid
/// @param board
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
/// @brief Shows the updated board after each turn
/// @param board
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
    cout << "      |     |    \n\n";
}
/// @brief Shows if the player wins
/// @param board
/// @param player
/// @return
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

/// @brief Shows if the game is a tie
/// @param board
/// @return
bool tie(const char board[3][3])
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

/// @brief Player chooses a space and can't choose one already filled
/// @param board
/// @param player
void playTurn(char board[3][3], char player)
{
    while (true)
    {
        int position;

        cout << "Your turn: ";
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
/// @brief Computer can't choose a space already filled
/// @param board
/// @param row
/// @param col
/// @return
bool filled(const char board[3][3], int row, int col)
{
    return board[row][col] == 'X' || board[row][col] == 'O';
}
/// @brief Computer takes a turn
/// @param board
void compTurn(char board[3][3])
{

    cout << "Computers turn: " << endl;
    // Hard code for the blocking moves
    //  row 1
    if (!filled(board, 0, 2) && board[0][0] == board[0][1] && board[0][0] == 'X')
    {
        board[0][2] = 'O';
    }
    else if (!filled(board, 0, 1) && board[0][0] == board[0][2] && board[0][0] == 'X')
    {
        board[0][1] = 'O';
    }
    else if (!filled(board, 0, 0) && board[0][1] == board[0][2] && board[0][1] == 'X')
    {
        board[0][0] = 'O';
    }

    // row 2
    else if (!filled(board, 1, 2) && board[1][0] == board[1][1] && board[1][0] == 'X')
    {
        board[1][2] = 'O';
    }
    else if (!filled(board, 1, 1) && board[1][0] == board[1][2] && board[0][0] == 'X')
    {
        board[1][1] = 'O';
    }
    else if (!filled(board, 1, 0) && board[1][1] == board[1][2] && board[0][1] == 'X')
    {
        board[1][0] = 'O';
    }

    // row 3
    else if (!filled(board, 2, 2) && board[2][0] == board[2][1] && board[2][0] == 'X')
    {
        board[2][2] = 'O';
    }
    else if (!filled(board, 2, 1) && board[2][0] == board[2][2] && board[2][0] == 'X')
    {
        board[2][1] = 'O';
    }
    else if (!filled(board, 2, 0) && board[2][1] == board[2][2] && board[2][1] == 'X')
    {
        board[2][0] = 'O';
    }

    // colomn 1
    else if (!filled(board, 2, 0) && board[0][0] == board[1][0] && board[0][0] == 'X')
    {
        board[2][0] = 'O';
    }
    else if (!filled(board, 1, 0) && board[0][0] == board[2][0] && board[0][0] == 'X')
    {
        board[1][0] = 'O';
    }
    else if (!filled(board, 0, 0) && board[1][0] == board[2][0] && board[1][0] == 'X')
    {
        board[0][0] = 'O';
    }

    // colomn 2
    else if (!filled(board, 2, 1) && board[0][1] == board[1][1] && board[0][1] == 'X')
    {
        board[2][1] = 'O';
    }
    else if (!filled(board, 1, 1) && board[0][1] == board[2][1] && board[0][1] == 'X')
    {
        board[1][1] = 'O';
    }
    else if (!filled(board, 0, 1) && board[1][1] == board[2][1] && board[1][1] == 'X')
    {
        board[0][1] = 'O';
    }

    // colomn 3
    else if (!filled(board, 2, 2) && board[0][2] == board[1][2] && board[0][2] == 'X')
    {
        board[2][2] = 'O';
    }
    else if (!filled(board, 1, 2) && board[0][2] == board[2][2] && board[0][2] == 'X')
    {
        board[1][2] = 'O';
    }
    else if (!filled(board, 0, 2) && board[1][2] == board[2][2] && board[1][2] == 'X')
    {
        board[0][2] = 'O';
    }

    // diaganols
    else if (!filled(board, 2, 2) && board[0][0] == board[1][1] && board[1][1] == 'X')
    {
        board[2][2] = 'O';
    }
    else if (!filled(board, 0, 0) && board[1][1] == board[2][2] && board[1][1] == 'X')
    {
        board[0][0] = 'O';
    }
    else if (!filled(board, 1, 1) && board[0][0] == board[2][2] && board[0][0] == 'X')
    {
        board[1][1] = 'O';
    }

    else if (!filled(board, 2, 0) && board[1][1] == board[0][2] && board[1][1] == 'X')
    {
        board[2][0] = 'O';
    }
    else if (!filled(board, 0, 0) && board[1][1] == board[2][0] && board[1][1] == 'X')
    {
        board[0][2] = 'O';
    }
    else if (!filled(board, 1, 1) && board[2][0] == board[0][2] && board[2][0] == 'X')
    {
        board[1][1] = 'O';
    }
    // Needs a random choice for the computers first turn
    else
    {
        srand(time(0));
        while (true)
        {
            int row = rand() % 3;
            int col = rand() % 3;

            if (!filled(board, row, col))
            {
                board[row][col] = 'O';
                break;
            }
        }
    }
}
