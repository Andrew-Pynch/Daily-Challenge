#include<iostream>
#include<cmath>
#include<cstdlib>

using namespace std;

// initializes the beginning state of the board given a certain number disks
void buildBoard(int array[][3], int rows);

// displays the current state of the board at a given timestep in the process of moving the disks
void printArray(int array[][3], int rows);

// moves disks to next posistion necessary to solve towers
void moveDisk(int disk, int b[][3], int from_column, int to_column, int rows);

// The main enchilda of the program. Calls build, then print / towers recursively
void towers(int disks, int b[][3], int from_column, int spare, int to_column, int rows);

// Make sure the user isn't a nub and only enters valid input
void checkInput(){
    cin.clear();
    cin.ignore(1000, '\n');
    cout<<"\033Yo! Enter an int less than 100! \033[0m\n";
}

int main()
{
    string run = "yes";
    int input = 1;
    int x;
    int rows;
    while (input == 1){
    while (run == "Yes" || run == "yes" || run == "Y" || run == "y")
    {
	cout<<"Please enter the number of disks: "<<endl;
	cin>>x;
	if (cin.fail() || x>100 || x<0)
    {
		checkInput();
		break;
	}
	rows = x;
	int board[x][3];
	buildBoard(board, rows);
	printArray(board, rows);
	towers(x, board, 0, 1, 2, rows);
	cout<<"Would you like to play again?"<<endl;
	cin>>run;
    }
    if (run != "Yes" && run !="yes")
    {
    	break;
    }
    }
    return 0;
}

void buildBoard(int array[][3], int rows)
{
    for (int x = 0; x<rows; x++)
    {
	array[x][0] = x+1;
	for (int y = 1; y<3; y++)
    {
	    array[x][y] = 0;
	}
    } 
}
void printArray(int array[][3], int rows)
{
    for (int x = 0; x<rows; x++)
    {
	for (int y = 0; y<3; y++)
    {
	    cout<<array[x][y];
	}
	cout<<endl;
    }
    cout<<"***********************"<<endl;
} 



void towers(int disks, int b[][3], int from_column, int spare, int to_column, int rows)
{
    if(disks!=0)
    {
	towers(disks-1, b, from_column, to_column, spare, rows);
	cout<<"Moving disk "<<disks<<" from "<<from_column<<" to "<<to_column<<endl;
	//moveDisk(disks-1, b, from_column, to_column, rows);	
	printArray(b, rows);
	towers(disks-1, b, spare, from_column, to_column, rows);
    }
}