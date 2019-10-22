#include <iostream>
#include "getData.h"
#include <vector>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
int mnuChoice;
    vector<string> vNames;
    string fileName;

    do 
    {
        // Display a menu
        cout << "1. Get Names From User\n";
        cout << "2. Write the Names to names.txt\n";
        cout << "3. Display contents of names.txt\n";
        cout << "4. Sort Names\n";
        cout << "5. Quit\n";
         
        cin >> mnuChoice;
        getchar();
        switch (mnuChoice)
        {
            case 1:  // Prompts for names and fills a vector
                vNames = getData();
                break;
            case 2:  // writes the names from the vector to a text file
            	cout << "What is the name of the file to read/write to? ";
            	getline(cin, fileName);
                writeData(vNames, fileName);
                break;
            case 3:  //reads the names from the text file and displays them to the console
                vNames = readData(fileName);
                showData(vNames);
                break;
            case 4:
            	sortData(vNames);
            	break;
            case 5: // ends the program
                break;
            default:
            	cout << "Invalid Choice\n";
        }

       
    } while (mnuChoice != 5 );
    
	return 0;
}
