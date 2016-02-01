/*
Antony Tejakusuma
CIS 22A 9:30am-11:20am
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double weight;
    string planet;
    const double MERCURY = 0.38,
    			 VENUS = 0.91,
    			 MARS = 0.38,
    			 JUPITER = 2.54,
    			 SATURN = 1.08,
    			 URANUS = 0.91,
    			 NEPTUNE = 1.19,
    			 PLUTO = 0.06;

    cout << "Welcome! This program can calculate how much you weigh on any of the planets in our solar system!" << endl;
    cout << "First, please enter your weight in pounds: ";
    cin >> weight;
    cout << "Next, select from one of the following planets:\n"
    	 << "\tMercury\n"
    	 << "\tVenus\n"
    	 << "\tMars\n"
    	 << "\tJupiter\n"
    	 << "\tSaturn\n"
    	 << "\tUranus\n"
    	 << "\tNeptune\n"
    	 << "\tPluto\n";
    cout << "Please enter the name of a planet: ";
    cin >> planet;

    if (planet == "Mercury" || planet == "mercury"){
    	weight *= MERCURY;
    } else if (planet == "Venus" || planet == "venus"){
    	weight *= VENUS;
    } else if (planet == "Mars" || planet == "mars"){
    	weight *= MARS;
    } else if (planet == "Jupiter" || planet == "jupiter"){
    	weight *= JUPITER;
    } else if (planet == "Saturn" || planet == "saturn"){
    	weight *= SATURN;
    } else if (planet == "Uranus" || planet == "uranus"){
    	weight *= URANUS;
    } else if (planet == "Neptune" || planet == "neptune"){
    	weight *= NEPTUNE;
    } else if (planet == "Pluto" || planet == "pluto"){
    	weight *= PLUTO;
    } else {
    	cout << "You entered an invalid name for a planet. Please re-run the program to try again." << endl;
    	return 1;
    }

    cout << fixed << setprecision(1) << "You weigh " << weight << " pounds on " << planet << "." << endl;

    return 0;

}
