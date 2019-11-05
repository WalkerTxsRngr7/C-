#include <iostream>
using namespace std;

class HeartRates{
	private:
		string fName;
		string lName;
		int birthYear;
		int currentYear;
	public:
		
	
	string getFName(){return fName;}
	string setFName(string strFName)
	{
		fName = strFName;
	}
	
	string getLName(){return lName;}
	string setLName(string strLName)
	{
		lName = strLName;
	}
	
	int getBirthYear(){return birthYear;}
	int setBirthYear(int intBirthYear)
	{
		birthYear = intBirthYear;
	}
	
	int getCurrentYear(){return currentYear;}
	int setCurrentYear(int intCurrentYear)
	{
		currentYear = intCurrentYear;
	}
	
	//overloaded constructor
	HeartRates(string strFName, string strLName, int intBirthYear, int intCurrentYear)
	{
		setFName(strFName);
		setLName(strLName);
		setBirthYear(intBirthYear);
		setCurrentYear(intCurrentYear);
	}
	
	
	int maxRate()
	{
		return (220 - calcAge());	
	}
	
	int maxTRate()
	{
		return ((220 - calcAge()) * 0.85);
	}
	
	int minTRate()
	{
		return ((220 - calcAge()) * 0.5);
	}
	
	int calcAge()
	{
		return (currentYear - birthYear);
	}
	
	
	
};
