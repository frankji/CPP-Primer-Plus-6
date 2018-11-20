#include <iostream>
#include <string>
#include "bank.h"

int main()
{
	using namespace std;
	double dep, wit;
	account ted("Ted Mosby", "ny12345", 3000.0);
	ted.display();
	cout << "Enter the amount to deposit: ";
	cin >> dep;
	ted.deposit(dep);
	cout << "Enter the amount to withdraw: ";
	cin >> wit;
	ted.withdraw(wit);
	return 0;
}
