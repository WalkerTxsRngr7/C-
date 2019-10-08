#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void printArray(int arrayToPrint[], int size);
string numExist(int checkArray[], int size, int userNum);

int main(int argc, char** argv) {
	
//	int array1[] = {1, 2, 3, 4, 5};
////	cout << array1[2];
//	
//	//loop through each element in the array and output it
//	for (int i = 0; i < 5; i++)
//	{
//		cout << array1[i] << endl;
//	}
	
	//fill an array with random values
	int array2[5];
	srand(time(0));
	for (int i = 0; i < 5; i++)
	{
		array2[i] = (rand() % 5) + 1;
	}
	
	printArray(array2, 5);
	
	
	
	int userGuess;
	cout << "Guess a number between 1 and 5 ";
	cin >> userGuess;
	string exists = numExist(array2, 5, userGuess);
	cout << exists;
	
	return 0;
}

string numExist(int checkArray[], int size, int userNum)
{
	string exists = "Nope";
	for (int i = 0; i < size; i++)
	{
		if (userNum == checkArray[i])
		{
			exists = "Yessiry - it's in the array";
		}
	}
	return exists;
}

void printArray(int arrayToPrint[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arrayToPrint[i] << endl;
	}
}
