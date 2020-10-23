#include <iostream>

#include "Person.h"

Person::Person(std::string first, std::string last,
	int arbitrary) : firstName(first), lastName(last),
	arbitraryNumber(arbitrary)
{
	std::cout << "constructing " << Person::GetName() << std::endl;
}

Person::Person() : arbitraryNumber(0)
{
	std::cout << "constructing " << Person::GetName() << std::endl;
}

Person::~Person()
{
	std::cout << "destructing " << Person::GetName() << std::endl;
}

std::string Person::GetName()
{
	return firstName + " " + lastName;
}