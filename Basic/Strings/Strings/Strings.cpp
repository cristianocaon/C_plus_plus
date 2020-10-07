// Strings.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::string;

int main()
{
	string name;
	cout << "Enter your name: ";
	cin >> name;

	string greeting = "Hello, " + name;

	if (name == "Kate")
	{
		greeting += ", I know you!";
	}

	cout << greeting << "\n";

	int l = greeting.length();
	cout << "\"" + greeting + "\" is " << l << " characters long." << "\n";

	string beginning = greeting.substr(greeting.find(' ') + 1);

	cout << beginning << '\n';

	if (beginning == name)
	{
		cout << "expected result." << "\n";
	}

	string word1;
	string word2;
	bool flag = true;
	int choice;

	while (flag)
	{
		cout << "\nEnter one word: ";
		cin >> word1;

		cout << "\nEnter another word: ";
		cin >> word2;

		if (word1.length() > word2.length())
		{
			cout << "\"" << word1 << "\"" << " is larger than " << "\"" << word2 << "\"\n";
		}
		else if (word1.length() < word2.length())
		{
			cout << "\"" << word1 << "\"" << " is smaller than " << "\"" << word2 << "\"\n";
		}
		else
		{
			cout << "\"" << word1 << "\"" << " is same length as " << "\"" << word2 << "\"\n";
		}

		cout << "\nDo you wanna compare again? (0 - no; 1 - yes): ";
		cin >> choice;

		if (choice == 0)
		{
			flag = false;
		}
	}
	return 0;
}
