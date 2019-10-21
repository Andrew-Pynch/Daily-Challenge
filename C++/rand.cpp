#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
    int x;

    srand(time(NULL)); // seed that rng
    x = rand() % 5;
    
    if (x == 0)
    {
        cout << "Bummer I'm a zero! " << endl;
    }
    else if ((x%2)==1)
    {
        cout << "I'm an odd number!" << endl;
    }
    if (x==1)
    {
        cout << "I'm the number 1! " << endl;
    }

    return 0;
}
