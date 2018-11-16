#include <iostream>
#include "sales.h"

// code the functions in the same namespace again to ensure the right reference for using that namespace.
namespace SALES
{ 
	void setSales(Sales & s, const double ar[], int n = QUARTERS)
	{
		using namespace std;
		double average, max, min;
		// Remember to give every value to the array (it is not a pointer).
		s.sales[0] = average = max = min = ar[0];
		for(int i = 1; i < QUARTERS; ++i)
		{
			if(i < n){
				s.sales[i] = ar[i];
				if(ar[i] > max)
					max = ar[i];
				if(ar[i] < min)
					min = ar[i];
				average += ar[i];
			}
			else
				s.sales[i] = 0;
			
		}
		average /= n;
		s.average = average;
		s.max = max;
		s.min = min;
	}

	void setSales(Sales & s)
	{
		using namespace std;
		cout << "Enter 4 numbers separated by space: ";
		for(int i = 0; i < QUARTERS; ++i)
		{
			if(!(cin >> s.sales[i]))
			{
				cin.clear();
				i--; 
			}
		}
		double average, max, min;
        	average = max = min = s.sales[0];
        	for(int i = 1; i < QUARTERS; ++i)
        	{       
                	if(s.sales[i] > max)
                        	max = s.sales[i];
                	if(s.sales[i] < min)
                        	min = s.sales[i];
                	average += s.sales[i];
        	}
        	average /= QUARTERS;
        	s.average = average;
        	s.max = max;
        	s.min = min;
	}

	void showSales(const Sales & s)
	{
		using namespace std;
		cout << "Sales for 4 quaters:";
		for(int i = 0; i < QUARTERS; ++i)
			cout << " " << s.sales[i];
		cout << endl;
		cout << "Average: " << s.average << endl;
		cout << "Max: " << s.max << endl;
		cout << "Min: " << s.min << endl;
	}
}
