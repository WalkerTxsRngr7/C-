#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include "fileIO.h"
using namespace std;

int countEven(vector<int> vInt);
string lookupName(string targetName, vector<string> names, vector<string> phoneNumbers);

int main(int argc, char** argv) {
	
	// Question 1
//	vector<int> vInt(0);
//	
//	for (int i=0;i<10;i++)
//	{
//		int num;
//		cout << "Enter a number. ";
//		cin >> num;
//		vInt.push_back(num);
//	}
//	cout << countEven(vInt) << " evens.";



	//Question 2
	vector<string> names;
	names.push_back("Myers");
	names.push_back("Williams");
	names.push_back("Torrance");
	names.push_back("Krueger");
    vector<string> phoneNumbers;
    phoneNumbers.push_back("333-8000");
    phoneNumbers.push_back("333-2323");
    phoneNumbers.push_back("333-6150");
    phoneNumbers.push_back("339-7970");
    string targetName, targetPhone;
    char c;
    do
    {
		cout << "Enter a name to find the "
		  	<< "corresponding phone number."
		  	<< endl;
		cin >> targetName;
		targetPhone = lookupName(targetName, names, phoneNumbers);
		if (targetPhone.length() > 0)
		{
			cout << "The number is: "
		        << targetPhone << endl;
		}
		else
		{
		     cout << "Name not found. "
		          << endl;
		}
		cout << "Look up another name? (y/n)"
		  	<< endl;
		cin >> c;
	} while (c == 'y');

	return 0;
}

int countEven(vector<int> vInt)
{
	int cnt = 0;
	
	for (int i=0;i < vInt.size(); i++)
	{
		if (vInt[i] % 2 == 0)
		{
			cnt++;
		}
	}
	return cnt;
}

string lookupName(string targetName, vector<string> names, vector<string> phoneNumbers)
{
	for (int i=0;i<names.size();i++)
	{
		if (names[i] == targetName)
		{
			return phoneNumbers[i];
		}
	}
	return "";
}


