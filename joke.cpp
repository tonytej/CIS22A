/*
*Albert Reynaldi Sudjana
*Antony Tejakusuma
*CIS 22A M/W 9:30am-11:20am
*/

#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;
int main(){

    string line;
    int count = 1;
    ifstream fin;
    ofstream fout;
    fin.open("joke.txt");
    if (fin.fail()){
        cout << "Input file failed to open.\n";
        exit(-1);
    }
    fout.open("encrypted.txt");
    if (fout.fail()){
        cout << "Output file failed to open.\n";
        exit(-1);
    }
    while (getline(fin, line)){
        for(int i = 0; i < line.length(); i++){
            if(line[i] >= 65 && line[i] < 78){
                fout << (char)(line[i] + 13);
            } else if (line[i] >= 78 && line[i] < 91){
                fout << (char)(line[i] - 13);
            } else if (line[i] >= 97 && line[i] < 110){
                fout << (char)(line[i] + 13);
            } else if (line[i] >= 110 && line[i] < 123){
                fout << (char)(line[i] - 13);
            } else {
                fout << line[i];
            }
        }
        fout << endl;
    }
    fin.close();
    fout.close();
}




