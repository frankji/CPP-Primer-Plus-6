#include <iostream>
#include <cstring>
#include "golf.h"
extern int ChSize; // We are gonna use this variable initialized in main.

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


