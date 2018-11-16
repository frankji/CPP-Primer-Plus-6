#include <iostream>
#include <array>
const int ArSize = 100;

int main()
{
	using namespace std;
	array<long double, ArSize> factorial;
	factorial[0] = factorial[1] = 1L; //long type.
	for(int i = 2; i <= 100; ++i)
	{
		factorial[i] = factorial[i-1] * (long double)i;
	}
	cout << "100! = " << factorial[100];
	return 0;
}

