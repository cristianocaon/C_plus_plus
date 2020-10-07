// Overloading.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Header.h"

using std::cout;
using std::cin;

double add(double x, double y)
{
	return x + y;
}

double add(double a, double b, double c)
{
	// Alternatively, return add(add(a + b), c);
	return a + b + c;
}

bool test(bool x)
{
	return x;
}

bool test(double x)
{
	return x > 0;
}


