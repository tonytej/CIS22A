#include <iostream>

using namespace std;

int main(){

	int cats = 12;
	int dogs = 14;
	cats = dogs;
	dogs = cats + 2;
	int total = cats + dogs;
	cout << cats << dogs << total;
 
}