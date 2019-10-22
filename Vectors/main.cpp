#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include "manageHeaders.h"
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void printNum(int ary[]);

int main(int argc, char** argv) {
//	int ary[4];
	
	vector<int> vInt = fillVector();
	
	printVector(vInt);
//	printNum(ary);
	
	return 0;
}

void printNum(int ary[])
{
	for (int i=0; i<4; i++)
	{
		cout << ary[i] << endl;
	}
}


