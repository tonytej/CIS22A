/*

Antony Tejakusuma
CIS 22A M/W 9:30am - 11:20am

*/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {

	double chipTotal, mintTotal, peanutTotal, oatmealTotal;
	int chocolateChip, chocolateMint, peanutButter, oatmealRaisin;
	const double PRICE_CHOC_CHIP = 1.95,
				 PRICE_CHOC_MINT = 2.15,
				 PRICE_PEANUT_BUTTER = 2.05,
				 PRICE_OATMEAL_RAISIN = 1.85;
	double total;

	cout << "Welcome to Cookie Magic, where every bite of cookie is magical!" << endl;
	cout << "Allow me to assist you with your order!" << endl;

	cout << "\nWe sell the following flavors:\n";
	cout << "Chocolate Chip Cookies -- $1.95 each" << endl;
	cout << "Chocolate Mint Cookies -- $2.15 each" << endl;
	cout << "Peanut Butter Cookies -- $2.05 each" << endl;
	cout << "Oatmeal Raisin Cookies -- $1.85 each" << endl << endl;

	cout << "Please enter the number of chocolate chip cookies you would like to purchase: ";
	cin >> chocolateChip;
	cout << "Please enter the number of chocolate mint cookies you would like to purchase: ";
	cin >> chocolateMint;
	cout << "Please enter the number of peanut butter cookies you would like to purchase: ";
	cin >> peanutButter;
	cout << "Please enter the number of oatmeal raisin cookies you would like to purchase: ";
	cin >> oatmealRaisin;

	chipTotal = PRICE_CHOC_CHIP * chocolateChip;
	mintTotal = PRICE_CHOC_MINT * chocolateMint;
	peanutTotal = PRICE_PEANUT_BUTTER * peanutButter;
	oatmealTotal = PRICE_OATMEAL_RAISIN * oatmealRaisin;

	cout << "\nYou Ordered the Following:\n";
	cout << fixed << setprecision(2);
	cout << "Chocolate Chip Cookies:\t" << chocolateChip << " @ " << PRICE_CHOC_CHIP << " each...\t$" << chipTotal << endl;
	cout << "Chocolate Mint Cookies:\t" << chocolateMint << " @ " << PRICE_CHOC_MINT << " each...\t$" << mintTotal << endl;
	cout << "Peanut Butter Cookies:\t" << peanutButter << " @ " << PRICE_PEANUT_BUTTER << " each...\t$" << peanutTotal << endl;
	cout << "Oatmeal Raisin Cookies:\t" << oatmealRaisin << " @ " << PRICE_OATMEAL_RAISIN << " each...\t$" << oatmealTotal << endl;

	total = chipTotal + mintTotal + peanutTotal + oatmealTotal;

	cout << "\nTotal: \t\t\t\t\t\t$" << total << endl << endl;

	cout << "Thank you for your order! Please come again!" << endl;




}