#include "Tweeter.h"
#include <iostream>

using std::string;
using std::cout;

Tweeter::Tweeter(string first,
	string last,
	int arbitrary,
	string handle) : Person(first, last, arbitrary), twitterHandle(handle)
{
	cout << "constructing tweeter " << twitterHandle << std::endl;
}

Tweeter::~Tweeter()
{
	cout << "destructing tweeter " << twitterHandle << std::endl;
}