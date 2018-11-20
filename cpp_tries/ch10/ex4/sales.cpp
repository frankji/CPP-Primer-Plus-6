#include <iostream>
#include "sales.h"

Sales::Sales(const double * ar, int n)
{
	using namespace std;
	// Remember to give every value to the array (it is not a pointer).
	sales[0] = average = max = min = ar[0];
	for(int i = 1; i < QUARTERS; ++i)
	{
		if(i < n){
			sales[i] = ar[i];
			if(ar[i] > max)
				max = ar[i];
			if(ar[i] < min)
				min = ar[i];
			average += ar[i];
		}
		else
			sales[i] = 0;
		
	}
	average /= n;
}

void Sales::setSales()
{
	using namespace std;
	double SALES[QUARTERS];
	cout << "Enter 4 numbers separated by space: ";
	for(int i = 0; i < QUARTERS; ++i)
	{
		if(!(cin >> SALES[i]))
		{
			cin.clear();
			i--; 
		}
	}
	*this = Sales(SALES);
}

void Sales::showSales() const
{
	using namespace std;
	cout << "Sales for 4 quaters:";
	for(int i = 0; i < QUARTERS; ++i)
		cout << " " << sales[i];
	cout << endl;
	cout << "Average: " << average << endl;
	cout << "Max: " << max << endl;
	cout << "Min: " << min << endl;
}

