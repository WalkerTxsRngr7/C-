#include <iostream>
using namespace std;

void printPerson(int &age);

int main(int argc, char** argv) {
	
	int x = 25;
	cout << "x is " << x << endl;
	
	//the & is called a reference or address of operator
	cout << "The address of x is " << &x << endl;
	
	//a pointer points to a variable
	int *p = &x;
	cout << "p is " << p << endl;
	
	//let's look at the value that p is pointing to (25)
	cout << "The value p is pointing to is " << *p << endl;
	
	*p = 800; //go INTO that variable and change it's value
	cout << "The value of p is now " << *p << endl;
	//since *p is pointing to the same address of x, this also changes the value of x
	cout << "The value of x is now " << x << endl;

	//create an un-aimed varialbe or a dynamic variable
	int *dynamicVariable;
	dynamicVariable = new int;
	cout << "\nEnter a variable. ";
	cin >> *dynamicVariable;
	*dynamicVariable = *dynamicVariable + 1;
	cout << *dynamicVariable;
			
	return 0;
}

