#include <iostream>
#include <cstring>
#include "golf.h"

using namespace std;

static const int ChSize = 40; 

golf::golf(const char * name, int hc)
{
	strcpy(fullname, name);
	handicap = hc;
}

void golf::setgolf() // You need to return the object
{
        using namespace std;
        char tmp_fullname[ChSize];
	int tmp_handicap;
        cout << "Enter the name: ";
        cin.get(tmp_fullname, ChSize).get();
	cout << "Enter the handicap: ";
	(cin >> tmp_handicap).get();
	*this = golf(tmp_fullname, tmp_handicap); //Assign the temporary obj to *this
	
}
