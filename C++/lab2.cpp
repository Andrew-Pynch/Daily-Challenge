#include <iostream>
#include <cmath>

using namespace std;

int main() 
{
    // User input for number that can be represented with x bits
    int n;
    cout << "Enter the number of Bytes n:" << endl;
    cin >> n;
    
    // Max Numbers
    double max_nums_unsigned = pow(2, n);
    double max_nums_signed = pow(2, n);

    // Max Value
    double max_value_unsigned = (pow(2, n-1)) - 1;
    double max_value_signed = pow(2, n-1) - 1;

    // Output
    cout << "Max Amount of Numbers in Unsigned Binary = " << max_nums_unsigned << endl;
    cout << "Max Amount of Numbers in Signed Binary = " << max_nums_signed << endl;
    
    cout << "Max value in Unsigned Binary = " << max_value_unsigned <<  endl;
    cout << "Max value in Signed Binary = " << max_value_signed << endl;

    cout << "May I go home now? :-)" << endl;

    return 0;

}