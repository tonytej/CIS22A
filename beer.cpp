/*
Antony Tejakusuma
CIS 22A 9:30am-11:20am
*/

#include <iostream>
using namespace std;

int main(){
    int bottle = 0;
    cout << "Welcome! Let's sing the \"99 Bottles of Beer\" song!" << endl;
    cout << "Enter the number of bottles: ";
    cin >> bottle;
    cout << endl;
    while (bottle > 0){
        if (bottle == 1){
            cout << bottle << " bottle of beer on the wall!" << endl;
            cout << bottle << " bottle of beer!" << endl;
            cout << "You take one down, pass it around." << endl;
            bottle--;
            cout << "No more bottles of beer on the wall." << endl << endl;
        } else {
            cout << bottle << " bottles of beer on the wall!" << endl;
            cout << bottle << " bottles of beer!" << endl;
            cout << "You take one down, pass it around." << endl;
            bottle--;
            if (bottle == 1){
                cout << bottle << " bottle of beer on the wall." << endl << endl;
            } else {
                cout << bottle << " bottles of beer on the wall." << endl << endl;
            }
            
        }
        
    }

}
