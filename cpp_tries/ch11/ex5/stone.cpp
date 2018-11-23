#include <iostream>
using std::cout;
using std::endl;
#include "stonewt.h"

void display(const Stonewt & st, int n);
int main()
{
	Stonewt incognito = 275; // uses constructor to initialize, state is LBS
	Stonewt wolfe(285.7); //same as Stonewt wolfe = 285.7; state is LBS
	Stonewt taft(21, 8); // state is STN
	
	cout << "The celebrity weighed ";
	cout << incognito << endl;
	cout << "The detective weighed ";
	cout << wolfe << endl;
	cout << "The President weighed ";
	cout << taft << endl;

	// Addition of Stonewts which will reset the state to LBS
	Stonewt gain(1, 1); 
	incognito = incognito + gain;
        cout << "After two weeks, the celebrity weighed ";
        cout << incognito << endl;

	// Addition of Stonewt and double which will not change the original state
	double dinner = 5.0;
	taft = dinner + taft;
	cout << "After dinner, the President weighed ";
	cout << taft << endl;

	// Substraction and multiplication
	Stonewt exercise(6, 3);
	double exercise_ratio = 1.2;
	Stonewt energy_assumption = 1.2 * exercise ;
	wolfe = wolfe - energy_assumption;
	cout << "After exercise for the past year, the detective weighed " << endl;
	display(wolfe, 2);
	return 0;
}

void display(const Stonewt & st, int n)
{
	for(int i = 0; i < n; ++i)
	{
		cout << "Wow! ";
		cout << st << endl;
	}
}
