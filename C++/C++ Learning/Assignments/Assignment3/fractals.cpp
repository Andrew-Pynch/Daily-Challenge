#include <iostream>

using namespace std;

void pattern(int n, int col)
{
    // Base Case to prevent Stack Overflow
    if (n <= 0)
    {
        cout << "* " << endl;
        return;
    }

    // TOP SECTION
    pattern(n-2, col + 2);


    // A loop to print exactly col columns
    for (int i = 0; i < col; i++) cout << " ";

    // A loop to print n asterisks, each one followed by a space:
    for (int i = 0; i < n; i++) cout << "* ";


    // BOTTON SECTION
    pattern(n-2, col + 2);
}

int main()
{
    pattern(7, 0);

    return 0;
}