#include <iostream>

using namespace std;

const int lim = 10;
double * input_score(int limit);
void display_score(double * scores);
double avg_score(double * scores);

int main()
{
	double * scores;
	scores = input_score(lim);
	display_score(scores);
	cout << "The average of these scores is: " << avg_score(scores) << "." << endl;
	delete [] scores;
	return 0;
}

double * input_score(int limit)
{
	double * scores = new double[limit];
	for(int i = 0; i < limit; ++i)
	{
		cout << "Enter #" << i << " score (negative score to quit): ";
		while(!(cin >> scores[i]))
		{
			cin.clear();
			while(cin.get() != '\n')
				continue;
			cout << "Enter #" << i << " score (negative score to quit): ";
		}
		if(scores[i] < 0)
			break;
		
	}
	return scores;
}

void display_score(double * scores)
{
	cout << "Scores: ";
	for(int i = 0; scores[i] >= 0; i++)
	{
		cout << scores[i] << " ";
	}
	cout << endl;
}

double avg_score(double * scores)
{
	double avg = 0;
	int num = 0;
        for(int i = 0; scores[i] >= 0; i++)
        {
		num += 1;
                avg += scores[i];
        }
	return avg / num;
}	

