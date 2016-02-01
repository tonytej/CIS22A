/*
* Antony Tejakusuma
* CIS 22A M/W 9:30-11:20am 
*/

#include <iostream>
#include <climits>
#include <fstream>

using namespace std;

int main() {

	int number;
    int big = 0;
    int small = INT_MAX;

    ifstream fin;
    ofstream fout;

    fin.open("numbers.txt");
    if(fin.fail()){
    	cout << "Input file failed to open." << endl;
    	exit(-1);
    }

    while(fin >> number){
    	if(number > big){
    		big = number;
    	} else if (number < small) {
    		small = number;
    	}
    }

    fout.open("biggestSmallest.txt");
    if(fout.fail()){
    	cout << "Output file failed to open." << endl;
    	exit(-1);
    }

    fout << "Biggest number = " << big << endl;
    fout << "Smallest number = " << small << endl;

    fin.close();
    fout.close();


    return 0;
}