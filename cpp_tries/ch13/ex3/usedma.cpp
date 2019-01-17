#include <iostream>
#include "dma.h"

int main()
{
	using std::cout;
	using std::endl;
	abcDMA * abcmaps[3];
	baseDMA shirt("Protabelly", 8);
	lacksDMA balloon("red", "Blimpo", 4);
	hasDMA map("Mercator", "Buffalo Keys", 5);
	abcDMA * abcmap;
	cout << "Displaying baseDMA object:\n";
	abcmaps[0] = &shirt;
	abcmaps[0]->View();
	cout << "Displaying lacksDMA object:\n";
	abcmaps[1] = &balloon;
	abcmaps[1]->View();
	cout << "Displaying hasDMA object:\n";
	abcmaps[2] = &map;
	abcmaps[2]->View();
	return 0;
}


