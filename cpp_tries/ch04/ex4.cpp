#include <iostream>
#include <string>

// In this case we can simply use the concatenation operation for string.
int main(){
	using namespace std;
	string first, last, name;
	string dlim = ", ";
	cout << "Enter your first name: " << endl;
	getline(cin, first) ;
	cout << "Enter your last name: " << endl;
	getline(cin, last);
	name = last + dlim + first;
	cout << "Here's the information in a single string: " << name << ".\n";
	return 0;
}
