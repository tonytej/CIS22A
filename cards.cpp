/*
Antony Tejakusuma
CIS 22A M/W 9:30-11:20am
*/

#include <iostream>

using namespace std;

int main (){
	
	string card, cardSymbol, cardValue;
	cout << "Welcome!" << endl;
	cout << "Enter the card notation: ";
	cin >> card;
	if (card.length() == 2){
		cardSymbol = card.substr(1, 1);
		cardValue = card.substr(0, 1);
	} else {
		cardSymbol = card.substr(2, 1);
		cardValue = card.substr(0, 2);
	}
	if (cardSymbol == "D"){
		cardSymbol = "Diamonds";
	}
	if (cardSymbol == "H"){
		cardSymbol = "Hearts";
	}
	if (cardSymbol == "S"){
		cardSymbol = "Spades";
	}
	if (cardSymbol == "C"){
		cardSymbol = "Clubs";
	}
	if (cardValue == "K"){
		cardValue = "King";
	}
	if (cardValue == "Q"){
		cardValue = "Queen";
	}
	if (cardValue == "J"){
		cardValue = "Jack";
	}
	if (cardValue == "A"){
		cardValue = "Ace";
	}
	cout << "You Entered: " << cardValue << " of " << cardSymbol << endl;

}


