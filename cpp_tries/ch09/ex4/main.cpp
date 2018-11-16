#include <iostream>
#include "sales.h"
using namespace SALES;

int main()
{
	using namespace std;
	double sales[4] = {3.0, 4.0, 5.0, 6.0};
	Sales s1, s2;
	setSales(s1, sales, QUARTERS);
	cout << "First sale data: " << endl;
	showSales(s1);
	setSales(s2);
	cout << "Second sale data: " << endl;
	showSales(s2);
	return 0;
}
