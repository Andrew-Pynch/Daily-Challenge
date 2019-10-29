#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int days_worked;
    double salary = 0.01;

    cout << "Please enter the number of days you worked this month:";
    cin >> days_worked;
    
    for (int i=0; i < days_worked; i++)
    {
        salary =  salary * 2;
        cout << "Salary day " << i+1 << " = $" << salary << endl;
    }
    
    


}
