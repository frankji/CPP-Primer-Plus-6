#include <iostream>
#include "cow.h"

using namespace std;

int main()
{
	// Create cow 1, a null cow
	Cow cow1;
	// Create cow 2
	Cow cow2 = Cow("cow2", "dancing", 10);
	// Create a temp cow
	Cow cowt = Cow("cow3", "singing", 12);
	// Create cow with temp
	Cow cow3 = Cow(cowt);
	// Create cow4 which is a copy of cow2
	Cow cow4 = cow2;
	// Show cows which are not null;
	cow2.ShowCow();
	cow3.ShowCow();
	cow4.ShowCow();
	return 0;
}
