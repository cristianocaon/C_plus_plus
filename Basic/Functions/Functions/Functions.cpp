// Functions.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using std::cout;

double add(double x, double y)
{
    return x + y;
}

int main()
{
    int total = add(3, 4);
    cout << "3 + 4 = " << total;

    double another = add(1.2, 3.4);

    cout << "\n1.2 + 3.4 = " << another;

    return 0;
}

