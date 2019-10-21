#include <iostream> // input output
#include <stdlib.h> // rand() function
#include <math.h> // pow() function
#include <sstream>

using namespace std;

int main()
{
    int misconducts = 2;
    int deduction;
    if (misconducts == 0)
    {
        deduction = 0;
    }
    else
    {
        deduction = 100 * (pow(2, misconducts-1));
    }
    cout << deduction << endl;

}