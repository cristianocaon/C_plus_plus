#include <iostream>
using std::cout;
using std::cin;

double add(double x, double y);

double add(double a, double b, double c);

bool test(bool x);

bool test(double x);

int main()
{
	double total = add(3.2, 5.5);
	cout << "\nTotal = " << total;

	total = add(2.0, 3.3, 5.0);
	cout << "\nTotal = " << total;

	double number;
	cout << "\nEnter a number: ";
	cin >> number;

	if (test(true))
	{
		cout << "\nIt is true!";
	}

	if (test((double)number))
	{
		cout << "\n" << number << " is positive!";
	}

	return 0;
}