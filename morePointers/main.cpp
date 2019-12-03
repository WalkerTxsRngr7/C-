#include <iostream>
using namespace std;
void aryFunc(int *ary);
int* createAnArray();


//Data type structure
struct Student
{
	string name;
	string id;
	string major;
	double gpa;
};

void aryStructs(struct Student ary[]);

int main(int argc, char** argv) {

	//Define a student using the struct
	Student student1 = {"Kirsten", "KM1234", "CIS", 3.5};
	
//	cout << student1.name;	
	
	
	//Define a data type
	typedef string AName;
	AName me = "Walker";
	AName dog = "Fido";
//	cout << me << " " << dog << endl;
	
//	int *aNum = new int;
//	*aNum = 3000;
//	
//	cout << "I love you " << *aNum;
//	delete aNum;

	typedef int *IntPntr;
	IntPntr p = new int;
	*p = 3000;
//	cout << p << " and " << *p << endl;
	delete p;
	
	int aryInts[2] = {2,4};
//	cout << aryInts << endl;
//	cout << *aryInts << endl;
//	cout << *(aryInts + 1) << endl;
//	aryFunc(aryInts);
//	cout << aryInts[1] << ": Value after return from the function";
	
//	int* ary = createAnArray(); //don't return an array
//	cout << "\nPointer: " << ary[0];

//	int *ary;
//	ary = createAnArray();
	
	//**** create Student struct arrays
	Student students[2];
	students[0] = student1;
	students[1] = {"Walker", "WG0742700", "CIS", 4.0};
	
	cout << students[0].name << endl;
	cout << students[1].name << endl;
	//create a function that will recieve my array of structured students!
	aryStructs(students);
	
	
	return 0;
}
void aryStructs(struct Student ary[])
{
	cout << "In the struct array function: " << ary << endl;
	cout << ary->name << endl;
	cout << (ary+1) -> name << endl;
}

//void aryFunc(int ary[])
void aryFunc(int *ary)
{
	cout << "I am in the function: " << ary << endl;
	*(ary+1) = 4000;
}

int* createAnArray()
{
	int aryNew[2] = {3,5};
	return aryNew;
}
