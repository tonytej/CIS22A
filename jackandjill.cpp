/*
Antony Tejakusuma
CIS 22A M/W 9:30-11:20am
*/

#include <iostream>

using namespace std;

int main (){

	for(int count = 1; count <= 150; count ++){
		if(count % 35 == 0){
			cout << "Went Up the Hill" << endl;
		} else if(count % 7 == 0){
			cout << "Jill" << endl;
		} else if(count % 5 == 0){
			cout << "Jack" << endl;
		} else {
			cout << count << endl;
		}
	}

}

