#include <iostream>

double probability(unsigned numbers, unsigned picks);

int main()
{
	using namespace std;
	double total, choices;
	int rounds = 0;
	double p[rounds];
	double prob = 1.0;
	cout << "Enter the total number of choices on the game and \n"
		"the number of picks allowed:\n";
	while(rounds < 2 && (cin >> total >> choices) && choices <= total)
	{
		p[rounds] = probability(total, choices);
		if(++rounds == 1)
			cout << "Next two numbers: ";
	}
	for(int i; i < rounds; i++)
	{
		prob *= p[i];
	}
	cout << "The probability of winning this game is: " << prob << "." << endl;
	return 0;
}

double probability(unsigned numbers, unsigned picks)
{
	double result = 1.0;
	double n;
	unsigned p;
	for(n = numbers, p = picks; p > 0; n--, p--)
		result = result * p / n;
	return result;
}
