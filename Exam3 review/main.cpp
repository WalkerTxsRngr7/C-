#include <iostream>
#include "HeartRates.h"
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
HeartRates createHeartRate();
void displayHeartRate(HeartRates heartRate);

int main(int argc, char** argv) {
	
	
	
	HeartRates heartRate = createHeartRate();
	displayHeartRate(heartRate);
	
	return 0;
}

HeartRates createHeartRate()
{
	string fName;
	string lName;
	int birthYear;
	int currentYear;
	
	
	cout << "What is your first name, last name, birth year, and this year? ";
	cin >> fName >> lName >> birthYear >> currentYear;
	
	HeartRates heartRate(fName, lName, birthYear, currentYear);
	return heartRate;
}

void displayHeartRate(HeartRates heartRate)
{
	cout << heartRate.getFName << " " << heartRate.getLName << " Max HR:" << heartRate.maxRate() << " Target HR:" << heartRate.maxTRate() << "-" << heartRate.minTRate();
}
