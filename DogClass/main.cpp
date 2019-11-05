#include <iostream>
#include "Dog.h"
#include <vector>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
Dog getDog();
void displayDogs(vector<Dog> dogs);

int main(int argc, char** argv) {
	
	
	Dog dog1;
	dog1.name = "Kaiser";
	dog1.color = "Black";
	dog1.breed = "German Shepard";
	
	Dog dog2("Tikaani");
	dog2.breed = "Alaskan Malamute";
	dog2.color = "Black";
	
	Dog dog3("Cotton", "Great Perenese");
	dog3.color = "White";
	
	Dog dog4 = getDog();	
	
	vector<Dog> dogs;
	
	dogs.push_back(dog1);
	dogs.push_back(dog2);
	dogs.push_back(dog3);
	dogs.push_back(dog4);
	
	displayDogs(dogs);
	
	return 0;
}

Dog getDog()
{
	string name, color, breed;
	cout << "What is your dog's name, breed, and color? (press enter after each)";
	
	getline(cin, name);
	getline(cin, breed);
	getline(cin, color);
	
	Dog dog(name, breed, color);
	return dog;
}

void displayDogs(vector<Dog> dogs)
{
	for (int i = 0; i < dogs.size(); i++)
	{
		cout << dogs[i].toString();
	}
}
