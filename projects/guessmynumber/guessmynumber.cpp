#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(int argc, char** argv) {
	srand(time(0));
	int v1 = rand() % 101;  //generates a random number between 0 and 100
    int guess;
    int low = 0, high = 100;
    bool correct;

	//cout << "rand num: " << v1;

    do {
        cout << "Guess a number between " << low << " and " << high << ".   ";
        cin >> guess;

        if (guess > v1) {
            cout << "You are too high.\n";
            high = guess;
            
        } else if (guess < v1) {
            cout << "You are too low.\n";
            low = guess;
        } else {
            cout << "You got it correct!";
            correct = true;
        }
    } while (correct != true);
    
    

	return 0;
}



