#include <iostream>
#include <string>

using namespace std;

struct CandyBar
{
	string name;
	double weight;	
	int calories;
};


void setcb(CandyBar & cb, const char * name = "Millennium Munch", double weight = 2.85, int calories = 350);
void showcb(CandyBar & cb);
int main()
{
	CandyBar cb;
	setcb(cb);
	showcb(cb);
	return 0;
}

void setcb(CandyBar & cb, const char * name, double weight, int calories) //const string literals in c++
{
	cb.name = name;
	cb.weight = weight;
	cb.calories = calories;
}

void showcb(CandyBar & cb)
{
	cout << "Candy Bar " << cb.name << ": " << endl;
	cout << "Weight: " << cb.weight << endl;
	cout << "Calories: " << cb.calories << endl;
}
