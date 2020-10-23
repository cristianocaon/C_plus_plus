#include "Person.h"

std::string Person::GetName()
{
	return firstName + " " + lastName;
}