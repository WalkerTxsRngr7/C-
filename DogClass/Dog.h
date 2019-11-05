#include <iostream> 
#include <vector>
using namespace std;

class Dog
{
	public: 
		string breed;
		string color;
		string name;
		
		Dog(){};
		
		Dog(string strName)
		{
			name = strName;
		}
		
		Dog(string strName, string strBreed)
		{
			name = strName;
			breed = strBreed;
		}
		
		Dog(string strName, string strBreed, string strColor)
		{
			name = strName;
			breed = strBreed;
			color = strColor;
		}
		
		string toString()
		{
			return name + " is a " + breed + " and " + color + ".\n";
		}
};
