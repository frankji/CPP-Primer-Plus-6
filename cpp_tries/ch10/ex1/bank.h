#include <iostream>
#include <string>

class account
{
	private: //This can be omitted.
		std::string name;
		std::string acc;
		double balance;
	public:
		account(std::string the_name, std::string the_acc, double the_balance);
		void display();
		void deposit(double numin);
		void withdraw(double numout);
}; // Remember the ;
