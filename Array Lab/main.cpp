#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;



int largestNum(int array[]);

int main(int argc, char** argv) {
	int num;
	int array1[5];
	cout << "Enter 5 numbers. ";
	for (int i = 0; i < 5; i++)
	{
		cin >> num;
		array1[i] = num;
	}
	
	int largest = largestNum(array1);
	cout << endl << largest << " is the largest number you entered. ";
	
	return 0;
}

int largestNum(int array[])
{
	int largest = 0;
	for (int i = 0; i < 5; i++)
	{
		if (array[i] > largest)
		{
			largest = array[i];
		}
	}
	return largest;
}

