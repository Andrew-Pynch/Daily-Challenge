#include<iostream>

using namespace std;


void initializeBoard(char **board, int rows, int columns)
{
	for(int i = 0; i<rows; i++)
	{
		for(int j = 0; j<columns; j++)
		{
			board[i][j] = char(32);
		}
	}
	print_board(board, rows, columns);
	play_game(board, rows, columns);
}




void printBoard(char **board, int rows, int cols){
	cout << "The board currently looks like: " << endl;
	cout<<"    ";
	
	for(int i = 0; i<=rows; i++)
		{
			cout<<i+1<<"   ";
		}
	cout<<endl;
	for(int i = 0; i<rows; i++){
		cout<<i+1<<" ";
		for (int j = 0; j<columns; j++){
			cout<<"| "<<board[i][j]<<" ";
		}
		cout<<"|"<<endl;
	}
}

int main()
{
	int rows = 6, cols = 6;
	
	char board = new char*[rows];
	for (int i = 0; i < cols; i++)
	{
		board[i] = new char[cols];
		init_board(board, rows, cols);
	}
}