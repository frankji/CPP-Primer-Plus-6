#include "port.h"

int main()
{
	Port * map;
	Port p1("Gallo", "twany", 20);
	p1 += 5;
	p1 -= 3;
	cout << p1;
	p1.Show();
	VintagePort p2("Donzelinho", "white", 15, "The Noble", 10);
	p2 += 4;
	p1 -= 5;
	map = &p2;
	// "cout << *map" will invoke Port's function
	cout << p2;
	map->Show();
	return 0;
}

