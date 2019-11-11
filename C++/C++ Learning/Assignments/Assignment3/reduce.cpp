#include <iostream>
using namespace std;

int gcd(int numerator, int denominator) 
{  
    if (numerator == 0) 
       return denominator; 
    if (denominator == 0) 
       return numerator; 

   
    if (numerator == denominator) 
        return numerator; 

   
    if (numerator > denominator) 
        return gcd(numerator-denominator, denominator); 
    return gcd(numerator, denominator-numerator); 
} 

int main()
{
    int numerator = 9;
    int denominator = 45;

    for (int i = denominator * numerator; i > 1; i--)
    {
        if ((denominator % i == 0) && (numerator % i == 0))
        {
            denominator /= i;
            numerator /= i;
        }
    }
    int gcd_val = gcd(numerator, denominator);
    numerator /= gcd_val;
    denominator /= gcd_val;
    cout << numerator << endl;
    cout << "----" << endl;
    cout << denominator << endl;
}