#include <iostream>
#include <string>

int main()
{
	using namespace std;
	string name;
	string dessert;
	
	cout << "Enter your name:" << endl;
	getline(cin, name); //This how getline works for string

	cout << "Enter your favorite dessert:" << endl;
	getline(cin, dessert);
	
	cout << "I have some delicious " << dessert;
	cout << " for you, " << name << "." << endl;
	return 0;
}
