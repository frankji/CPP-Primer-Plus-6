#include <iostream>

double harmony(double x, double y);
int main()
{
	using namespace std;
	double a, b, mean;
	int flag1, flag2;
	do
	{
		flag1 = flag2 = 0;
		cout << "Enter a pair of numbers (not a pair of 0): ";
		if(cin >> a)
		{
			flag1 = 1;
			if(cin >> b)
			{
				if(a != 0 || b != 0)
					flag2 = 1;
				else
				{
					cout << "Bye!" << endl;
					break;
				}
			}
			else
				cin.clear();
		}
		else
		{
		        cin.clear();
			if(cin >> b)
				flag2 = 1;
		}
		if(flag1 * flag2 == 1)
		{
			mean = harmony(a, b);
			cout << "The harmony mean of " << a << " and " << b << " is " << mean << "." << endl;
		}
		else
			continue;
	}
	while(cin.good());
	return 0;
}

double harmony(double x, double y)
{
	return 2.0 * x * y / (x + y);
}
