#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

double avg(int num1, int num2);
double avg(double num1, double num2);

int main(int argc, char** argv) {

	double a = 5.5;
	double b = 10.5;

	cout << avg(a, b);
	return 0;
}

double avg(int num1, int num2)
{
	return (num1 + num2) / 2;
}

// overloading functions
double avg(double num1, double num2)
{
	return (num1 + num2) / 2;
}
