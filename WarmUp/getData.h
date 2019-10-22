#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>


using namespace std;


// Read names in from names.txt file
vector<string> readData(string fileName)
{
	ifstream inFile;
	inFile.open(fileName.c_str());

	vector<string> vNames;
	string names;
	inFile >> names;

	while (!inFile.eof())
	{
		vNames.push_back(names);
		inFile >> names;
	}

	inFile.close();
	return vNames;

} // end readNames;

//Get names from user, put into a vector and return the vector
vector<string> getData()
{
	vector<string> vNames;
	string strName = "";
	//prompt user for names
	// Entering a Q will quit the prompting
	
	while (strName !=  "Q")
	{
		
		cout << "Enter in a name, or Q to quit?";
		getline(cin, strName);

		if (strName != "Q")
		{
			vNames.push_back(strName);
		}		
	}

	return vNames; // return the vector of names

} // end getNames()


//Display the contents of a vector
void showData(vector<string> vData)
{
	for (int i = 0; i < vData.size(); i++)
	{
		cout << vData[i] << endl;
	}
} // end showData()

// Write the vector to a file called names.txt
void writeData(vector<string> vData, string fileName)
{
	ofstream outFile;
	outFile.open(fileName.c_str());	//.open() does not accept string data types
	for (int i = 0; i < vData.size(); i++)
	{
		outFile << vData[i] << endl;
	}

	outFile.close();
}

void sortData(vector<string> vData)
{
	string saveAns, fileName;
	sort(vData.begin(), vData.end());		//#include algorithm
	showData(vData);
	
	cout << "Would you like to save this sorted data to a file?";
	cin >> saveAns;
	getchar();
	if (saveAns == "Y")
	{
		cout << "What is the file name? ";
		getline(cin, fileName);
		writeData(vData, fileName);
	}
}

