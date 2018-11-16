#include <iostream>

int main(){
	using namespace std;
	unsigned long long world_pop, us_pop;
	cout << "Please enter the population of the world: ";
	cin >> world_pop;
	cout << "Please enter the popolation of the United States: ";
	cin >> us_pop;
	double prop = double(us_pop) / double(world_pop) * 100;
	cout << "The population of the US is " << prop << "% of that of the world." << endl;
	return 0;
}
