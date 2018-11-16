#include <iostream>

int main()
{
	using namespace std;
	// C++ string literals are array of const char. Remember to add const in this case.	
	const char * months[12] = {"January", "Febuary", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
	int * sales = new int[12];
	int sum = 0;
	for(int i = 0; i < 12; ++i)
	{
		cout << months[i] << "'s monthly sales : ";
		cin >> sales[i];
		sum += sales[i];
	}
	cout << "The year's worth is " << sum << "." << endl;
	return 0;
	delete [] sales;
}

