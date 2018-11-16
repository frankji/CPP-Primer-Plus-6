#include <iostream>

long long factorial(unsigned num);
long long factorial_test(unsigned num);

int main()
{
	using namespace std;
	unsigned a;
	cout << "Enter a non-negative integer: ";
	cin >> a;
	cout << "The factorial of " << a << " calculated by a recursive function is: " << factorial(a) << "." << endl;
	cout << "The factorial of " << a << " is: " << factorial_test(a) << "." << endl;
	return 0;
}

long long factorial(unsigned num)
{
	long long result = 1LL;
	if(num > 1)
		return num*factorial(--num);
	else
		return 1LL;
}

long long factorial_test(unsigned num)
{
	long long result = 1LL;
	for(int i = 0; i < num; ++i)
	{
		result *= (i + 1);
	}
	return result;
}
