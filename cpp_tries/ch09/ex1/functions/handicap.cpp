#include <iostream>
#include "golf.h"

void handicap(golf & g, int hc)
{
	using namespace std;
	g.handicap = hc;
	cout << "Handicap of " << g.fullname << " was reset to " << hc << "." << endl;
}
