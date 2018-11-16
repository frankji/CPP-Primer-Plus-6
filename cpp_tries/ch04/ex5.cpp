#include <iostream>
#include <string>

struct CandyBar
{
	std::string brand_name;
	double weight;
	int calories;
}; // Remember the ";" in the end!
int main()
{
	using namespace std;
	CandyBar snack = {"Mocha Munch", 2.3, 350};
	cout << "Snack's brand name is: " << snack.brand_name << ".\n";
	cout << "Snack's weight is: " << snack.weight << ".\n";
	cout << "Snack's energy (calories) is: " << snack.calories << ".\n";
	return 0; 
}
