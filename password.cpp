/*
Antony Tejakusuma
CIS 22A M/W 9:30-11:20am
*/

#include <iostream>
#include <fstream>
#include <climits>

using namespace std;

int main (){

	string phrase;

	ifstream fin;
	ofstream fout;

	fin.open("phrases.txt");
	if(fin.fail()){
		fout << "Input file failed to open." << endl;
    	exit(-1);
	}

	fout.open("passwords.txt");
    if(fout.fail()){
    	fout << "Output file failed to open." << endl;
    	exit(-1);
    }

	fout << "The passwords are:" << endl;
	while(getline(fin, phrase)){
		for(int i = 0; i < phrase.length(); i++){
			if (phrase[i] == ' ') {
    			//do nothing as we wish to remove blank space
			} else if(phrase[i] == 'a' || phrase[i] == 'A') { //convert to @ symbol
    			fout << "@";
			} else if(phrase[i] == 'e' || phrase[i] == 'E') { //convert to @ symbol
    			fout << "3";
    		} else if(phrase[i] == 'o' || phrase[i] == 'O') { //convert to @ symbol
    			fout << "0";
    		} else if(phrase[i] == 'i' || phrase[i] == 'I') { //convert to @ symbol
    			fout << "!";
    		} else if(phrase[i] == 'u' || phrase[i] == 'U') { //convert to @ symbol
    			fout << "^";
    		}
			else { //all other letters leave alone
    			fout << phrase[i];
			}
		}
		fout << endl;
	}

    fin.close();
    fout.close();

	return 0;

}

