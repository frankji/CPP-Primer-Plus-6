#include <iostream>
#include <fstream> // I/O to file
#include <cstdlib> //rand(), srand() prototypes
#include <ctime> //time() prototype
#include "vect.h"

int main()
{
	using namespace std;
	using VECTOR::Vector;
	ofstream fout;
        fout.open("randwalk.txt");
	srand(time(0)); // Seed random-number generator
	double direction;
	Vector step;
	Vector result(0.0, 0.0);
	unsigned long steps = 0;
	double target;
	double dstep;
	cout << "Enter target distance: ";
	if(cin >> target)
	{
		cout << "Enter step length: ";
		if(!(cin >> dstep))
		{
			cout << "Invalid Input!\n";
			exit(EXIT_FAILURE);
		}
		fout << "Target Distance: " << target << ", " << "Step Size: "<< dstep << endl;
		fout << result << endl;
		while(result.magval() < target)
		{
			direction = rand() % 360;
			step.reset(dstep, direction, Vector::POL);
			result = result + step;
			fout << result << endl;
			steps++;
		}
		fout << "After " << steps << " steps, the subject has the following location:\n";
		fout << result << endl;
		result.polar_mode();
		fout << " or\n" << result << endl;
		fout << "Average outward distance per step = " << result.magval()/steps << endl;
		steps = 0;
		result.reset(0.0, 0.0);
	}
	else
	{
		cout << "Invalid Input!\n";
		exit(EXIT_FAILURE);
	}
	cout << "Steps written to 'randwalk.txt'.\n";
	cout << "Bye!\n";
	cin.clear();
	while(cin.get() != '\n')
		continue;
	fout.close();
	return 0;
	
}
