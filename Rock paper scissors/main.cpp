#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cctype>
using namespace std;

/*
Author: Walker Gross
Date: 9/8/19
Purpose: Rock Paper Scissors game with the computer.
*/

int main(int argc, char** argv) 
{
	srand(time(0));
	int cThrow;  
    int userNum, win = 0, loss = 0;
    char userThrow;
	bool cont = true;

	

    do { 			//run until user wants to quit
		cThrow = rand() % 3;		//generates a random number between 0 and 2.  0 = Rock, 1 = Paper, 2 = Scissors

        cout << "Type the first letter of your throw (R,P,S) or D when you're done.  ";
        cin >> userThrow; 	//get user's selection

		userThrow = toupper(userThrow);

        switch (userThrow){
			case 'R':  		//possibilities if user selects rock
				switch (cThrow)
				{
					case 0:
						cout << "Tie. You both threw rock.";
						break;
					case 1:
						cout << "You lost. The computer's paper covers your rock.";
						loss++;
						break;
					default:
						cout << "You won. You smashed the computer's scissors.";
						win++;
						
				}
				break;

			case 'P':			//possibilities if user selects paper
				switch (cThrow)
				{
					case 0:
						cout << "You won. You covered the computer's rock.";
						win++;
						break;
					case 1:
						cout << "Tie. You both threw paper.";
						break;
					default:
						cout << "You lost. The computer's scissors cut your paper.";
						loss++;
						
				}
				break;

			case 'S':			//possibilities if user selects scissors
				switch (cThrow)
				{
					case 0:
						cout << "You lost. The computer's rock smashed your scissors.";
						loss++;
						break;
					case 1:
						cout << "You won. You cut the computer's paper.";
						win++;
						break;
					default:
						cout << "Tie. You both threw scissors.";
						
				}
				break;

			default:
				cont = false;
		}
		cout << endl << endl;
    } while (cont);

	// output final score
	if (win > loss)
	{
		cout << "You won overall ";
	} else if (win < loss)
	{
		cout << "The computer won overall ";
	} else
	{
		cout << "You tied overall ";
	}
    cout << "with a " << win << "/" << loss << " win/loss ratio.";
    

	return 0;
}
