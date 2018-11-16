#include <iostream>
#include <string>

int main()
{
	using namespace std;
	string word;
	int n = 0;
	cout << "Enter words (to stop, type the word done): " << endl;
	cin >> word;
	while(word != "done")
	{
		cin >> word;	
		n += 1;
	}
	cout << "You entered a total of " << n << " words." << endl;
	return 0;
}
