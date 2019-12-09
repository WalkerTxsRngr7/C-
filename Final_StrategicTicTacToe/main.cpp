#include <iostream>
#include <windows.h>   // WinApi header
#include "Board.h"
using namespace std;

void createBoard(Board gameBoard[]);
void displayBoard(Board gameBoard[], int prev);
char winner(Board gameBoard[]);
int p1Turn(Board gameBoard[], int prev);
int p2Turn(Board gameBoard[], int prev);

int main(int argc, char** argv) {
	

	Board gameBoard[9];
	createBoard(gameBoard);
	int prev = 0;
	
	
	
	do {
		displayBoard(gameBoard, prev);
		if (winner(gameBoard))
		{
			cout << "Player 2 Wins! ";
			break;	
		}
		prev = p1Turn(gameBoard, prev);
		displayBoard(gameBoard, prev);
		if (winner(gameBoard))
		{
			cout << "Player 1 Wins! ";
			break;
		}
		prev = p2Turn(gameBoard, prev);
	} while (winner(gameBoard) == '_');
	
	// if (winner(gameBoard) == 'X')
	// 	cout << "Player 1 Wins!";
	// else
	// 	cout << "Player 2 Wins!";
	
	return 0;
}

void createBoard(Board gameBoard[])
{
	for (int i = 0; i < 9; i++)
	{
		gameBoard[i] = Board();
	}
}

void displayBoard(Board gameBoard[], int prev)
{
	HANDLE  hConsole;
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	for (int i = 0; i < 9; i += 3)		//Main board row
	{
		int col1 = 0;
		int col2 = 0;
		int col3 = 0;
		for (int row = 0; row < 3; row++)		//small board row
		{
			for (int col = 0; col < 3; col++)			//columns
			{
				if (i == prev-1)
				{
					SetConsoleTextAttribute(hConsole, 2);
				} else
				{
					SetConsoleTextAttribute(hConsole, 15);
				} 
				cout << gameBoard[i].board[col1];
				col1++;
			}
			SetConsoleTextAttribute(hConsole, 15);
			cout << " | ";
			for (int col = 0; col < 3; col++)
			{
				if (i+1 == prev-1)
				{
					SetConsoleTextAttribute(hConsole, 2);
				} else
				{
					SetConsoleTextAttribute(hConsole, 15);
				} 
				cout << gameBoard[i+1].board[col2];
				col2++;
			}
			SetConsoleTextAttribute(hConsole, 15);
			cout << " | ";
			for (int col = 0; col < 3; col++)
			{
				if (i+2 == prev-1)
				{
					SetConsoleTextAttribute(hConsole, 2);
				} else
				{
					SetConsoleTextAttribute(hConsole, 15);
				} 
				cout << gameBoard[i+2].board[col3];
				col3++;
			}
			cout << endl;
		}
		SetConsoleTextAttribute(hConsole, 15);
		cout << "----|-----|----";
		cout << endl;
	} 
	cout << endl << endl;
}

int p1Turn(Board gameBoard[], int prev)
{
	//get the Board to play in
	if (prev == 0)
	{	
		int b = 0;
		do
		{
			cout << "Type the number of the board you want to play in. ";
			cin >> b;
		} while (b > 9 || b < 1 || gameBoard[b-1].getWinner() != '_');
		prev = b;
	}

	return gameBoard[prev-1].p1Turn();
}

int p2Turn(Board gameBoard[], int prev)
{
	//get the Board to play in
	if (prev == 0)
	{	
		int b = 0;
		do
		{
			cout << "Type the number of the board you want to play in. ";
			cin >> b;
		} while (b > 9 || b < 1 || gameBoard[b-1].getWinner() != '_');
		prev = b;
	}

	return gameBoard[prev-1].p2Turn();
}

char winner(Board gameBoard[])
	{
		//char for the winner of the main board
		char win = '_';

		//update Board object win variable
		for (int i = 0; i < 9; i++)		
		{
			gameBoard[i].winner();
		}

		//test for horizontal win
		for (int i = 0; i < 7; i++)
		{
			if (gameBoard[i].getWinner() != '_')
			{
				if (gameBoard[i].getWinner() == gameBoard[i+3].getWinner() && gameBoard[i].getWinner() == gameBoard[i+6].getWinner())
				{
					win = gameBoard[i].getWinner();
				} else if (i % 3 == 0 && gameBoard[i].getWinner() == gameBoard[i+1].getWinner() && gameBoard[i].getWinner() == gameBoard[i+2].getWinner())
				{
					win = gameBoard[i].getWinner();
				}
				else if ((gameBoard[0].getWinner() == gameBoard[4].getWinner() && gameBoard[4].getWinner() == gameBoard[8].getWinner()) || (gameBoard[2].getWinner() == gameBoard[4].getWinner() && gameBoard[4].getWinner() == gameBoard[6].getWinner()))
				{
					win = gameBoard[i].getWinner();
				}
			}
			
		} 
		return win;
	}