#include <iostream>
using namespace std;

class Board
{
	private:
		char win = '_';
	public:
		char board[9] = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};
		
		
	Board(){}
		
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
	
	int p1Turn()
	{
		//get the Location from the user
		int nBoardSpot;
		
		do {
			cout << "Player 1 turn ... Pick a number to place an X. ";
			cin >> nBoardSpot;
		} while (nBoardSpot > 9 || nBoardSpot < 1 || board[nBoardSpot -1] == 'X' || board[nBoardSpot -1] == 'O');
		
		board[nBoardSpot - 1] = 'X'; 
		return nBoardSpot;
	}
	
	int p2Turn()
	{
		//get the Location from the user
		int nBoardSpot;
		
		do {
			cout << "Player 2 turn ... Pick a number to place an O ";
			cin >> nBoardSpot;
		} while (nBoardSpot > 9 || nBoardSpot < 1 || board[nBoardSpot -1] == 'O' || board[nBoardSpot -1] == 'X');
		
		board[nBoardSpot - 1] = 'O'; 
		return nBoardSpot;
	}
	
	//determines if this Board has been won yet
	void winner()
	{
		if (win == '_')
		{
			for (int i = 0; i < 7; i++)
			{
				if (board[i] != '_')
				{
					if (board[i] == board[i+3] && board[i] == board[i+6])	//vertical win
					{
						win = board[i];
						won();
						break;
					} else if (i % 3 == 0 && board[i] == board[i+1] && board[i] == board[i+2])		//horizontal win
					{
						win = board[i];
						won();
						break;
					}
					else if ((board[0] == board[4] && board[4] == board[8]) || (board[2] == board[4] && board[4] == board[6]))	//diagonal win
					{
						win = board[4];
						won();
						break;
					}
				}
			}
		}
	}

	void won()
	{
		for (int i = 0; i < 9; i++)
		{
			if (i == 4)
				board[i] = win;
			else
				board[i] = ' ';
		}
	}

	char getWinner()
	{
		return win;
	}
	
};
