#include <iostream>

int main()
{
	using namespace std;
	int start;
	int end;
	int sum = 0;
	cout << "Enter the start: " << endl;
	cin >> start;
	cout << "Enter the end: " << endl;
	cin >> end;
	for(int i = start; i <= end; ++i) // remember to declare the type for i!
	{
		sum += i;
	}
	cout << "Sum from " << start << " to " << end << " is " << sum << endl;
	return 0;

}
