#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int countEven(int ary[]);
string lookupName(string targetName, string names[], string phoneNumbers[], int size);

int main(int argc, char** argv) {
	
	// Question 1
//	int ary[10];
//	
//	for (int i=0;i<10;i++)
//	{
//		int num;
//		cout << "Enter a number. ";
//		cin >> num;
//		ary[i] = num;
//	}
//	cout << countEven(ary) << " evens.";
	
	
	
	//Question 2
	string names[] = {"Michael",
                      "Ash",
                      "Jack",
                      "Freddy"};
    string phoneNumbers[] = {"333-8000","333-2323",
                             "333-6150","339-7970"};
    string targetName, targetPhone;
    char c;
    do
    {
		cout << "Enter a name to find the "
		  	<< "corresponding phone number."
		  	<< endl;
		cin >> targetName;
		targetPhone = lookupName(targetName, names, phoneNumbers,4);
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




	//Question 3
	
	
	
	
	return 0;
}

int countEven(int ary[])
{
	int cnt = 0;
	
	for (int i=0;i < 10; i++)
	
		if (ary[i] % 2 == 0)
		{
			cnt++;
		}
	}
	return cnt;
}

string lookupName(string targetName, string names[], string phoneNumbers[], int size)
{
	for (int i=0;i<size;i++)
	{
		if (names[i] == targetName)
		{
			return phoneNumbers[i];
		}
	}
	return "";
}



