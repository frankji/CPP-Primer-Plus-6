#include <iostream>
#include <cstring>
#include "golf.h"

extern int ChSize; // We are gonna use this variable initialized in main.

void handicap(golf & g, int hc)
{
	using namespace std;
	g.handicap = hc;
	cout << "Handicap of " << g.fullname << " was reset to " << hc << "." << endl;
}

void setgolf(golf & g, const char * name, int hc)
{
	using namespace std;
	strcpy(g.fullname, name);
	g.handicap = hc;
}

int setgolf(golf & g)
{
	using namespace std;
	char tmp_fullname[ChSize];
	cout << "Enter the name: ";
	cin.get(tmp_fullname, ChSize).get();
	if(strlen(tmp_fullname) == 0)
		return 0;
	else
	{
		strcpy(g.fullname, tmp_fullname);
		cout << "Enter the handicap: ";
		(cin >> g.handicap).get();
		return 1;
	}
}

void showgolf(const golf & g)
{
	using namespace std;
	cout << "Name: " << g.fullname << endl;
	cout << "Handicap: " << g.handicap << endl;
}
