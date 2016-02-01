/*
Antony Tejakusuma
CIS 22A M/W 9:30-11:20am
*/

#include <iostream>

using namespace std;

int main (){

	string firstName, instructorLastName, food, adjective, color, animal;
	int number;
	cout << "Enter your first name: ";
	cin >> firstName;
	cout << "Enter your instructor's last name: ";
	cin >> instructorLastName;
	cout << "Enter a food: ";
	cin >> food;
	cout << "Enter a number between 100 and 120: ";
	cin >> number;
	cout << "Enter an adjective: ";
	cin >> adjective;
	cout << "Enter a color: ";
	cin >> color;
	cout << "Enter an animal: ";
	cin >> animal;
	cout << endl << "Dear Instructor " << instructorLastName << endl << endl;
	cout << "I am sorry that I am unable to turn in my homework today. First I ate a rotten " << food << ",\n"
		 << "which made me turn " << color << " and very sick. I came down with a fever of " << number << ".\n" << "Next,"
		 << " my " << adjective << " pet " << animal << " must have smelled the remains of the " << food << " on my homework,\n"
		 << "because my pet ate my homework." << endl << endl
		 << "I knew I should not have ordered that " << animal << " on eBay!" << endl << endl
		 << "I know you do not accept late homework but I am hoping you will make an exception in my case." << endl << endl
		 << "Sincerely," << endl
		 << firstName << endl;


}

