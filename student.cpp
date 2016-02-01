/*

Antony Tejakusuma
CIS 22A M/W 9:30am - 11:20am

*/

#include <iostream>
using namespace std;

int main(){

	cout << "Collecting Student Data!" << endl << endl;
	char lastNameInitial;
	int studentIDNumber;
	double yearsInDeAnza;
	cout << "Please enter the first letter of your last name: ";
	cin >> lastNameInitial;
	cout << "Please enter your student ID number: ";
	cin >> studentIDNumber;
	cout << "Please enter the number of years you have attended De Anza: ";
	cin >> yearsInDeAnza;
	cout << "The first initial of your last name is " << lastNameInitial << "." << endl;
	cout << "Your student ID number is " << studentIDNumber << "." << endl;
	cout << "You have attended De Anza for " << yearsInDeAnza << " years." << endl;

}