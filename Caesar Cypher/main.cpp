#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

/*
create a caesar cypher - ability to encode or decode a message
*/
void encode();
void decode();

int main(int argc, char** argv) {
	
	string strChoice;
	
	do {
	
		cout << "\n*****************************Caesar Cypher*****************************\n\n"
			<< "1. \tEncode\n"
			<< "2. \tDecode\n"
			<< "3. \tExit\n\n"
			<< "Select a menu option: ";
			
		getline(cin, strChoice);
		
		if(strChoice == "1")
		{
			encode();
		} else if (strChoice == "2")
		{
			decode();
		} else if (strChoice == "3")
		{
			exit(0);
		} else
		{
			cout << "\nInvalid Choice";
		}
	} while (strChoice != "1" || strChoice != "2");
		
		
	return 0;
}

void encode()
{
	string strMessage;
	srand(time(0));
	char c;
	int randNum = rand() % 26 + 1;	//between 1 and 26
	
	cout << "Type a message to encode:  ";
	getline(cin, strMessage);
	
	for (int i=0; i < strMessage.length(); i++)
	{
		if (isalpha(strMessage.at(i)))
		{
			c = toupper(strMessage.at(i));	
			c = (((c-65) + randNum) % 26) + 65;	//rounds back around if past "Z"
		} else
		{
			c = strMessage.at(i);
		}
		
		cout << c;
	}
}

void decode()
{
	string strMessage;
	srand(time(0));
	char c;
	int randNum = rand() % 26 + 1;	//between 1 and 26
	
	cout << "What is your encrypted message?  ";
	getline(cin, strMessage);
	cout << strMessage;
	
	for (int i=0;i<26;i++)
	{
		for (int j=0; j < strMessage.length(); j++)
		{
			if (isalpha(strMessage.at(j)))
			{
				c = toupper(strMessage.at(j));
				c = (((c-65) + i) % 26) + 65;	//rounds back around if past "Z"
			} else
			{
				c = strMessage.at(j);
			}
			cout << c;
		}
		cout << endl;
	}
}



