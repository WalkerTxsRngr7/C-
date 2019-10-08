#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void displayBoard(char gameBoard[]);	 //displays the game board
void playerTurn(char gameBoard[]);		//prompt the user for a board position and fill with an X
void cpuTurn(char gameBoard[]);
bool isWinner(char gameBoard[]);


const int SQUARES = 9;

int main(int argc, char** argv) {
	
	char gameBoard[SQUARES] = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};
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

void displayBoard(char gameBoard[])
{
	for (int row; row < SQUARES; row++)
	{
		cout << gameBoard[row] << " ";
		if ((row + 1) % 3 == 0)
		{
			cout << endl;
		}
	} 
	cout << endl;
}

void playerTurn(char gameBoard[])
{
	//get the Location from the user
	int nBoardSpot;
	
	do {
		cout << "Your turn ... Pick a number to place an X ";
		cin >> nBoardSpot;
	} while (gameBoard[nBoardSpot -1] == 'X' || gameBoard[nBoardSpot -1] == 'O');
	
	gameBoard[nBoardSpot - 1] = 'X'; 
}

void cpuTurn(char gameBoard[])
{
	srand(time(0));
	int nChoice;
	
	do
	{
		cout << "Computer chooses ";
		nChoice = rand() % 9;
		cout << (nChoice + 1) << endl;
	} while (gameBoard[nChoice] == 'X' || gameBoard[nChoice] == 'O');
	
	gameBoard[nChoice] = 'O';
}

bool isWinner(char gameBoard[])
{
	bool win = false;
	//test for horizontal win
	for (int i = 0; i < 7; i++)
	{
		if (gameBoard[i] == gameBoard[i+3] && gameBoard[i] == gameBoard[i+6])
		{
			win = true;
		} else if (i % 3 == 0 && gameBoard[i] == gameBoard[i+1] && gameBoard[i] == gameBoard[i+2])
		{
			win = true;
		}
		else if ((gameBoard[0] == gameBoard[4] && gameBoard[4] == gameBoard[8]) || (gameBoard[2] == gameBoard[4] && gameBoard[4] == gameBoard[6]))
		{
			win = true;
		}
	} 
	return win;
}

