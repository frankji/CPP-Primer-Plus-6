#include <iostream>
#include <array>

int main()
{
	using namespace std;
	double avg;
	array <double, 3> yd40; // This is how to use array. If using vector, declaration will be vector<double> yd40(3).
	cout << "Please enter time 1: " << endl;
	cin >> yd40[0];
	cout << "Please enter time 2: " << endl;
	cin >> yd40[1];
	cout << "Please enter time 3: " << endl;
	cin >> yd40.at(2); //Another way to call the element which ensures the valid indexing.
	avg = (yd40[0] + yd40[1] + yd40[2])/3;
	cout << "The average time is: " << avg << "." << endl;
	return 0;	
}

