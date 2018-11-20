#include <iostream>
#include <cctype>
#include "List.h"

int main()
{
	using namespace std;
	List ls;
	char ch;
	Item po;
	double total = 0.0;
	cout << "Please enter A to add an account, \n"
		<< "P to process a PO, or Q to quit.\n";
	while(cin >> ch && toupper(ch) != 'Q')
	{
		while(cin.get() != '\n')
			continue;
		if(!isalpha(ch))
		{
			cout << '\a';
			continue;
		}
		switch(ch)
		{
			case 'A':
			case 'a': cout << "Enter an account to add: ";
				  cin.getline(po.account, ChSize);
				  cout << "Enter the balance to add: ";
				  cin >> po.balance;
				  if(ls.isfull())
					cout << "List already full!\n";
				  else
					ls.push(po);
					total += po.balance;
					cout << "Account " << po.account << " added\n"; 
					cout << "Current balance in total: " << total << "." << endl;
			          break;
			case 'P':
			case 'p': if(ls.isempty())
				  	cout << "lsack already empty!\n";
				  else
				  {
					ls.pop(po);
					total -= po.balance;
					cout << "Account " << po.account << " popped\n";
					cout << "Current balance in total: " << total << "." << endl;
				  }	
				  break;
		}
		cout << "Please enter A to add a purchase order, \n"
		     << "P to process a PO, or Q to quit.\n";
	}
	cout << "Apply 5% interest rate to all the accounts.\n";
	ls.visit(increase_balance);
	cout << "Bye\n";
	return 0;
}

