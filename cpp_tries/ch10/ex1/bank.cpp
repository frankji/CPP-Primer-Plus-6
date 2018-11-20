#include <iostream>
#include <string>
#include "bank.h"

//Remember the namespace;
account::account(std::string the_name, std::string the_acc, double the_balance)
{
	name = the_name;
	acc = the_acc;
	balance = the_balance;
}


void account::display()
{
	using namespace std;
	cout << "Dear " << name << ": " << endl;
	cout << "Balance of account " << acc << ": " << balance << "." << endl; 
}

void account::deposit(double numin)
{
	using namespace std;
	balance += numin;
	cout << "Deposit successful!" << endl;
	cout << "Balance of account " << acc << ": " << balance << "." << endl;
}


void account::withdraw(double numout)
{
	using namespace std;
        balance -= numout;
        cout << "Withdraw successful!" << endl;
        cout << "Balance of account " << acc << ": " << balance << "." << endl;
}


