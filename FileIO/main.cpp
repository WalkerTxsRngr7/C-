#include <iostream>
#include <fstream>
using namespace std;

string getName();

int main(int argc, char** argv) {
	string firstName;

	ofstream fileOut;
	fileOut.open("theData.txt");

	do
	{
		firstName = getName();
		cout << firstName << endl;
		fileOut << firstName << endl;
	} while (firstName != "q");

	fileOut.close();

	return 0;
}

string getName()
{
	string firstName;
	cout << "What is the name?";
	cin >> firstName;
	return firstName;
}
