#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int num1, num2, sum, product;
	cout<< "Problem 1\n";
	cout<< "Enter 2 numbers. Press enter after each.\n ";
	cin >> num1;
	cin >> num2;
	cout<< "Sum: "<< num1 + num2;
	cout<< endl;
	cout<< "Product: " << num1 * num2;
	
	cout<< endl;
	cout<< endl;
	
	int quarters, dimes, nickels;
	cout<< "Problem 3\n";
	cout<< "Enter a number of quarters. ";
	cin >> quarters;
	cout<< "Enter a number of dimes. ";
	cin >> dimes;
	cout<< "Enter a number of nickels. ";
	cin >> nickels;
	cout<< "The coins are worth "<<(25*quarters)+(10*dimes)+(5*nickels);
	
	
	
	
	
}
