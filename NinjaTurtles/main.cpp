#include <iostream>
#include "NinjaTurtles.h"
#include <vector>

NinjaTurtles createATurtle();
// Expects: nothing
// Purpose: prompts for a turtle name and color
// Returns: a NinjaTurtle object

void displayTurtles(vector<NinjaTurtles> turtles);
// Expects: a vecotor of NinjaTurtle objects
// Purpose: displays each one
// Returns: nothing

using namespace std;


int main()
{
    // Create a NinjaTurtles data type from the 
    // NinjaTurtles class
    NinjaTurtles ninja;
    
    // Give the new turtle object a name and a color
    ninja.name = "Donatello";
    ninja.color = "Purple";
    

    //create a second ninja turtle using the overloaded
    // construct that takes two strings 
    NinjaTurtles ninja2("Leo", "Blue");
    

    //Let's put these into vectors and then call the tostring
    vector<NinjaTurtles> turtles;
    turtles.push_back(ninja);
    turtles.push_back(ninja2);
  	cout << "Vector " << turtles[1].toString() << endl;
    //Create more turtles from a function
//    NinjaTurtles nin3 = createATurtle();
//    turtles.push_back(nin3);

    //Using the function displayTurtles() to display
    //all the turtles in the vector
//    displayTurtles(turtles);


	ninja2.setAge(19);
//	ninja2.age = 12;
	cout << ninja2.getAge();
    return 0;
}


NinjaTurtles createATurtle()
{
    NinjaTurtles ninTurtle;
    cout << "What is the turtle's name? ";
    getline(cin, ninTurtle.name);
    cout << "What is the turtle's color? ";
    getline(cin, ninTurtle.color);
    
    return ninTurtle;
}

void displayTurtles(vector<NinjaTurtles> turtles)
{
    for (int i = 0; i < turtles.size(); i++)
    {
        cout << turtles[i].toString();
    }
}

