/*
Antony Tejakusuma
CIS 22A M/W 9:30-11:20am
*/

#include <iostream>

using namespace std;

class Rectangle
	{
	public:
	double length;
	double width;
	Rectangle(double l, double w);
	};

Rectangle::Rectangle(double l, double w)
	{
	length = l;
	width = w;
	}

int main (){
	int l, w;
	cout << "L: ";
	cin >> l;
	cout << "W: ";
	cin >> w;

	Rectangle box(l, w);
	cout << "Box Length: " << box.length << endl;
	cout << "Box Width: " << box.width << endl;

}

