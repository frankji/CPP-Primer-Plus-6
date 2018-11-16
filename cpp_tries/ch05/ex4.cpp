#include <iostream>

const double r1 = 0.1; // Daphne's interest rate.
const double r2 = 0.05; // Cleo's interest rate. 
int main()
{
	using namespace std;
	double daphne, cleo;
	daphne = cleo = 100;
	int years = 0;
	while(daphne >= cleo)
	{
		daphne += 100 * r1;
		cleo += cleo * r2;
		++years;
	}
	cout << "Cleo's investment will be " << cleo << " which will surpass Daphne's (" << daphne << ") after " << years << " years." << endl;
	return 0;
}
