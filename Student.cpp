#include "Student.h"
#include <iostream>
#include <string>

using namespace std;

int Student::age()
{
	return getGradYear() - getBirthYear();
}