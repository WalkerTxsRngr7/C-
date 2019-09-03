#include <iostream>
using namespace std;

/*
Author: Walker Gross
Date: 8/29/19
Purpose: In-class lab 3
*/

int main() {
	
	double weight, height, bmi;
	string cont = "y";
	while (cont == "y") {
		//input
		cout<< "Enter your weight in pounds then your height in inches. Separated by a space.\n";
		cin >> weight;
		cin >> height;
		
		//conversion from freedom units to non-freedom units
		weight = weight * 0.45359237;
		height = height * 0.0254;
		bmi = weight / (height * height);
		cout << "Your BMI is " << bmi  << endl;
		
		if (bmi < 18.5) {
			cout << "You are underweight.";
		} else if (bmi >= 18.5 && bmi < 25) {
			cout << "You are normal.";
		} else if (bmi >= 25 && bmi < 30) {
			cout << "You are overweight.";
		} else if (bmi >= 30) {
			cout << "You are obese.";
		} 
		
		//continue?
		cout << "\nWould you like to do another?(y/n) ";
		cin >> cont;
		cout << endl;
	}
	return 0;
}
