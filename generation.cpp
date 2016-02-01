/*
Antony Tejakusuma
CIS 22A M/W 9:30-11:20am
*/

#include <iostream>

using namespace std;

int main (){

	int yearOfBirth;
	const int GREATESTGEN = 1900,
			  SILENTS = 1928,
			  BABYB = 1946,
			  GENX = 1965,
			  MILLGEN = 1980,
			  GENZ = 2000,
			  PRESENT = 2015;

	cout << "To which generation do you belong?" << endl;
	cout << "Please enter the year of your birth: ";
	cin >> yearOfBirth;
	if (yearOfBirth >= GREATESTGEN && yearOfBirth < SILENTS){
		cout << "You belong to the \"Greatest Generation\"." << endl;
	} else if (yearOfBirth >= SILENTS && yearOfBirth < BABYB){
		cout << "You belong to the \"Silents\"." << endl;
	} else if (yearOfBirth >= BABYB && yearOfBirth < GENX){
		cout << "You belong to the \"Baby Boomers\"." << endl;
	} else if (yearOfBirth >= GENX && yearOfBirth < MILLGEN){
		cout << "You belong to the \"Generation X\"." << endl;
	} else if (yearOfBirth >= MILLGEN && yearOfBirth < GENZ){
		cout << "You belong to the \"Milennial Generation\"." << endl;
	} else if (yearOfBirth >= GENZ && yearOfBirth <= PRESENT){
		cout << "You belong to the \"Generation Z\"." << endl;
	} else {
		cout << "Invalid entry! Please enter a birth year in the range 1900 - 2015." << endl;
	}

}

