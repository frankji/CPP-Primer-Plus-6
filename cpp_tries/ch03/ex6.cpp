#include <iostream>

int main(){
	using namespace std;
	double distance, petrol, liters_per_100k;
	cout << "Please enter distance in kilometers: ";
	cin >> distance;
	cout << "Please enter petroline volume in liters: ";
	cin >> petrol;
	liters_per_10k = petrol / (distance / 100);
	cout << "The usage of petrol is " << liters_per_10k << " liters/10km." << endl;
	return 0;
}
