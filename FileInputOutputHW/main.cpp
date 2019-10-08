#include <iostream>
#include <fstream>
using namespace std;

/*
Author: Walker Gross
Date: 9/26/19
Purpose: Read from grades.txt and output and write to finalGrades file with the average of the students grades.
*/

int main(int argc, char** argv) {
	ifstream fileIn;	//open a stream to read from
	fileIn.open("grades.txt");
	ofstream fileOut;
	fileOut.open("finalGrades.txt");

	int q1, q2, q3, q4, q5;	
	string fName, lName;
	
	fileIn >> fName >> lName >> q1 >> q2 >> q3 >> q4 >> q5;
	
	while (!fileIn.eof())	//loop until end of file
	{
		double fGrade;
	
		fGrade = (q1 + q2 + q3 + q4 + q5) / 5;
	
		fileOut << lName << ", " << fName << " " << fGrade << endl;
		cout << lName << ", " << fName << " " << fGrade << endl;
		
		fileIn >> fName >> lName >> q1 >> q2 >> q3 >> q4 >> q5; 
	}
	
	fileIn.close();
	fileOut.close();
	
	return 0;
}

