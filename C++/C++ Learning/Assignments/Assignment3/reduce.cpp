//This program calculates the GCF and LCM of two positive integers.
//Developer:

#include <iostream>
using namespace std;

int main()
{
    int numerator = -9;
    int denominator = 45;
    int temp;

    while (denominator != 0)
    {
        temp = numerator % denominator;
        numerator =  denominator;
        denominator = temp;
    }

    cout << "GCF = " << numerator << endl;
    int temp2 = denominator % numerator;
    cout << temp2 << endl;
}