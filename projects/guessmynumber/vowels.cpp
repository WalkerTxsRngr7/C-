#include <iostream>
using namespace std;

int main(int argc, char** argv) {
    char letter;

    cout << "Enter a letter. ";
    cin >> letter;

    switch (letter) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'y':
            cout << "\nYou entered a vowel.";
            break;
        default:
            cout << "\nYou entered a consonent.";
    }


    return 0;
}
