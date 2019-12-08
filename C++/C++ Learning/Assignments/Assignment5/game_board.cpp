#include <iostream>

using namespace std;





void display_board(int rows, int cols, string **board)
{
    // Column Numbers
    for (int i = 0; i < cols; i++)
    {
        cout << " " << i+1 << " ";
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
        }
        cout << "\033[0m";
    }
    cout << endl;
}

int main()
{
    string **board;
    display_board(5, 5, board);
}