#include <iostream>

double tax(double income);
int main()
{
	using namespace std;
	double income = 0;
	cout << "Enter the income: ";
	cin >> income;
	while(cin.good() && income > 0)
	{
		cout << "Tax of " << income << ": " << tax(income) << endl;
		cout << "Enter the income: ";
		cin >> income;	
	}
	return 0;
}

double tax(double income)
{
	double outcome = 0;
	if(income <= 5000)
	{
		outcome = 0;
	}
	else if(income > 5000 && income <= 15000)
	{
		outcome = (income - 5000) * 0.1;
	}
	else if(income > 15000 && income <= 35000)
	{
		outcome = 1000 + (income - 15000) * 0.15;
	}
	else if(income > 35000)
	{
		outcome = 4000 + (income - 35000) * 0.2;
	}
	else{
	
	}
	return outcome;
}
