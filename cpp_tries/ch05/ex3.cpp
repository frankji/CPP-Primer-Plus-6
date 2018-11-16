#include <iostream>

int main()
{
	using namespace std;
	double ch, sum = 0;
	cout << "Enter the number: ";
	cin >> ch;
	while(ch != 0)
	{
		sum += ch;
		cout << "Cumulative sum is " << sum << endl << "Enter the number: ";
		cin >> ch;
	}
	cout << "End" << endl;
	return 0;
}
