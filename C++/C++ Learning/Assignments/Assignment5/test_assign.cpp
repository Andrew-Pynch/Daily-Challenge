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
    if (0 < players < 3)
    {
        players = players; 
    }
    else
    {
        players = get_input("Invalid Number of Players: You may select Single-Player (1) or Multi-Player(2)", 2);
    }


    if (0 < rows < 21)
    {
        rows = rows;
    }
    else
    {
        rows = get_input("Invalid Number of Rows: Rows must be < 0 & >= 21", 21);
    }


    if (0 < cols < 21)
    {
        cols = get_input("Invalid Number of Cols: Cols must be < 0 & >= 21", 21);
    }
}



int main(int arc, const char **argv)
{
    int players = atoi(argv[1]);
    int rows = atoi(argv[2]);
    int cols = atoi(argv[3]);

    program_init(players, rows, cols);
}