/*
Antony Tejakusuma
CIS 22A M/W 9:30-11:20am
*/

#include <iostream>

using namespace std;

int main (){

	string sentence;
	int vowels;
	cout << "Welcome! Give me a sentence and I will count its vowels." << endl;
	cout << "Please enter a sentence: ";
	getline(cin, sentence);
	for(int i = 0; i < sentence.length(); i++){
		if (sentence[i] == 'a' || sentence[i] == 'e' || sentence[i] == 'i' || sentence[i] == 'o' || sentence[i] == 'u'
			|| sentence[i] == 'A' || sentence[i] == 'E' || sentence[i] == 'I' || sentence[i] == 'O' || sentence[i] == 'U'){
			vowels += 1;
		}

	}
	cout << "There are " << vowels << " vowels in your sentence." << endl;
}

