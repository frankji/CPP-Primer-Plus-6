#include <iostream>

using namespace std;
const int Max = 5;

double * fill_array(double * arr, int limit);
void show_array(const double * start, const double * end);
void revalue(double r, double * start, double * end);

int main()
{
	double properties[Max+1];
	double * end_arr = fill_array(properties, Max);
	show_array(properties, end_arr);
	if(end_arr - properties > 0)
	{
		cout << "Enter revaluation factor: ";
		double factor;
		while(!(cin >> factor))
		{
			cin.clear();
			while(cin.get() != '\n')
				continue;
			cout << "Bad input; Please enter a number: ";
		}
		revalue(factor, properties, end_arr);
		show_array(properties, end_arr);
	}
	cout << "Done.\n";
	cin.get();
	cin.get();
	return 0;
}

double * fill_array(double * arr, int limit)
{
	double temp;
	int i;
	int counts = 0;
	for(i = 0; i < limit; i++)
	{
		cout << "Enter value #" << (i + 1) << ": ";
		cin >> temp;
		if(!cin)
		{
			cin.clear();
			while(cin.get() != '\n')
				continue;
			cout << "Bad input; input process terminated.\n";
			break;
		}
		else if(temp < 0)
			break;
		arr[i] = temp;
		counts++;
	};
	return &arr[counts];
}

void show_array(const double * arr, const double * end)
{
	int n = end - arr;
	for(int i = 0; i < n; ++i)
	{
		cout << "Property #" << i + 1 << ": $";
		cout << arr[i] << endl;
	}
}

void revalue(double r, double * arr, double * end)
{
	int n = end - arr;
	for(int i = 0; i < n; ++i)
		arr[i] *= r;
}
