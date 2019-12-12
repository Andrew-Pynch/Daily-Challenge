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
#include <stdlib.h>     
#include <time.h>       

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

void display_board(int rows, int cols, string** &board)
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




bool check_full(int turn, int rows, int cols, string** &board)
{
    if (board[0][turn] == "X" || board[0][turn] == "O")
    {
        return true;
    }
    else
    {
        return false;
    }
}



bool check_empty(int turn, int rows, int cols, string** &board)
{
    int tempr = rows - 1;
    if(board[tempr][turn] == " ")
    {
        return true;
    }
    else
    {
        return false;
    }
}




void empty_col_move(int turn, int rows, int cols, int player, string** &board)
{
    int tempr = rows - 1;
    if (board[tempr][turn] == " ")
    {
        if (player == 1)
        {
            board[tempr][turn] = "X";
        }
        else if (player == 2)
        {
            board[tempr][turn] = "O";
        }
    }     
}



void normal_move(int turn, int rows, int cols, int player, string** &board)
{
    int tempr;
    for (int i = 0; i < rows; i++)
    {
        tempr = i - 1;
        if (board[i][turn] == "X" || board[i][turn] == "O")
        {
            if (player == 1)
            {
                board[tempr][turn] = "X";
            }
            else if (player == 2)
            {
                board[tempr][turn] = "O";
            }
        }
    }
}




void refresh_board(int turn, int rows, int cols, int player, string** &board)
{
    if (check_full(turn, rows, cols, board) == true)
    {
        cout << "This column is full! Please enter a different move!" << endl;
    }
    else if (check_empty(turn, rows, cols, board) == true)
    {
        empty_col_move(turn, rows, cols, player, board);
    }
    else if (check_full(turn, rows, cols, board) == false && check_empty(turn, rows, cols, board) == false)
    {
        normal_move(turn, rows, cols, player, board);
    }
}




bool player_1_first(int player)
{
    int choice;
    cout << "Player: " << player << ", would you like to go first? " << endl;
    cout << "Yes(1), No(2) ";
    cin >> choice;

    if (choice == 1)
    {
        return true;
    }
    else
    {
        return false;
    }
    
}



int player_switch(int &player)
{
    if (player == 1)
    {
        player = 2;
        return player;
    }
    else if (player == 2)
    {
        player = 1;
        return player;
    }
    else
    {
        player = get_input("Inavlid player count. Please enter Single-Player(1) or Multi-Player(2)", 2);
    }
}




bool tie(int rows, int cols, string** &board)
{
    bool all_true;
    for (int i = 0; i < cols; i++)
    {
        if (board[0][i] == "X" || board[0][i] == "O")
        {
            all_true = true;
        }
        else
        {
            all_true = false;
        }
    }
    return all_true;
}






int ai(int rows, int cols, int &player, string** &board)
{
    player = 2;
    srand (time(NULL));
    int turn = rand() % (cols - 1);
    refresh_board(turn, rows, cols, player, board);
    return player;
}


void single_player(int rows, int cols, int &player, string** &board)
{
    int turn;
    player = 1;
    display_board(rows, cols, board);

    while(true)
    {
        if (player == 1)
        {
            cout << "Player: " << player;
            turn = get_input(" Please enter your move: ", cols) - 1;
            refresh_board(turn, rows, cols, player, board);
        }
        player_switch(player);
        if (player == 2)
        {
            cout << "AI is making its move: " << endl;
            ai(rows, cols, player, board);
        }
        break;
    }
    // Check all win conditions
    single_player(rows, cols, player, board);
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
    int player = 1;
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
        

        // Test that refresh_board can update the posistion of pieces
        cout << "Player = " << player << endl;
        cout << "Rows = " << rows << endl;
        cout << "Cols = " << cols << endl;

        player_1_first(player);

        board[4][0] = "X";
        board[4][1] = "X";
        board[4][2] = "X";
        board[4][3] = "X";
        board[4][4] = "X";
        display_board(rows, cols, board);
        //single_player(rows, cols, player, board);






        // End the program
        again = false;
    }



    return 0;
}