/*
Antony Tejakusuma
CIS 22A M/W 9:30-11:20am
*/

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <iomanip>

using namespace std;

int main (){

	const int MONTHS = 12;
	double monthlyRainfall[MONTHS];
	double averageRainfall[MONTHS];

	ifstream fin;
	ofstream fout;

	fin.open("rainfallToDate.txt");
    if(fin.fail()){
    	cout << "Input file failed to open." << endl;
    	exit(-1);
    }

	for(int i = 0; i < MONTHS; i++){
		fin >> monthlyRainfall[i];
	}

	fin.close();

	fin.open("averageRainfall.txt");
    if(fin.fail()){
    	cout << "Input file failed to open." << endl;
    	exit(-1);
    }

    for(int i = 0; i < MONTHS; i++){
		fin >> averageRainfall[i];
	}

	fin.close();

	fout.open("result.txt");
    if(fout.fail()){
    	cout << "Output file failed to open." << endl;
    	exit(-1);
    }

	fout << "Rainfall for Cupertino: A Comparison" << endl << endl;
	fout << "Month\t\tAverage\t\t2014-15\t\tDeficit" << endl << endl;
	for(int i = 0; i < MONTHS; i++){
		fout << i + 1 << fixed << setprecision(2) << "\t\t" << averageRainfall[i] << "\t\t" << monthlyRainfall[i] << "\t\t" << averageRainfall[i] - monthlyRainfall[i] << endl;
	}


}

