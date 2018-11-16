#include <iostream>
#include <string>

using namespace std;
struct times
{
	int calls;
	int prints;
};
times t = {0, 0};
void display(string * str, unsigned show = 0);


int main()
{
	int call_time;
	string str;
	cout << "Enter the content for display: ";
	getline(cin, str);
	cout << "Enter the number to call display function: ";
	cin >> call_time;
	for(int i = 0; i < call_time; ++i)
	{
		display(&str);
	}
	display(&str, call_time);
	cout << "You called '" << str << "' for " << call_time << " times before this call!" << endl;
	return 0;
}

void display(string * str, unsigned show)
{
	if(show == 0)
	{
		t.calls += 1;
		t.prints = 0;
	}	
	else
	{
//		t.calls += 1;
		t.prints = 1;
	}
	for(int i =0; i < t.calls && t.prints == 1; ++i)
	{
		cout << (*str) << endl;
	}
}

