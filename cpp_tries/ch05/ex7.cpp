#include <iostream>
#include <string>

struct car
{
	std::string make; //use std::string if you do not want to claim the name space here.
	int year;
}; //';' after struct.
int main()
{
	using namespace std;
	int ncars;
	cout << "How many cars do you wish to catalog? ";
	cin >> ncars;
	cin.get();
	car * info = new car[ncars];
	for(int i = 0; i < ncars; ++i)
	{
		cout << "Car #" << i + 1 << ":" << endl;
		cout << "Please enter the make: ";
		getline(cin, info[i].make);
		cout << "Please enter the year made: ";
		cin >> info[i].year;
		cin.get(); //Release '\n' out of the input queue.
	}
	cout << "Here is your collection: " << endl;
	for(int i = 0; i < ncars; ++i)
	{
		cout << info[i].year << " " << info[i].make << endl;
	}
	delete [] info;
	return 0;
}
