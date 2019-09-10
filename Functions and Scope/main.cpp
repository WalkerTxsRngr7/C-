#include <iostream>
#include<iomanip>

using namespace std;

/***** function declarations  *****/

// displays welcome message
void welcomeMessage();

//displays menu items and return an integer representing selection
int displayMenu();

//calculate and return the price of grooming
double grooming ();

//calculate the total including price of service. Receives a double which represents cost of service
double calculateTotal(double price);

//display the totals to the screen. Send the double data type which is sub total and the string description of service
void printTotal(double total, string serviceName);


/* Use of functions and scope of variables */

int main(int argc, char** argv) {

	welcomeMessage();

	int serviceType = displayMenu(); // displayMenu returns an int, so set up an int to receive the returned value
	//cout <<  serviceType;  debug to make sure the correct value was returned

	double price; // calculated price
	string service; // english description of the service selected

	//Select different pricing for Grooming or Boarding
	switch (serviceType)
	{
		case 1:
			price = grooming();  // Get the price of grooming and set the returned value to a double data type
			service = "Grooming";
			break;
		case 2:
			//logic for Boarding
			break;
		default:
			cout << "Incorrect Entry";
	}

	double total = calculateTotal(price);
	printTotal(total, service);
	return 0;
}

//function definitions
void welcomeMessage()
{
	cout << "Welcome to the Doggie Bath House";
}

int displayMenu()
{
	int serviceType; // have to declare locally

	cout << "What service would you like? 1) Groom 2) Boarding";
	cin >> serviceType;
	return serviceType;
}

double grooming ()
{
	const double BASE_PRICE = 15.99;
	// include logic for grooming pricing
	return BASE_PRICE;
}

double calculateTotal(double subTotal)
{
	const double SALES_TAX = .081;
	return subTotal + (subTotal * .081);
}

void printTotal(double total, string serviceName)
{
	cout <<endl;
	cout << setprecision(2) << fixed; // manipulator used with cout to format data - needs to include #include<iomanip>
	cout << "Your total is " << total << " for " << serviceName;
}
