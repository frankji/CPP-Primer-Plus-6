#include <iostream>

const int years = 3;
int main()
{
	using namespace std;
	int sum = 0;
	int * sum_by_year = new int[3];
	// C++ string literals are array of const char. Remember to add const in this case.	
	const char * months[12] = {"January", "Febuary", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
	int ** sales = new int*[years]; // This will be 2-D array. We need pointers to pointers. 
	for(int j = 0; j < 3; ++j)
	{	
		cout << "Year " << j + 1 << ":" << endl;
		sum_by_year[j] = 0; 
		sales[j] = new int[12]; //for each year, allocate memory of 12 integers for 12 months' data.
		for(int i = 0; i < 12; ++i)
		{
			cout << months[i] << "'s monthly sales : ";
			cin >> sales[j][i];
			sum_by_year[j] += sales[j][i];
		}
		sum += sum_by_year[j];
	}
	cout << "First year's worth is " << sum_by_year[0] << "." << endl;
	cout << "Second year's worth is " << sum_by_year[1] << "." << endl;
	cout << "Third year's worth is " << sum_by_year[2] << "." << endl;
	cout << "Total worth in three years is " << sum << "." << endl;
	// Remember to release the memory after using it.
	for(int j = 0; j < 3; ++j)
	{
		delete [] sales[j];
	}
	delete [] sum_by_year;
	delete [] sales;
	return 0;
}

