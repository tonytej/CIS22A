/*
Antony Tejakusuma
CIS 22A M/W 9:30-11:20am
*/

#include <iostream>
#include <cmath>
using namespace std;

int main (){

	double num;
	cout << "Enter a number: ";
	cin >> num;
	cout << "The square of " << num << " is: " << pow(num, 2) << endl;
	cout << "The cube of " << num << " is: " << pow(num, 3) << endl;
	cout << "The quartic (fourth power) of " << num << " is: " << pow(num, 4) << endl;
	cout << "The ceiling of " << num << " is: " << ceil(num) << endl;
	cout << "The floor of " << num << " is: " << floor(num) << endl;
	cout << "The square root of " << num << " is: " << sqrt(num) << endl;

}

