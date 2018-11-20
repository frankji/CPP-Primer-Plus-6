#include <iostream>
#include <string>
#include <cstring>
#include "Person.h"
using namespace std;

Person::Person(const string & ln, const char * fn)
{
	lname = ln;
	strcpy(fname, fn);
}

void Person::Show() const //Remember the const!
{
	cout << fname << " " << lname << endl;
}

void Person::FormalShow() const
{
	cout << lname << " " << fname << endl;
}
