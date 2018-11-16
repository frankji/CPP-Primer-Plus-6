#include <iostream>

using namespace std;

const int Seasons = 4;
const char Snames[4][20] = {"Spring", "Summer", "Fall", "Winter"};


void fill(double ** pa);
void show(double * pa);

int main()
{
	double * expenses = new double[Seasons];
	fill(&expenses);
	show(expenses);
	delete [] expenses;
	return 0;
}

void fill(double ** pa)
{
	for(int i = 0; i < Seasons; ++i)
	{
		cout << "Enter " << Snames[i] << " expenses: ";
		cin >> (*pa)[i]; //Dereferencing once will back to the pointer (array), hooray!
	}
}

void show(double * da)
{
	double total = 0.0;
	cout << "\nEXPENSES\n";
	for(int i = 0; i < Seasons; i++)
	{
		cout << Snames[i] << ": $" << da[i] << endl;
		total += da[i];
	}
	cout << "Total Expense: $" << total << endl;
}
