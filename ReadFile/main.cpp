#include <iostream>
#include <fstream>
using namespace std;

int printMenu();
void addNames();
string getName();
void viewNames();
int getAge(string firstName);

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
				viewNames();
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
		int age = getAge(firstName);
		fileOut << firstName << " " << age << endl;
		firstName = getName();
	}

	fileOut.close();
}

void viewNames()
{
	ifstream fileIn;	//open a stream to read from
	fileIn.open("theData.txt");

	int age;	
	string theName;
	fileIn >> theName >> age;
	
	while (!fileIn.eof())
	{
		cout << theName << " is " << age << " years old. " << endl;
		fileIn >> theName >> age;
	}
	
	fileIn.close();
}

int getAge(string firstName)
{
	int age;
	cout << "What is the age of " << firstName << "? ";
	cin >> age;
	return age;
}

string getName()
{
	string firstName;
	cout << "What is the name? ";
	cin >> firstName;
	return firstName;
}
