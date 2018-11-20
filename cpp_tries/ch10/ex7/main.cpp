#include <iostream>
#include "Plorg.h"

int main()
{
	using namespace std;
	char name[ChSize];
	int ci = 0;
	Plorg plorg;
	cout << "Default: " << endl;
	plorg.showPlorg();
	cout << "Enter the new CI for this obj: ";
	(cin >> ci).get();
	plorg.setCI(ci);
	plorg.showPlorg();
	cout << "Enter the name for a new obj: ";
	cin.get(name, ChSize);
	while(cin.get() != '\n')
		continue;
	cout << "Enter the CI for the a obj: ";
	cin >> ci;
	Plorg plorg1(name, ci);
	plorg1.showPlorg();
	return 0;
}
