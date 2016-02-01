/*
Antony Tejakusuma
CIS 22A M/W 9:30-11:20am
*/

#include <iostream>

using namespace std;

int main (){

	int year;
	int remainder;
	cout << "Welcome! Enter a year and I will tell you whether it is a Leap Year!" << endl << endl;
	cout << "Please enter the year: ";
	cin >> year;
	remainder = year % 4;
	
	if (remainder == 0){
		cout << year << " is a Leap Year." << endl;
	} else {
		cout << year << " is not a Leap Year." << endl;
	}

}

