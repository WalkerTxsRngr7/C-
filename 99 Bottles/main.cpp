#include <iostream>
using namespace std;

/*
Author: Walker Gross
Date: 9/4/19
Purpose: Loop through the 99 bottles song
*/

int main(int argc, char** argv) {
	string bev;
    int bottles = 99, i;
    bool wall = true;  // for needing the on the wall part of the phrase

    cout << "Enter your beverage choice. ";
    cin >> bev;

    do { // loop for each verse
        i = 2;
        do {        // loop to get the parts of each verse.
            cout << bottles << " bottle";
            if (bottles != 1){ // multiple bottles
                cout << "s";
            }
            cout << " of " << bev;
            if (wall) { // add the on the wall section
                cout << " on the wall";
                wall = false;
            } else { // add the second half of the verse.
                if (bottles == 0) { // Check for zero bottles to go to store.
                    cout << ".\nTime to go to the store to get more " << bev << ".";
                    bottles--;
                    break;
                }
                cout << ".\nTake 1 down, pass it around";
                bottles--;
                wall = true;
            }
            cout << ". ";
            i--;
        } while (i >= 0);
        cout << endl << endl;
        wall = true;
    } while (bottles >= 0);
    
	return 0;
}