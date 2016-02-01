/*
Antony Tejakusuma
CIS 22A M/W 9:30-11:20am
*/

#include <iostream>

using namespace std;

int sub(int a, int b){
	int sum = a - b;
	return sum;
}

int main (){
	cout << "Enter two number to subtract: ";
	int num1, num2;
	cin >> num1 >> num2;
	int diff = sub(num1, num2);
	cout << "Difference = " << diff << endl;
	return 0;
}

