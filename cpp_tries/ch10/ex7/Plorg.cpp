#include <iostream>
#include <cstring>
#include "Plorg.h"

Plorg::Plorg(const char * fullname, int ci)
{
	strcpy(name, fullname);
	name[ChSize-1] = '\0';
	CI = ci;
}

void Plorg::setCI(int ci)
{
	CI = ci;
}

void Plorg::showPlorg() const
{
	std::cout << "Name: " << name << "; CI: " << CI << std::endl;
}
