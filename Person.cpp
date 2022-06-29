#include "Person.h"
#include <iostream>
#include <string>

using namespace std;

void Person::initialize(string userName, int userBirthYear, int userGradYear)
{
	name = userName;
	birthyear = userBirthYear;
	gradYear = userGradYear;
}
string Person::getName()
{
	return name;
}
int Person::getBirthYear()
{
	return birthyear;
}
int Person::getGradYear()
{
	return gradYear;
}