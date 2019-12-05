#include <iostream>
#include "Board.h"
using namespace std;

void createBoard(Board gameBoard[]);
void displayBoard(Board gameBoard[]);

int main(int argc, char** argv) {
	Board gameBoard[9];
	createBoard(gameBoard);
	
	
//	do {
		displayBoard(gameBoard);
//		if (isWinner(gameBoard))
//		{
//			cout << "Customer Wins! ";
//			break;	
//		}
//		playerTurn(gameBoard);
//		displayBoard(gameBoard);
//		if (isWinner(gameBoard))
//		{
//			cout << "Player Wins! ";
//			break;
//		}
//		cpuTurn(gameBoard);
//		isWinner(gameBoard);
//	} while (true);
	
	
	
	return 0;
}

void createBoard(Board gameBoard[])
{
	for (int i = 0; i < 9; i++)
	{
		gameBoard[i] = Board();
	}
//	Board gameBoard[9] = {board0, board1, board2, board3, board4, board5, board6, board7, board8, board9};
//	return gameBoard[];
}

void displayBoard(Board gameBoard[])
{
//	Board gameBoard[9] = {board0, board1, board2, board3, board4, board5, board6, board7, board8, board9};
	for (int i = 0; i < 3; i++)
	{
		for (int row = 0; row < 3; row++)
		{
			for (int col = 0; col < 3; col++)
			{
				cout << gameBoard[row].board[col];
			}
			cout << " | ";
			for (int col = 0; col < 3; col++)
			{
				cout << gameBoard[row+1].board[col];
			}
			cout << " | ";
			for (int col = 0; col < 3; col++)
			{
				cout << gameBoard[row+2].board[col];
			}
			cout << endl;
		}
		
//		
		
		
		cout << "----|-----|----";
		cout << endl;
	} 
	cout << endl;
}
