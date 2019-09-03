#include <iostream>
using namespace std;


int main(int argc, char** argv) {
//	int bottles = 0;
//	const int MAX_BOTTLES = 100;
//	
//	while (bottles <= 99) {
//		cout << MAX_BOTTLES - bottles << " bottles of Coke\n";
//		bottles++;
//	}

/********************* refactor 99 bottles *****/
//	int bottles = 99;
//	do {
//		bottles--;
//		cout << bottles << " bottles on the wall\n";
//	} while (bottles > 0);

////////Switch statement
	//create a menu for the user to select a C to F conversion or F to C conversion
	
	char menuChoice;
	
	cout << "A. Convert C to F\n"
		<< "B. Convert F to C\n";
	cin >> menuChoice;
	
//	if (menuChoice == 'A' || menuChoice == 'a') {
//		cout << "You chose C to F"; 
//	} else {
//		cout << "You chose F to C";
//	}

	switch (menuChoice){
		case 'a':
		case 'A':
			cout << "You chose C to F";
			break;
		default: 
			cout << "You chose F to C";
	}
	
	
	return 0;
}
