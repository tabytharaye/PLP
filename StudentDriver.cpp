#include <iostream>
#include "Student.h"
#include <string>
using namespace std;

int main()
{
	
	Student test;
	test.initialize("Test Name", 2000, 2022);
	cout << "Name: "<<test.getName()<<endl;
	cout << "Year of birth: " << test.getBirthYear() << endl;
	cout << "Graduation year: " << test.getGradYear() << endl;
	cout << "Age at time of graduation will be..." << test.age() << endl;
	return 0;
}