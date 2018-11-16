#include <iostream>

using namespace std;

const int Seasons = 4;
const char Snames[4][20] = {"Spring", "Summer", "Fall", "Winter"};

struct Arr
{
	double arr[Seasons];
};
void fill(Arr * pa);
void show(Arr  pa);

int main()
{
	Arr expenses;
	fill(&expenses);
	show(expenses);
	return 0;
}

void fill(Arr * pa)
{
	for(int i = 0; i < Seasons; ++i)
	{
		cout << "Enter " << Snames[i] << " expenses: ";
		cin >> (*pa).arr[i];
	}
}

void show(Arr da)
{
	double total = 0.0;
	cout << "\nEXPENSES\n";
	for(int i = 0; i < Seasons; i++)
	{
		cout << Snames[i] << ": $" << da.arr[i] << endl;
		total += da.arr[i];
	}
	cout << "Total Expense: $" << total << endl;
}
