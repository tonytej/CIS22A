/*
Antony Tejakusuma
Albert Sudjana
CIS 22A M/W 9:30-11:20am
*/

#include <iostream>
#include <cmath>

using namespace std;

int main(){

	double weight, height, bmi;
	cout << "Welcome to Body Mass Index calculator!" << endl;
	cout << "Please enter your weight in pounds: ";
	cin >> weight;
	cout << "Please enter your height in inches: ";
	cin >> height;
	bmi = (weight / pow(height, 2)) * 703;
	cout << "Your BMI is: " << bmi << endl;
 
}