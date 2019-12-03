#include <iostream>
#include <cstring>
using namespace std;

bool isPalindrome(char* cstr);


int main(int argc, char** argv) {

	char s1[50] = "neveroddoreven";
	char s2[50] = "not a palindrome";
	cout << "String 1: " << isPalindrome(s1) << endl; //true
	cout << "String 2: " << isPalindrome(s2) << endl; //false
	
	cout << endl << endl;
	cout << "Enter the length of the array. ";
	int numDoubles;
	cin >> numDoubles;
	
	double ary[numDoubles];
	for (int i = 0; i < numDoubles; i++)
	{
		cout << "Enter a number. " << endl;
		cin >> ary[i];
	}
	
	double total;
	for (int i = 0; i < numDoubles; i++)
	{
		
		total += ary[i];
		
	}
	
	double avg = total / numDoubles;
	
	cout << "Average " << avg;
	delete ary;





	return 0;
}

bool isPalindrome(char* cstr)
{
	char* front = cstr;
	char* back = cstr + strlen(cstr) -1;
	
	while (front < back)
	{
		if (*front != *back)
		{
			return false;
		}
		front++;
		back--;
	}
	return true;
}
