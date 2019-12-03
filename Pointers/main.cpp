#include <iostream>
using namespace std;

void printPerson(int &age);

int mainApp(int argc, char** argv) {
	
	int age = 18;
	
	printPerson(age);
	cout << endl << age;
	
	
	
	return 0;
}

void printPerson(int &age)
{
	age++;
	cout << "age is " << age;
}
