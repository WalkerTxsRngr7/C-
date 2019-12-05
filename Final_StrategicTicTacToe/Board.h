#include <iostream>
using namespace std;

class Board
{
	private:
//		const int SQUARES = 9;
		
		char winner = ' ';
	public:
		char board[9] = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};
		
		
	Board(){}
	
	
	string test()
	{
		return "TEST";
	}
		
	void display()
	{
		for (int row; row < 9; row++)
		{
			cout << board[row] << " ";
			if ((row + 1) % 3 == 0)
			{
				cout << endl;
			}
		} 
		cout << endl;
	}
	
	void p1Turn(char board[])
	{
		//get the Location from the user
		int nBoardSpot;
		
		do {
			cout << "Player 1 turn ... Pick a number to place an X ";
			cin >> nBoardSpot;
		} while (board[nBoardSpot -1] == 'X' || board[nBoardSpot -1] == 'O');
		
		board[nBoardSpot - 1] = 'X'; 
	}
	
	void p2Turn(char board[])
	{
		//get the Location from the user
		int nBoardSpot;
		
		do {
			cout << "Player 1 turn ... Pick a number to place an X ";
			cin >> nBoardSpot;
		} while (board[nBoardSpot -1] == 'O' || board[nBoardSpot -1] == 'X');
		
		board[nBoardSpot - 1] = 'O'; 
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
	
};
