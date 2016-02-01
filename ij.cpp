/*
Antony Tejakusuma
CIS 22A M/W 9:30-11:20am
*/

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main (){
	cout << "i\t" << "j" << endl;
	for(double i = -5; i <= 5; i += 0.5){
		double j = pow(i, 3);
		cout << fixed << setprecision(1);
		cout << i << "\t" << j << endl;
	}

}

