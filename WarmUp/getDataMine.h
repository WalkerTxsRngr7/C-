#include <iostream>
#include <fstream>
#include <vector>
using namespace std;


vector<string> readData()
{
	vector<string> vNames(0);
	string name;
	ifstream fileIn;	//open a stream to read from
	fileIn.open("names.txt");
	
	while (!fileIn.eof())	//loop until end of file
	{
		fileIn >> name;
		vNames.push_back(name);
	}
	
	return vNames;
}

void writeData(vector<string> vNames)
{
	ofstream fileOut;
	fileOut.open("names.txt");

	for (int i=0; i<vNames.size(); i++)
	{
		fileOut << vNames[i] << endl;
	}
		
	fileOut.close();
}

vector<string> getData()
{
	string name;
	vector<string> vNames;
	while (name != "q")
	{
		cout << "What is the name?";
		cin >> name;
		vNames.push_back(name);
	}
	return vNames;
}

void showData(vector<string> vNames)
{
	for (int i=0; i<vNames.size(); i++)
	{
		cout << vNames[i] << endl;
	}
}
