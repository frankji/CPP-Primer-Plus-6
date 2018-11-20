#include <iostream>
#include "sales.h"

using namespace std;

int main()
{
	using namespace std;
	double sales[4] = {3.0, 4.0, 5.0, 6.0};
	double init[4] = {0.0, 0.0, 0.0, 0.0}; 
	Sales s1(sales);
	Sales s2(init);
	cout << "First sale data: " << endl;
	s1.showSales();
	s2.setSales();
	cout << "Second sale data: " << endl;
	s2.showSales();
	return 0;
}
