#include <iostream>
#include <string>
#include <string.h>
#include <sstream>

using namespace std;

bool is_number(string s)
{
    // We use a const iterator because we don't want the value inside this function to protect pointed to value
    string::const_iterator it = s.begin(); 
    // Iterate through each character of the string
    while (it != s.end() && isdigit(*it)) ++it;
    //Return
    return !s.empty() && it == s.end();
}


int get_numerator()
{
    string numerator;
    cout << "Please enter the numerator of your fraction: ";
    cin >> numerator;

    if (is_number(numerator) == true)
    {
        cout << "Your numerator is " << numerator << endl;
        int int_numerator =  atoi(numerator.c_str());
        return int_numerator;
    }
    else
    {
        cout << "Invalid numerator, whole numbers only! No Decimals or letters! " << endl;
        get_numerator();
    }
}


int main()
{
    get_numerator();

    return 0;
}