//This program calculates the GCF and LCM of two positive integers.
//Developer:

#include <iostream>
using namespace std;

int main()
{
    //Variables
    //x and y represent the 2 positive integers.
    int x=0;
    int y=0;
    int temp;
    
    cout << "This program calculates the GCF of two positive integers. \n";

    while ((x<=0)) {
    
          //User imputs x integer.
          cout << "Please enter the first POSITIVE integer. \n";
          cin >> x;

          if ((x<0)) {
                          cout << "Cannot use negative integers \n";
          }
          else {
               cout << "You entered: \n";
               cout << x << endl;
          }
          
    }
    
        while ((y<=0)) {
    
          //User imputs y integer.
          cout << "Please enter the second POSITIVE integer. \n";
          cin >> y;

          if ((y<0)) {
                          cout << "Cannot use negative integers \n";
          }
          else {
               cout << "You entered: \n";
               cout << y << endl;
          }
          
    }
    

    //Computer calculates GCF
    while( y!= 0) {
           temp = x % y;
           x = y;
           y = temp;
    }

    //The computer displays the GCF
    cout << "The greatest common factor is... \n";
    cout << x << endl;
    
    system ("pause");
    return 0;
    
}