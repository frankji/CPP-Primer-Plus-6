// static.cpp -- using a static local variable
#include <iostream>
#include <string>

// function prototype
void strcount(std::string str);

int main()
{
	using namespace std;
	string input;

	cout << "Enter a line:\n";
	getline(cin, input);
	while(cin)
	{
		if(input == "")
			break;	
		strcount(input);
		cout << "Enter next line (empty line to quit):\n";
		getline(cin, input);
	}
	cout << "Bye\n";
	return 0;
}

void strcount(std::string str)
{
	using namespace std;
	static int total = 0; // static local variable
	int count = str.size(); //automatic local variable

	cout << "\"" << str << "\" contains ";
	total += count;
	cout << count << " characters\n";
	cout << total << " characters total\n";
}
