#include <iostream>
#include <fstream>
using namespace std;

int printMenu();
void addNames();
string getName();

int main(int argc, char** argv) {
	int selection;
	bool cont = true;
	
	while (cont)
	{
		selection = printMenu();
		switch (selection)
		{
			case 1:		//add the names
				addNames();
				break;
			case 2:		//print the names
				cout << "Under construction";
				break;
			default:	//exit
				cont = false;
		}
	}
	
	return 0;
}


int printMenu()
{
	int num;
	cout << "Type the number of your selection.\n1. Add the names.\n2.Display the names.\n3.Exit the program. ";
	cin >> num;
	return num;
}

void addNames()
{
	string firstName;

	ofstream fileOut;
	fileOut.open("theData.txt");

	firstName = getName();

	while (firstName != "q")
	{
		fileOut << firstName << endl;
		cout << firstName << endl;
		firstName = getName();
	}

	fileOut.close();
}

string getName()
{
	string firstName;
	cout << "What is the name?";
	cin >> firstName;
	return firstName;
}
