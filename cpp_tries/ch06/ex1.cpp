#include <iostream>
#include <cctype>
#include <cstring>

int main()
{
	using namespace std;
	char ch;
	cout << "Enter something: ";
	while(cin.get(ch))
	{
		if(ch == '@')
		{
			cout << endl;
			break;
		}
		else if(ch >= 'A' && ch <= 'Z' )
		{
			cout << char(tolower(ch));
		}
		else if(ch >= 'a' && ch <= 'z')
		{
			cout << char(toupper(ch));
		}
		else
		{
			continue;
		}
	}

	return 0;
}

