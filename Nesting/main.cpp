#include <iostream>
using namespace std;




int main(int argc, char** argv) {
//	for (int i = 0; i <= 3; i++){
//		cout << i;
//	}	
//
//	return 0;

	const int MIN_ITEMS = 3;
	const int MIN_VALUE = 1000;
	const int LARGE_BONUS = 50;
	const int MEDIUM_BONUS = 25;
	const int SMALL_BONUS = 10;
	
	int bonus = 0;
	double salesAmt = 0;
	int itemsSold = 0;
	
//	while (true)
	int numSales;
	cout << "How many sales to enter? ";
	cin >> numSales;
	for (int i=1; i<=numSales; i++)
	{
		cout << "Sales Amount: ";
		cin >> salesAmt;
		
		if (salesAmt <= 0)
		{
			break;
		} else 
		{
			cout <<"\nEnter Units sold: ";
			cin >> itemsSold;
			
			if (itemsSold >= MIN_ITEMS) 
			{
				if (salesAmt >= MIN_VALUE)
				{
					bonus = LARGE_BONUS;
				} else 
				{
					bonus = MEDIUM_BONUS;
				}
			} else 
			{
				bonus = SMALL_BONUS;
			}
			cout << "Salesperson #" << i << ": Bonus " << bonus << endl;
//			cout << "Your bonus is $" << bonus << endl;
		}
		
		
	}
}
