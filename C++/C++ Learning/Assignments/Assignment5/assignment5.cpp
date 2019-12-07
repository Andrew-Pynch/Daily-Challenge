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




int get_input(string message, int max)
{
    int val = 1;

    cout << message << endl;
    cin >> val;
    if (cin.fail())
    {
        cin.clear();
        cin.ignore(64, '\n');
        cout << "Invalid Input: Please only enter valid integers " << endl;
        val = get_input(message, max);
    }
    else
    {
        if (val > max || val < 1)
        {
            cout << "Enter an integer: " << endl;
            val = get_input(message, max);
        }
    }

    return val;
}




void program_init(int &players, int &rows, int &cols)
{
    if (players > 0 && players < 3)
    {
        players = players;
        cout << "Players = " << players << endl;
    }
    else
    {
        players = get_input("Invalid Number of Players: You may select Single-Player (1) or Multi-Player(2)", 2);
        cout << "Players = " << players << endl;
    }


    if (rows > 0 && rows < 21)
    {
        rows = rows;
        cout << "Rows = " << rows << endl;
    }
    else
    {
        rows = get_input("Invalid Number of Rows: Rows must be < 0 & >= 21", 21);
        cout << "Rows = " << rows << endl;
    }


    if (cols > 0 && cols < 21)
    {
        cols = cols;
        cout << "Cols = " << cols << endl;
    }
    else
    {
        cols = get_input("Invalid Number of Cols: Cols must be < 0 & >= 21", 21);
        cout << "Cols = " << cols << endl;
    }
}   




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




int main(int argc, const char **argv)
{
    int players = atoi(argv[1]);
    int rows = atoi(argv[2]);
    int cols = atoi(argv[3]);

    program_init(players, rows, cols);
    init_board(rows, cols);
}