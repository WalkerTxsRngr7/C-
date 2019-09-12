#include <iostream>
using namespace std;



int main(int argc, char** argv) {
	
// //Question 1 - Test Scores
//	int low = 100;
//	int avg = 0;
//	int score, numOfScores = 0, total;
//	do { 		//run until -1 is entered - get students scores
//		cout << "Enter student's score percent. (-1 to stop) ";
//		cin >> score;
//		
//		if (score == -1)
//		{
//			break;
//		} else if ( score < low)	//set score if lower than previous lowest score
//		{
//			low = score;
//		} 
//		total += score; 	//add score to total
//		numOfScores++;
//		cout << score << " entered.";
//			
//	
//		
//	} while(score != -1);
//	
//	//determine the average score without the lowest score
//	total -= low;
//	numOfScores--;
//	avg = total / numOfScores;
//	cout << "Average test score: " << avg;



////Question 2 - Greatest Common Divisor
//	int num1, num2;
//	
//	cout << "Enter two integers separated by a space. ";
//	cin >> num1;
//	cin >> num2;
//	
//	if (num1 == num2)		//check if same number
//	{
//		cout << num1 << " is the GCD.";
//	} else if (num1 < num2)		//check if num1 is lower than num2
//	{
//		for (int i = num1; i > 0; i--) 	//lower i by one until it goes into num1 and num2
//		{
//			if (num1 % i == 0 && num2 % i == 0)		//check if i goes into num1 and num2
//			{
//				cout << i << " is the GCD.";
//				break;
//			}
//		} 
//	} else if (num2 < num1)		//check if num1 is lower than num2
//	{
//		for (int i = num2; i > 0; i--)		//lower i by one until it goes into num1 and num2
//		{
//			if (num2 % i == 0 && num1 % i == 0)		//check if i goes into num1 and num2
//			{
//				cout << i << " is the GCD.";
//				break;
//			}
//		} 
//	}
	
	return 0;
}
