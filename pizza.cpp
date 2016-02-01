/*
Antony Tejakusuma
CIS 22A M/W 9:30-11:20am
*/

#include <iostream>
#include <iomanip>

using namespace std;

/**

    calculates the tax at 8.5% and adds it to the price of the pizza


    @param pizza_price the price of the pizza
*/
void add_tax(double& pizza_price);

/**
    calls add_tax, calculate_tip and display_price
    to calculate and display the final price

    @param pizza_price the price of the pizza as entered by the user
  
*/
void calculate_bill(double& pizza_price);

/**
   	calculates the tip at 15% and adds it to the current price of the pizza

    @param pizza_price the current price of the pizza
  
*/
void calculate_tip(double& pizza_price);

/**
    prints the price in the form of "With taxes and tip,
    your total comes to $x.xx" to the console

    @param pizza_price the final price of the pizza
  
*/
void format_price(double pizza_price);


int main(){
    cout << "Welcome to Mama Domino's Pizzaria!\n";
    cout << "\nEnter the price of the pizza: ";
    double price;
    cin >> price;
    calculate_bill(price);
    
}

void add_tax(double& pizza_price){
    pizza_price *= 1.085;
   
}

void calculate_bill(double& pizza_price){
	add_tax(pizza_price);
	calculate_tip(pizza_price);
	format_price(pizza_price);

}

void calculate_tip(double& pizza_price){
    pizza_price *= 1.15;
   
}

void format_price(double pizza_price){
    cout << "With taxes and tip, your total comes to $" << fixed << setprecision(2) << pizza_price << endl;
   
}

