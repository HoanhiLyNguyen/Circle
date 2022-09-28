// Courtney Nguyen
// Date: 8/26
// Program Title: Circle
// Program Description: Calculates and prints the radius, area, and circumference of a circle to the screen.

#include <iostream>
#include <string>


using namespace std;

// Named constants
const double PI = 3.14;

int main()
{
	// Variable declaration
	double radius;
	double area;
	double circumference;

	//Program title and description for the user
	cout << "Program Title: Circle" << endl;
	cout << "Program Description: Calculates and prints the radius, area, and circumference of a circle to the screen." << endl;

	// User input
	cout << "What is the radius in inches? " << endl;
	cin >> radius;

	// Calculations
	area = PI * (radius * radius);
	circumference = 2 * PI * radius;

	// Output to the screen
	cout << "The radius is " << radius << " inches, the area is " << area << " inches squared, and the circumference is " << circumference << " inches. " << endl;

	return 0;
}