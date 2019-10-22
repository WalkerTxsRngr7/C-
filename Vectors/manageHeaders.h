#include <iostream>
#include <vector>
using namespace std;


//void printVector(vector<int> vData);
//vector<int> fillVector();

void printVector(vector<int> vData)
{
	for (int i=0; i<vData.size(); i++)
	{
		cout << vData[i] << endl;
	}
}

vector<int> fillVector()
{
	vector<int> vInt;
	for (int i=0; i < 4; i++)
	{
		vInt.push_back(i + 1);
	}
	
	return vInt;
}
