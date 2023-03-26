#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

double calculateCircumference(double diameter)
{
	double circumference = 0;
	double PI = 3.14;

	circumference = PI * diameter;

	return circumference;
}

double calculateSurfaceArea(double radius)
{
	double PI = 3.14;
	double surfaceArea = 0;

	surfaceArea = 4 * PI * pow(radius, 2);

	return surfaceArea;

}


int main()
{
	// PART 1 CIRCUMFERENCE

	double Earth_diameter;
	long long sun_diameter;

	cout << "Enter the earth's diameter: ";
	cin >> Earth_diameter;
	cout << endl << endl;

	cout << "The circumference of the earth is " 
		 << calculateCircumference(Earth_diameter) << " miles." << endl << endl;

	cout << "Enter the sun's diameter: ";
	cin >> sun_diameter;
	cout << endl << endl;

	cout << "The circumference of the sun is " << fixed << setprecision(2)
		<< calculateCircumference(sun_diameter) << " miles." << endl << endl;


	//PART 1 - CIRCUMFERENCE (a)

	int hours = calculateCircumference(Earth_diameter) / 1000;

	cout << "The number of hours in day is "
		 << hours - 1 << endl << endl;



	//PART 1 - PLANET SURFACE AREA

	double Earth_radius;
	long long sun_radius;

	cout << "Enter the earth's radius: ";
	cin >> Earth_radius;
	cout << endl << endl;

	cout << "The surface area of earth is "
		<< calculateSurfaceArea(Earth_radius) << " sq. miles." << endl << endl;

	cout << "Enter the sun's radius: ";
	cin >> sun_radius;
	cout << endl << endl;

	cout << "The surface area of the sun is " << fixed << setprecision(2)
		<< calculateSurfaceArea(sun_radius) << " sq. miles." << endl << endl;

	// PART 1 surface area (a)

	int surfaceAreaJapan = 150000;
	cout << "Number of copies of Japan needed to cover our planet is "
		<< calculateSurfaceArea(Earth_radius);

}