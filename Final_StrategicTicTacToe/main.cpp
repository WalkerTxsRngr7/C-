#include <iostream>
#include "Board.h"
using namespace std;

void createBoard();
void displayBoard();

int main(int argc, char** argv) {
	
	Board gameBoard[9] = createBoard();
	
	
	do {
		displayBoard(gameBoard);
		if (isWinner(gameBoard))
		{
			cout << "Customer Wins! ";
			break;	
		}
		playerTurn(gameBoard);
		displayBoard(gameBoard);
		if (isWinner(gameBoard))
		{
			cout << "Player Wins! ";
			break;
		}
		cpuTurn(gameBoard);
//		isWinner(gameBoard);
	} while (true);
	
	
	
	return 0;
}

void createBoard()
{
	for (int i = 0; i < 9; i++)
	{
		gameBoard[i] = Board();
	}
//	Board gameBoard[9] = {board0, board1, board2, board3, board4, board5, board6, board7, board8, board9};
//	return gameBoard[];
}

void displayBoard()
{
	Board gameBoard[9] = {board0, board1, board2, board3, board4, board5, board6, board7, board8, board9};
	for (int row; row < 9; row++)
	{
		cout << gameBoard[row] << " ";
		if ((row + 1) % 3 == 0)
		{
			cout << endl;
		}
	} 
	cout << endl;
}
