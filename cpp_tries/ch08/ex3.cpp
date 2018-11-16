#include <iostream>
#include <string>
#include <cctype>

using namespace std;

void toupper(string & str);

int main()
{
	string str;
	do
	{
		cout << "Enter a string (q to quit): ";
		getline(cin, str);
		if(str == "q")
			break;
		toupper(str);
		cout << str << endl;
	}
	while(cin.good());
	cout << "Bye." << endl;
	return 0;
}

void toupper(string & str)
{
	for(int i = 0;i < str.size(); ++i)
	{
		if(str[i] >= 'a' && str[i] <= 'z')
			str[i] = toupper(str[i]);
	}
}

