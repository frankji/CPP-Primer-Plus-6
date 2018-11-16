#include <iostream>

const double miles_per_100k = 62.14L;
const double liters_per_gallon = 3.785L;

int main(){
	using namespace std;
	double mpg, liters_per_100k;
	cout << "Please enter the consumption figure in liters per liters_per_100k:";
	cin >> liters_per_100k;
	mpg = liters_per_100k / liters_per_gallon / (1 * miles_per_100k);
	mpg = 1 / mpg;
	cout << "The usage of petrol is " << mpg << " mpg." << endl;
	return 0;
}
