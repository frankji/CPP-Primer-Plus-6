#include <iostream>
#include <array>

const int ArSize = 10;
int main()
{
	using namespace std;
	array<double, ArSize> donations;
	double avg = 0;
	int n, above;
	n = above = 0;
	cout << "Enter up to 10 numbers: " << endl;
	while(cin >> donations[n] && n < 10)
	{
		avg += donations[n];
		n++;
	}
	avg /= n;

	for(int i = 0; i < n; ++i)
	{
		if(donations[i] > avg)
		{
			above += 1;
		}
	}
	cout << "The average of " << n << " numbers is " << avg << "." << endl;
	cout << "There are " << above << " numbers are above the average." << endl;
}

