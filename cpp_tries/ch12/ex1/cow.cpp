#include "cow.h"
#include <iostream>
#include <cstring>

using namespace std;

Cow::Cow()
{
	//make name a null string
	name[0] = '\0';
	hobby = nullptr; //null pointer for pointer
	weight = 0;
}

Cow::Cow(const char * nm, const char * ho, double wt)
{
	strcpy(name, nm);
	//get the length of the string
	hobby = new char[strlen(ho)+1];
	strcpy(hobby, ho);
	weight = wt;
}

Cow::Cow(const Cow & c)
{
	strcpy(name, c.name);
	hobby = new char[strlen(c.hobby)+1];
	strcpy(hobby, c.hobby);
	weight = c.weight;
}

Cow::~Cow()
{
	delete [] hobby;
}

Cow & Cow::operator=(const Cow & c)
{
	//remember to free the memory
	delete [] hobby;
	strcpy(name, c.name);
        hobby = new char[strlen(c.hobby)+1];
        strcpy(hobby, c.hobby);
        weight = c.weight;
	return *this;
}

void Cow::ShowCow() const
{
	cout << "Name: " << name << endl;
	cout << "Hobby: " << hobby << endl;
	cout << "Weight: " << weight << endl;
}
