#ifndef PERSON_H
#define PERSON_H
#include <string>
#include <iostream>
using namespace std;

class Person
{
private:
	string name;
	int birthyear;
	int gradYear;

public:
	void initialize(string userName, int userBirthYear, int userGradYear);
	string getName(void);
	int getBirthYear(void);
	int getGradYear(void);
};
#endif