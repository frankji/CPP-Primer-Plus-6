#include <iostream>
#include <cstring>

int main()
{
	using namespace std;
	char word[50];
	int n = 0;
	cout << "Enter words (to stop, type the word done): " << endl;
	cin >> word;
	while(strcmp(word, "done"))
	{
		cin >> word;	
		n += 1;
	}
	cout << "You entered a total of " << n << " words." << endl;
	return 0;
}
