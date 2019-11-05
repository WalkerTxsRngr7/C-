#include <iostream>
using namespace std;

class NinjaTurtles
{
	private:
		int age;
    public:
        string name;
        string color;
		
    
    NinjaTurtles(string strName, string strColor, int age)
    {
    	name = strName;
    	color = strColor;
    	setAge(nAge);
    }
    
    NinjaTurtles(string strName, string strColor)
    {
        name = strName;
        color = strColor;
    }

    NinjaTurtles(){}

    string toString()
    {
        return "My name is " + name + " and I wear " + color + "\n";
    }
    
    int getAge(){return age;}
    void setAge(int nAge)
    {
    	bool validAge;
    	do{
    		if (nAge < 13 || nAge > 19)
    		{
    			validAge = false;
    			cout << "Re-enter the turtle's age: ";
    			cin >> nAge;
    			getchar();
    		} else 
    		{
    			age = nAge;
    			validAge= true;
    		}
    	} while (!validAge);
    }
    
    
};
