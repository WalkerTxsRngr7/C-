#include <iostream>
#include <ctime>
#include <cctype>
#include <cstdlib>
using namespace std;

/*
Author: Walker Gross
Date: 9/19/19
Assignment: Exam 1
Purpose: Output which of 4 factories to visit each week for a year and then output the percent visited of each factory.
*/

//Question 3

int calcInspectPercent(double factory);			// declare calcInspectPercert function

int main(int argc, char** argv) {
	
	double fact1 = 0, fact2 = 0, fact3 = 0, fact4 = 0;
	int inspect;
	
	srand(time(0));

	for (int i = 1; i <= 52; i++)				//Loop through 52 times for each week
	{
		inspect = (rand() % 4) + 1;				//Which factory to visit 1-4

		switch (inspect)						//Add to total of visits for each factory if visited for this week
		{
			case 1:
				fact1++;
				break;
			case 2:
				fact2++;
				break;
			case 3:
				fact3++;
				break;
			default:
				fact4++;
		}

		cout << "Inspect factory " << inspect << endl;
	}

	fact1 = calcInspectPercent(fact1);			//call calcInspectPercent function to get the percent each factory was visited for the year
	fact2 = calcInspectPercent(fact2);
	fact3 = calcInspectPercent(fact3);
	fact4 = calcInspectPercent(fact4);
	
	cout << "\nInspection Percent by Factory:\nFactory 1:" << fact1 << "% \nFactory 2:" << fact2 << "% \nFactory 3:" << fact3 << "% \nFactory 4:" << fact4 << "%";
	
	
	
	return 0;
}

int calcInspectPercent(double factory)			//function to calculate the percent each factory was visited for the year.
{
	int inspectPercent;
	inspectPercent = (factory / 52) * 100;
//	inspectPercent =  factory * 0.1;
	return inspectPercent;
}
