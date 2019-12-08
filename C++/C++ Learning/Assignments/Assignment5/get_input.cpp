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

int main()
{
    int x;
    get_input("Please enter an integer:", x);


    return 0;
}