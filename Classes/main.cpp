#include <iostream>
#include "ninjaTurtle.h"
#include <vector>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
NinjaTurtle getTurtle();
void displayTurtles(vector<NinjaTurtle> turtles);

int main(int argc, char** argv) {
	vector<NinjaTurtle> turtles;
	
	
	NinjaTurtle ninja;
	
//	cout << ninja.name;
	ninja.color = "purple";
//	cout << " " << ninja.color << endl;
//	cout << ninja.ToString();
	
	//create second turtle using the constructor
	NinjaTurtle ninja2("Michaelangelo", "orange");
//	cout << ninja2.ToString();
	NinjaTurtle newNinja = getTurtle();

	turtles.push_back(ninja);
	turtles.push_back(ninja2);
	turtles.push_back(newNinja);
	
	displayTurtles(turtles);
	
	
	
	return 0;
}

NinjaTurtle getTurtle()
{
	string name, color;
	
	cout << "What is the name and color? ";
	cin >> name >> color;
	
	NinjaTurtle ninja(name, color);
	
	return ninja;
}

void displayTurtles(vector<NinjaTurtle> turtles)
{
	for (int i = 0; i < turtles.size(); i++)
	{
		cout << turtles[i].ToString();
	}
}
