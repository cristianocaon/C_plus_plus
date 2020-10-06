#include <iostream>
using std::cout;
using std::cin;

int main() 
{
	// This is a comment in C++
	std::cout << "Hello" << "\n";
	std::cout << "8 * 8" << " is equal to " << 8 * 8 << "\n";

	int i = 42;

	std::cout << i << "\n";
	
	i = 300;
	std::cout << i * 2 << "\n";

	cout << "using std::cout\n";
	cout << "using std::cin\n";

	int number = 0;
	cout << "Enter a number: ";
	cin >> number;
	cout << "The number you entered is " << number << "\n";

	return 0;
}