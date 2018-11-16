#include <iostream>
#include <string> // for the string class
#include <cstring> // for functions of string such as strlen

int main()
{
	using namespace std;
	char first[50];
	char last[50];
	char name[120];
	cout << "Enter your fist name: " << endl;
	cin.get(first, 50).get();
	cout << "Enter your last name: " << endl;
	cin.get(last, 50).get();
	strcat(name, last);
	strcat(name, ", ");
	strcat(name, first);
	cout << "Here's the information in a single string: " << name << ".\n";
	return 0;
}
