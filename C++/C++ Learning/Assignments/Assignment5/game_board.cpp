#include <iostream>

using namespace std;

void inst_board(int rows, int cols, string** &board)
{
    board = new string*[rows];

    for (int i = 0; i < cols; i++)
    {
        board[i] = new string[cols];
    }

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            board[i][j] = " ";
        }
    }
}



void display_board(int rows, int cols, string** board)
{
    // Column Numbers
    for (int i = 0; i < cols; i++)
    {
        cout << "  " << i+1 << " ";
    }
    cout << endl;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (i % 2 == 0 && j % 2 == 0)
            {
                cout << "|\033[30;47m " << board[i][j] << " ";
            }
            else if (i % 2 == 1 && j % 2 == 1)
            {
                cout << "|\033[30;47m " << board[i][j] << " ";
            }
            else
            {
                cout << "|\033[0m " << board[i][j] << " ";
            }
            cout << "\033[0m";
        }
        cout << endl;
    }
}

int main()
{
    string **board;
    int rows = 5;
    int cols = 5;
    inst_board(rows, cols, board);
    display_board(rows, cols, board);
}