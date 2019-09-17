#include <iostream>
using namespace std;

void americanDad(int alpha);
void bobsBurgers(int& b);

int main(int argc, char** argv)
{
    int a, b;

    cout << "Enter in a value for 'a' and 'b'.";
    cin >> a >> b;
    americanDad(a);
    cout << "\nAfter the function call a is: " << a;
    bobsBurgers(b);
    cout << "\nAfter the function call b is: " << b;

}

void americanDad(int alpha)
{
    alpha = alpha + 7;
    cout << "Inside the americanDad function a is " << alpha;
}

void bobsBurgers(int& b)
{
	b = b + 3;
	cout << "\nInside the bobsBurgers function b is " << b;
}
