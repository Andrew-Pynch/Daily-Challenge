/*
Program: assignmen5.cpp - CS161
Author: Andrew Pynch - pyncha@oregonstate.edu
Student ID: 932-953-192
Description: Connect 4 Game
*/
#include <iostream>
#include <string>
#include <cstring>
#include <cmath>
#include <bits/stdc++.h> 
#include <stdio.h> 
#include <string.h> 
#include <stdbool.h> 

using namespace std;

int init_board()
{
    int rows = 4;
    int cols = 4;
    int board[20][20];

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

int main(int argc, const char **argv)
{
    int players = atoi(argv[1]);
    int rows = atoi(argv[2]);
    int columns = atoi(argv[3]);

    printf("P")
}