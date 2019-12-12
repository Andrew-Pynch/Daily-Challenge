/*
Program: assignmen5.cpp - CS161
Author: Andrew Pynch - pyncha@oregonstate.edu
Student ID: 932-953-192
Description: Connect 4 Game
*/
#include <iostream>
#include <string>
#include <cstring>
#include <stdio.h> 
#include <string.h> 
#include <stdbool.h>     
#include <stdlib.h>     
#include <time.h>       

using namespace std;



// Function: Gives user a message and asks them to enter a value below the max
// Input: message, max
// Output: Stores value and continues to prompt till acceptable value is entered
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



// Inputs; Command Args: Players, Rows, Cols, and argv(for cmd line stuff)
// Output: Prompts user for values if they forgot to add the command line args
// Stores values in vars
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



// Instantiates the board object
// Input: rows, cols, board
// Output: An nXm dimensional gameboard
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



// Displays columns of a gameboard
void display_cols(int cols)
{
    // Column Numbers
    for (int i = 0; i < cols; i++)
    {
        cout << "  " << i+1 << " ";
    }
    cout << endl;
}



// Displays the gameboard objects current state
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



// Checks if the gameboard is full
// Inputs: turn, rows, cols, board
// Outputs: bool
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



// Checks if the gameboard is empty
// Inputs: turn, rows, cols, board
// Outputs: bool
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



// If the gameboard is empty, this function drops a piece at the bottom of a column
// Inputs: turn, rows, cols, board
// Outputs: updates gameboard state
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



// If the gameboard is not empty, this function drops a piece in the selected column
// Inputs: turn, rows, cols, board
// Outputs: bool
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



// Checks the state of the gameboard and applies updates based off of user input
// Inputs: turn, rows, cols, player, board
// Outputs: updated gameboard
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



// Checks if player 1 wants to go first in single player mode
// Inputs: player
// Outputs: bool
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


// Alternates which player is currently taking their turn
// Inputs: player
// Outputs: inverse player
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



// randomly drops pieces on the gameboard
// inputs: rows, cols, player, board
// outputs: gameboard with piece dropped in random column
int ai(int rows, int cols, int &player, string** &board)
{
    player = 2;
    srand (time(NULL));
    int turn = rand() % (cols - 1);
    refresh_board(turn, rows, cols, player, board);
    return player;
}



// Checks if gameboard is full and returns true if so
// inputs: rows, cols, board
// outputs: bool
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



// Checks vertical connect 4 for player_1
// Inputs: rows, cols, board
// Outputs: bool
bool vertical_p1(int rows, int cols, string** &board)
{
    int counter = 0;
    bool detected;
    bool victory;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (board[i][j] == "X")
            {
                bool detected = true;
                counter = counter + 1;
            }
            if (counter == 4)
            {
                victory = true;
            }
        }
    }
    return victory;
}



// Checks vertical connect 4 for player_2
// Inputs: rows, cols, board
// Outputs: bool
bool vertical_p2(int rows, int cols, string** &board)
{
    int counter = 0;
    bool detected;
    bool victory;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (board[i][j] == "O")
            {
                bool detected = true;
                counter = counter + 1;
            }
            if (counter == 4)
            {
                victory = true;
            }
        }
    }
    return victory;
}



// Checks horizontal connect 4 for player_1
// Inputs: rows, cols, board
// Outputs: bool
bool horizontal_p1(int rows, int cols, string** &board)
{
    int counter = 0;
    bool detected;
    bool victory = false;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols-1; j++)
        {
            if (board[i][j] == "X" && board[i][j + 1] == "X" && board[i][j + 2] == "X" && board[i][j + 3] == "X")
            {
                victory = true;
                break;
            }
        }
    }
    return victory;
}



// Checks horizontal connect 4 for player_2
// Inputs: rows, cols, board
// Outputs: bool
bool horizontal_p2(int rows, int cols, string** &board)
{
    int counter = 0;
    bool detected;
    bool victory = false;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols-1; j++)
        {
            if (board[i][j] == "O" && board[i][j + 1] == "O" && board[i][j + 2] == "O" && board[i][j + 3] == "O")
            {
                victory = true;
                break;
            }
        }
    }
    return victory;
}



// Checks right diagonal connect 4 for player_1
// Inputs: rows, cols, board
// Outputs: bool
bool right_diagonal_p1(int rows, int cols, string** &board)
{
    int count;
    for (int i = rows; i > rows; i--)
    {
        for (int j = cols; j > cols; j--)
        {
            for (int z = 0; z <= i && z <= j; z++)
            {
                if (board[i-z][i-z] == "X")
                {
                    count += 1;
                }
                else if (count >= 4)
                {
                    return true;
                }
                else
                {
                    count = 0;
                }
            }
            count = 0;
        }
        count = 0;
    }
    if (count >= 4)
    {
        return true;
    }
    else
    {
        return false;
    }
}



// Checks right diagonal connect 4 for player_2
// Inputs: rows, cols, board
// Outputs: bool
bool right_diagonal_p2(int rows, int cols, string** &board)
{
    int count;
    for (int i = rows; i > rows; i--)
    {
        for (int j = cols; j > cols; j--)
        {
            for (int z = 0; z <= i && z <= j; z++)
            {
                if (board[i-z][i-z] == "O")
                {
                    count += 1;
                }
                else if (count >= 4)
                {
                    return true;
                }
                else
                {
                    count = 0;
                }
            }
            count = 0;
        }
        count = 0;
    }
    if (count >= 4)
    {
        return true;
    }
    else
    {
        return false;
    }
}



// Checks left diagonal connect 4 for player_1
// Inputs: rows, cols, board
// Outputs: bool
bool left_diagonal_p1(int rows, int cols, string** &board)
{
    int count;
    for (int i = rows; i > rows; i--)
    {
        for (int j = cols; j < cols; j++)
        {
            for (int z = 0; z <= i && z <= j; z++)
            {
                if (board[i-z][i-z] == "X")
                {
                    count += 1;
                }
                else if (count >= 4)
                {
                    return true;
                }
                else
                {
                    count = 0;
                }
            }
            count = 0;
        }
        count = 0;
    }
    if (count >= 4)
    {
        return true;
    }
    else
    {
        return false;
    }
}



// Checks left diagonal connect 4 for player_2
// Inputs: rows, cols, board
// Outputs: bool
bool left_diagonal_p2(int rows, int cols, string** &board)
{
    int count;
    for (int i = rows; i > rows; i--)
    {
        for (int j = cols; j < cols; j++)
        {
            for (int z = 0; z <= i && z <= j; z++)
            {
                if (board[i-z][i-z] == "O")
                {
                    count += 1;
                }
                else if (count >= 4)
                {
                    return true;
                }
                else
                {
                    count = 0;
                }
            }
            count = 0;
        }
        count = 0;
    }
    if (count >= 4)
    {
        return true;
    }
    else
    {
        return false;
    }
}




// Checks all win conditions for player 1
// Inputs: rows, cols, board
// Outputs: bool
bool check_p1(int rows, int cols, string** &board)
{
    if (vertical_p1(rows, cols, board) == true || horizontal_p1(rows, cols, board) == true || right_diagonal_p1(rows, cols, board) == true || left_diagonal_p1(rows, cols, board) == true)
    {
        return true;
    }
    else return false;
}


// Checks all win conditions for player 2
// Inputs: rows, cols, board
// Outputs: bool
bool check_p2(int rows, int cols, string** &board)
{
    if (vertical_p2(rows, cols, board) == true || horizontal_p2(rows, cols, board) == true || right_diagonal_p2(rows, cols, board) == true || left_diagonal_p2(rows, cols, board) == true)
    {
        return true;
    }
    else return false;
}




// Checks all win conditions for both players
// Inputs: rows, cols, board
// Outputs: bool
bool check_all_conditions(int rows, int cols, string** &board)
{

    if (check_p1(rows, cols, board) == true)
    {
        cout << "Player 1 Wins! " << endl;
        return true;
    }
    else if (check_p1(rows, cols, board) == true)
    {
        cout << "Player 2 Wins! " << endl;
        return true;
    }
    else if (tie(rows, cols, board) == true)
    {
        cout << "Both players failed to secure a victory: Tie!" << endl;
        return true;
    }
    else
    {
        return false;
    }
}



// The single player gamemode: Pits a human player vs the clever ai
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
    check_all_conditions(rows, cols, board);
    single_player(rows, cols, player, board);
}



// Multiplayer mode: Pits two competitive players against each other
void multi_player(int rows, int cols, int &player, string** &board)
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
            cout << "Player: " << player;
            turn = get_input(" Please enter your move: ", cols) - 1;
            refresh_board(turn, rows, cols, player, board);
        }
        break;
    }
    check_all_conditions(rows, cols, board);
    multi_player(rows, cols, player, board);
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
    int players = 0, rows = 0, cols = 0, player = 1;
    string **board;

    while (true)
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
        if (players == 1)
        {
            player_1_first(player);
            single_player(rows, cols, player, board);
        }
        else if (player == 2)
        {
            multi_player(rows, cols, player, board);
        }
    }
    return 0;
}