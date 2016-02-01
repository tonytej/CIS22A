/*
Antony Tejakusuma
CIS 22A M/W 9:30-11:20am
*/

#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

int countVowels(string str){
	int count = 0;
	for(int i = 0; i < str.length(); i++){
		if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u'
			|| str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U'){
			count += 1;
		}
	}
	return count;
}

int countLetters(string s){
	int count = 0;
	for(int i = 0; i < s.length(); i++){
		if ((s[i] >= 65 && s[i] <= 90) || (s[i] >= 97 && s[i] <= 122)){
			count += 1;
		}
	}
	return count;
}

int main (){
	string sentence, str;
    int numVowels, numLetters;

    cout << "Enter a sentence or q to quit: ";
    getline(cin, sentence);

    while(sentence != "q" && sentence != "Q" && sentence != "quit" && sentence != "Quit"){
    	numVowels = countVowels(sentence);
    	numLetters = countLetters(sentence);
    	cout << "There are " << numVowels << " vowels in your sentence, and " << numLetters << " letters." << endl;
        cout << "Enter a sentence or q to quit: ";
        getline(cin, sentence);
    }
    cout << "Goodbye!" << endl;
}

