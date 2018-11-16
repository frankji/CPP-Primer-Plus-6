#include <iostream>
#include "golf.h"
#include <cstring>

void setgolf(golf & g, const char * name, int hc)
{
	using namespace std;
	strcpy(g.fullname, name);
	g.handicap = hc;
}


