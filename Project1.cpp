#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <fstream>

using namespace std;

int main()
{
	// Part 1 - distances
	double a2, a1, b1, b2, diff1, diff2, dPythagorean, dCityBlock;

	cout << "Pythagorean distance and Manhattan distance calculator\n\n";

	cout << "Enter the coordinates of Point1\nx1: ";
	cin >> a1;
	cout << endl;
	cout << "y1: "; cin >> b1;
	cout << endl;

	cout << "Enter the coordinates of Point2\nx2: ";
	cin >> a2;
	cout << endl;
	cout << "y2: "; cin >> b2;
	cout << endl;

	diff1 = a2 - a1;
	diff2 = b2 - b1;

	dPythagorean = sqrt(pow(diff1, 2) + pow(diff2, 2));

	dCityBlock = diff1 + diff2;

	cout << "The pythagorean distance between (" << a1 << " , " << b1 << ")";
	cout << " and (" << a2 << " , " << b2 << ") is " << setprecision(3) << dPythagorean << endl << endl;

	cout << "The Manhattan distance between (" << a1 << " , " << b1 << ")";
	cout << " and (" << a2 << " , " << b2 << ") is " << dCityBlock << endl << endl;

	//Optional Extra
	double latitude1, latitude2, longitude1, longitude2, distance, s2, ccs2;
	const int radius = 6371;

	cout << "Enter the latitude of starting location: ";
	cin >> latitude1;
	cout << "Enter the longitude of starting location: ";
	cin >> longitude1;
	cout << "Enter the latitude of destination: ";
	cin >> latitude2;
	cout << "Enter the longitude of destination: ";
	cin >> longitude2;

	latitude1 *= 0.017; //converting degrees into radian measure
	latitude2 *= 0.017;
	longitude1 *= 0.017;
	longitude2 *= 0.017;

	// using haversine formula to find the distance between 2 points on the planet
	s2 = pow(sin((latitude2-latitude2)/2), 2);
	ccs2 = cos(latitude1) * cos(latitude2) * pow(sin((longitude2 - longitude1) / 2), 2);

	distance = 2 * radius * asin(sqrt(s2+ccs2));

	cout << "The distance between the 2 given points is " << distance << " miles.\n";

	// Part 2 - lengths
	cout << "Enter a tweet" << endl;
	string tweet;
	cin.ignore();
	getline(cin, tweet);
	cout << tweet << endl;
	cout << tweet.length();

	ofstream outputData;
	outputData.open("InputFile.txt");
	outputData << tweet << endl << tweet.length();
	outputData.close();
}