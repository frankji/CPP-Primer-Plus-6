#include <iostream>
#include <cctype>
#include "stack.h"

int main()
{
	using namespace std;
	stack st;
	char ch;
	Item po;
	double total = 0.0;
	cout << "Please enter A to add a purchase order, \n"
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
			case 'a': cout << "Enter a customer to add: ";
				  cin.getline(po.fullname, 35);
				  cout << "Enter the payment to add: ";
				  cin >> po.payment;
				  if(st.isfull())
					cout << "Stack already full!\n";
				  else
					st.push(po);
					total += po.payment;
					cout << "Customer " << po.fullname << " added\n"; 
					cout << "Current payment in total: " << total << "." << endl;
			          break;
			case 'P':
			case 'p': if(st.isempty())
				  	cout << "stack already empty!\n";
				  else
				  {
					st.pop(po);
					total -= po.payment;
					cout << "Customer " << po.fullname << " popped\n";
					cout << "Current payment in total: " << total << "." << endl;
				  }	
				  break;
		}
		cout << "Please enter A to add a purchase order, \n"
		     << "P to process a PO, or Q to quit.\n";
	}
	cout << "Bye\n";
	return 0;
}
