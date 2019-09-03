#include <iostream>
using namespace std;

/*

	Author: Walker Gross
	Date: Aug 22, 2019
	FileName: main.cpp
	Purpose: Calculate age to dog years
	
*/ 

int main(int argc, char** argv) {
	//DECLARE VARIABLES
	double age;
	
	//cout << "Hello World";
	cout << "I am super smart\n";
	cout << "I can guess your age in dog years";
	cout << endl;
	cout << "What is your age? ";
	cin >> age;
	cout << "Your age in dog years is " << (age/7);
	return 0;
}
