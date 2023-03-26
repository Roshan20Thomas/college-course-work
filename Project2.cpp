#include <iostream>

using namespace std;

int main()
{
	int num1, num2;
	char ArithmeticOperator;

	ArithmeticOperator = '+', '-', '/', '*', '%';

	cout << "Enter a number, operator, and a second number (separated by spaces)\n";
	cin >> num1 >> ArithmeticOperator >> num2;

	switch (ArithmeticOperator)
	{
	case '+':
		cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
		break;

	case '-':
		cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
		break;

	case '/':
		cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
		break;

	case '*':
		cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
		break;

	case '%':
		cout << num1 << " % " << num2 << " = " << num1 % num2 << endl;
		break;
	}
}