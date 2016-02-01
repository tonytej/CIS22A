/*
Antony Tejakusuma
CIS 22A M/W 9:30-11:20am
*/

#include <iostream>

using namespace std;

int main (){

	cout << "Welcome! This program will tell you your \"Rock\" Star Name\n";
	string firstName, favoriteColor, birthStone;
	cout << "Please enter your first name: ";
	cin >> firstName;
	cout << "Please enter your favorite color: ";
	cin >> favoriteColor;
	cout << "Please enter your birthstone: ";
	cin >> birthStone;
	cout << "Your \"Rock\" Star Name is " << firstName << " the " 
		 << favoriteColor << " " << birthStone << endl;

}

