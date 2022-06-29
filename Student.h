#ifndef STUDENT_H
#define STUDENT_H
#include "Person.h"
#include <iostream>
using namespace std;

class Student : public Person
{
public:
	int age(void);
};
#endif
