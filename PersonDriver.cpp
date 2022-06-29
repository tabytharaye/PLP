#include <iostream>
#include "Person.h"
#include <string>

using namespace std;

int main()
{
	Person test;
	test.initialize("Test Name", 2000, 2022);
	cout << test.getName() << ", " << test.getBirthYear()<<", "<< test.getGradYear();
	return 0;
}