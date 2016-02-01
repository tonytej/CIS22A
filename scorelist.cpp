/*
Antony Tejakusuma
CIS 22A M/W 9:30-11:20am
*/

#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

/**
    Searches an array for a particular value
    @param array the array to search
    @param sizeArray the size of the array to search
    @param value the value to search for
    @return the index of the item in the array if it exists in the array or -1 if it doesn't

*/
int linearSearch(string array[], int sizeArray, string value);

/**
removes an item from a list, given the index of the item to remove
@param array the original list stored as an array
@param sizeArray the size of the original list before the value was removed
@param indexToRemove the index of the item to remove
@return the size of the array with the item removed

*/
void remove(int array[], int sizeArray, int indexToRemove);

/**
removes an item from a list, given the index of the item to remove
@param array the original list stored as an array
@param sizeArray the size of the original list before the value was removed
@param indexToRemove the index of the item to remove
@return the size of the array with the item removed

*/
void remove(string array[], int sizeArray, int indexToRemove);

int main (){

	const int SIZE = 5;
	string names[SIZE];
	int scores[SIZE];

	ifstream fin;
	ofstream fout;

	fin.open("names.txt");
    if(fin.fail()){
    	cout << "Input file failed to open." << endl;
    	exit(-1);
    }
    for(int i = 0; i < SIZE; i++){
		getline(fin, names[i]);
	}
	fin.close();


	fin.open("scores.txt");
    if(fin.fail()){
    	cout << "Input file failed to open." << endl;
    	exit(-1);
    }
    for(int i = 0; i < SIZE; i++){
		fin >> scores[i];
	}
	fin.close();


	fout.open("list1.txt");
    if(fout.fail()){
    	cout << "Output file failed to open." << endl;
    	exit(-1);
    }
	fout << "#\tName\t\t\t\tScore" << endl;
	for(int i = 0; i < SIZE; i++){
		fout << i + 1 << "\t" << names[i] << "\t\t\t\t" << scores[i] << endl;
	}
	fout.close();


	int index = linearSearch(names, SIZE, "Alberto Gomez");
	cout << "The index of Alberto Gomez's Name: " << index << endl; 
	remove(names, SIZE, index);
	remove(scores, SIZE, index);


	fout.open("list2.txt");
    if(fout.fail()){
    	cout << "Output file failed to open." << endl;
    	exit(-1);
    }
	fout << "#\tName\t\t\t\tScore" << endl;
	for(int i = 0; i < SIZE - 1; i++){
		fout << i + 1 << "\t" << names[i] << "\t\t\t\t" << scores[i] << endl;
	}
	fout.close();

}

int linearSearch(string array[], int sizeArray, string value) {
    for (int i = 0; i < sizeArray ; i++){
        if (array[i] == value){
            return i;
        }
    }
    return -1;
}

void remove(int array[], int sizeArray, int indexToRemove) {
    for (int i = indexToRemove; i < sizeArray - 1; i++) {
        array[i] = array[i + 1];
    }
    return;
}

void remove(string array[], int sizeArray, int indexToRemove) {
    for (int i = indexToRemove; i < sizeArray - 1; i++) {
        array[i] = array[i + 1];
    }
    return;
}