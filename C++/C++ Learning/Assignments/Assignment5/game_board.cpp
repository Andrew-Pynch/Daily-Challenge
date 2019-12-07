#include <iostream>
#include <string>
#include <cstring>
#include <cmath>
#include <bits/stdc++.h> 
#include <stdio.h> 
#include <string.h> 
#include <stdbool.h> 

using namespace std;



// Boiler plate function to initilize the gameboard
int init_board(int rows, int cols)
{
    int board[rows][cols];

    for (int i=0; i<rows; i++)
    {
        for (int j=0; j<cols; j++)
        {
            if (i % 2 == 0 && j % 2 == 0)
                cout << "|\033[30;47m " << board[i][j] << " ";
            else if (i % 2 == 1 && j % 2 == 1)
                cout << "|\033[30;47m " << board[i][j] << " ";
            else
                cout << "|\033[0m " << board[i][j] << " ";
                cout << "\033[0m";
        }
        cout << endl;
    }
}

int main()
{
    init_board(3, 3);
}