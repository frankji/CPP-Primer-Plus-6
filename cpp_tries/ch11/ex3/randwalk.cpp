#include <iostream>
#include <cstdlib> //rand(), srand() prototypes
#include <ctime> //time() prototype
#include "vect.h"

int main()
{
	using namespace std;
	using VECTOR::Vector;
	srand(time(0)); // Seed random-number generator
	double direction;
	Vector step;
	Vector result(0.0, 0.0);
	unsigned long steps, min_step, max_step;
	steps = min_step = max_step;
	double target, dstep, avg_step;
	avg_step = 0.0;
	int ntrials;
	cout << "Enter the number of trials: ";
	if(!(cin >> ntrials))
	{
		cout << "Invalid Input!\n";
		exit(EXIT_FAILURE);
	}
	cout << "Enter target distance: ";
        if(!(cin >> target))
        {
                cout << "Invalid Input!\n";
                exit(EXIT_FAILURE);
        }
	cout << "Enter step length: ";
        if(!(cin >> dstep))
        {
                cout << "Invalid Input!\n";
                exit(EXIT_FAILURE);
        }
	
	for(int i = 0; i < ntrials; ++i) 
	{
		while(result.magval() < target)
		{
			direction = rand() % 360;
			step.reset(dstep, direction, Vector::POL);
			result = result + step;
			steps++;
		}
		avg_step += steps; 
		if(min_step > steps || min_step == 0)
			min_step = steps;
		if(max_step < steps || max_step == 0)
			max_step = steps;
		//cout << "After " << steps << " steps, the subject has the following location:\n";
		//cout << result << endl;
		//result.polar_mode();
		//cout << " or\n" << result << endl;
		//cout << "Average outward distance per step = " << result.magval()/steps << endl;
		steps = 0;
		result.reset(0.0, 0.0);
	}
	avg_step /= ntrials;
	cout << "In " << ntrials << " trials: " << endl;
	cout << "Highest steps: " << max_step << endl;
	cout << "Lowest steps: " << min_step << endl;
	cout << "Average steps: " << avg_step << endl;
	cout << "Bye!\n";
	cin.clear();
	while(cin.get() != '\n')
		continue;
	return 0;
	
}
