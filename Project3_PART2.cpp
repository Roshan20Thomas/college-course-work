#include <iostream>
#include <iomanip>

using namespace std;

double mean(double num1, double num2, double num3, double num4)
{
	double Mean = (num1 + num2 + num3 + num4) / 4;

	return Mean;
}

double standardDeviation(double num1, double num2, double num3, double num4)
{
	double Mean = (num1 + num2 + num3 + num4) / 4;

	double deviation = sqrt(pow(num1 - Mean, 2) + pow(num2 - Mean, 2) +
		pow(num3 - Mean, 2) + pow(num4 - Mean, 2)) / sqrt(4);

	return deviation;
}


int main()
{
	cout << mean(1, 2, 3, 4) << endl << endl;

	cout << fixed << setprecision(2) << standardDeviation(1, 2, 3, 4);

	return 0;
}