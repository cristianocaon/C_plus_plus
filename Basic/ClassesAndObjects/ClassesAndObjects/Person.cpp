#include "Person.h"

Person::Person(std::string first, std::string last,
	int arbitrary) : firstName(first), lastName(last),
	arbitraryNumber(arbitrary)
{
}

std::string Person::GetName()
{
	return firstName + " " + lastName;
}