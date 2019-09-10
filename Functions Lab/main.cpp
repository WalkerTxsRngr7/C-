#include <iostream>
#include<iomanip>

using namespace std;

/***** function declarations  *****/
//convert liters to gallons
double litersToGallons(double liter);
//get user liters
double getUserLiters();
//get user miles
double getUserMiles();
//ask user if they want to continue
bool cont();
//print the MPG value
void printMpg(double gallons, double miles);
/* Use of functions and scope of variables */

int main(int argc, char** argv) 
{

	do{
		double liters = getUserLiters();
		double miles = getUserMiles();
		double gallons = litersToGallons(liters);
		
		printMpg(gallons, miles);
		bool contInput = cont();
	} while (contInput);
	
	
	
	
	

	return 0;
}

double getUserLiters()
{
	cout << "Enter the liters consumed by your car. ";
	double liters;
	cin >> liters;
	return liters;
}

double getUserMiles()
{
	cout << "Enter the miles travelled. ";
	double miles;
	cin >> miles;
	return miles;
}

double litersToGallons(double liter)
{
	const double LITERS_TO_GALLONS = 0.264179;
	return liter * LITERS_TO_GALLONS;
}

bool cont()
{
	cout << "\nWould you like to go get another MPG? (y/n)";
	char contInput;
	cin >> contInput;
	if (contInput == 'Y'){
		return true;
	} else {
		return false;
	}
}

void printMpg(double gallons, double miles)
{
	double mpg = miles / gallons;
	cout <<endl;
	cout << setprecision(2) << fixed; // manipulator used with cout to format data - needs to include #include<iomanip>
	cout << "Your MPG is " << mpg ;
}
