#include <iostream>
#include <string>
#include <cctype>

int main()
{
	using namespace std;
	cout << "Enter words (q to quit): " << endl;
	string word;
	int start_with_vowels, start_with_consonant, other;	
	start_with_vowels = start_with_consonant = other = 0;
	while((cin >> word) && word != "q")
	{
		if(isalpha(word[0]))
		{
			switch(word[0])
			{
				case 'a':
				case 'o':
				case 'i':
				case 'e':
				case 'u':
					++start_with_vowels;
					break;
				default:
					++start_with_consonant;
					break;
			}
		}
		else
			++other;
	}
	cout << start_with_vowels << " words beginning with vowels" << endl;
	cout << start_with_consonant << " words beginning with consonants" << endl;
	cout << other << " others" << endl;
	return 0;
}
