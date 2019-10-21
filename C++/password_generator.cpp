// Program: lab3 password_generator - CS161
// Author: Andrew Pynch - pyncha@oregonstate.edu
// Student ID: 932-953-192
// Description: Create password based off of user input


#include <iostream> // input output
#include <stdlib.h> // rand() function
#include <math.h> // pow() function
#include <sstream>
#include <string>
#include <algorithm>


using namespace std;

int main()
{
    cout << "Welcome to the Password creator! " << endl;

    int pass_length;
    cout << "Enter your desired password length as an integer " << endl;
    cin >> pass_length;

    bool letters;
    cout << "Would you like letters in your password? 0 for NO! 1 for YES!" << endl;
    cin >> letters;

    bool uppercase;
    int uppercase_num;
    cout << "Would you like uppercase letters in your password? 0 for NO! 1 for YES!" << endl;
    cin >> uppercase;
    if (uppercase == 1)
    {
        cout << "How many uppercase letters would you like in your password?" << endl;
        cin >> uppercase_num;
    }

    
    bool lowercase;
    int lowercase_num;
    cout << "Would you like lowercase letters in your password? 0 for NO! 1 for YES!" << endl;
    cin >> lowercase;
    if (lowercase == 1)
    {
        cout << "How many lowercase letters would you like in your password?" << endl;
        cin >> lowercase_num;
    }

    bool numbers;
    int numbers_num;
    cout << "Would you like numbers in your password? 0 for NO! 1 for YES!" << endl;
    cin >> numbers;
    if (numbers == 1)
    {
        cout << "How many numbers would you like in your password?" << endl;
        cin >> numbers_num;
    }




    for (int i=0; i < pass_length; i++)
    {
        




        if (numbers == 1)
        {
            cout << "Hel;p" << endl;
        }
    }








}