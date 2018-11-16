#include <iostream>
#include "golf.h"

void showgolf(const golf & g)
{
	using namespace std;
	cout << "Name: " << g.fullname << endl;
	cout << "Handicap: " << g.handicap << endl;
}
