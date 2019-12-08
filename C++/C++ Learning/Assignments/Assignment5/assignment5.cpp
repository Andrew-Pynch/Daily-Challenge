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




void program_init(int &players, int &rows, int &cols, char** argv)
{
    // PLAYERS
    if (atoi(argv[1]) > 0 && atoi(argv[1]) < 3)
    {
        players = atoi(argv[1]);
        cout << "Players = " << players << endl;
    }
    else
    {
        players = get_input("Invalid Number of Players: You may select Single-Player (1) or Multi-Player(2)", 2);
        cout << "Players = " << players << endl;
    }

    // ROWS
    if (atoi(argv[2]) > 0 && atoi(argv[2]) < 21)
    {
        rows = atoi(argv[2]);
        cout << "Rows = " << rows << endl;
    }
    else
    {
        rows = get_input("Please enter the number of Rows [1-20]", 21);
        cout << "Rows = " << rows << endl;
    }

    // COLUMNS
    if (atoi(argv[3]) > 0 && atoi(argv[3]) < 21)
    {
        cols = atoi(argv[3]);
        cout << "Cols = " << cols << endl;
    }
    else
    {
        cols = get_input("Please enter the number of Columns [1-20]", 21);
        cout << "Cols = " << cols << endl;
    }
}  



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


void display_cols(int cols)
{
    // Column Numbers
    for (int i = 0; i < cols; i++)
    {
        cout << "  " << i+1 << " ";
    }
    cout << endl;
}

void display_board(int rows, int cols, string ** board)
{
    display_cols(cols);

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



void refresh_board(int turn, int rows, int cols, int player, string** &board)
{
    for (int i = rows - 1; i >= 0; i--)
    {
        if (board[i][turn] == " ")
        {
            if (player == 1)
            {
                board[i][turn] == "X";
            }
            else
            {
                board[i][turn] == "O";
            }
        }
    }
}




void single_player(int rows, int cols, string** &board)
{
    display_board(rows, cols, board);

    int turn;

    bool condition = true;
    while (condition)
    {
        turn = get_input("Player 1: Enter the column you would like to drop your piece in: ", cols) - 1;
        refresh_board(turn, rows, cols, 1, board);
        display_board(rows, cols, board);

        //check win conditions
    }
}


bool play_again()
{
    int input;
    cout << "Would you like to play again? Yes(1), No(0)";
    cin >> input;

    if (input == 1)
    {
        return true;
    }
    else if (input == 0)
    {
        cout << "Thank you for playing! " << endl;
        return false;
    }
    else
    {
        cout << "Please only enter 1 for Yes! or 0 for No!" << endl;
        play_again();
    }
}


int main(int argc, char** argv)
{
    int players = 0, rows = 0, cols = 0;
    string **board;
    bool again = true;

    while (again == true)
    {
        // This is the scenario where the user entered the correct number of arguements
        if (argc == 4)
        {
            program_init(players, rows, cols, argv);
        }
        else
        {
            players = get_input("Please enter Single-Player(1) or Multi-Player(2)", 2);
            rows = get_input("Please enter the number of Rows [1-20]", 20);
            cols = get_input("Please enter the number of Columns [1-20]", 20);
        }

        // Instantiate gameboard
        inst_board(rows, cols, board);
        refresh_board

        /*if (players == 1)
        {
            single_player(rows, cols, board);
        }
        else
        {
            //multi_player(rows, cols, board);
        }*/
        




        // End the program
        again = false;
    }



    return 0;
}