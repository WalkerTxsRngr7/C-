#include <iostream>
using namespace std;

class NinjaTurtle
{
	public:
		string name = "Donatello";
		string color;
	
	//Default constructor
	NinjaTurtle(){};
	
		
	//Constructor
	NinjaTurtle(string strName, string strColor)
	{
		name = strName;
		color = strColor;
	}
	
	string ToString()
	{
		return name + " wears " + color + "\n";
	}
};
