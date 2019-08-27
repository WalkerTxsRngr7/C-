#include <iostream>
using namespace std;

/*
Author: Walker Gross
Date: 8/27/19
Purpose: Lab 2
*/

int main() {
	//Question 1
//	double kg, N;
//	
//	cout<< "Enter an object's mass in kg. ";
//	cin >> kg;
//	
//	N = 9.8 * kg;
//	cout<< "The object with a mass of " << kg << "kg has a Force-Weight of " << N << " Newtons.";


	//Question 2
//	double oz;
//	cout<< "Enter the ounces of the cereal box.";
//	cin>> oz;
//	cout<< "You will need " << 35273.92 / oz << " boxes of cereal to yield 1 metric ton.";
//	cout<< "The cereal box is " << oz/35273.92 <<" metric tons";

	
	//Question 3
	string tName, myName, food, adj, color, animal;
	int num;
	cout<< "Enter your teacher's name. ";
	cin >> tName;
	cout<< "\nEnter your name. ";
	cin >> myName;
	cout<< "\nEnter a food. ";
	cin >> food;
	cout<< "\nEnter a number between 100 and 200. ";
	cin >> num;
	cout<< "\nEnter an adjective. ";
	cin >> adj;
	cout<< "\nEnter a color. ";
	cin >> color;
	cout<< "\nEnter an animal. ";
	cin >> animal;
	
	cout<< endl;
	cout<< "Dear Instructor " 
		<< tName 
		<< " , I am sorry that I am unable to turn in my homework at this time. First, I ate a rotten " 
		<< food 
		<< ", which made me turn " 
		<< color 
		<< " and extremely ill. I came down with a fever of " 
		<< num 
		<< ". Next, my "
		<< adj
		<< " pet " 
		<< animal 
		<< " must have smelled the remains of the " 
		<< food 
		<< " on my homework, because he ate it. I am currently rewriting my homework and hope you will accept it late. Sincerely, " 
		<< myName;
}d
