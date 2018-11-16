#include <iostream>

struct Pizza
{
	char name[50];
	double diam;
	double weight;
};

int main()
{
	using namespace std;
	Pizza pizza;
	cout << "Enter the name of the pizza company: " << endl;
	cin.get(pizza.name, 50).get();
	cout << "Enter the diameter of the pizza: " << endl;
	cin >> pizza.diam;
	cout << "Enter the weight of the pizza: " << endl;
	cin >> pizza.weight;
	cout << "The name of the pizza company: " << pizza.name << "." << endl;
	cout << "The diameter of the pizza: " << pizza.diam << "." << endl;
	cout << "The weight of the pizza: " << pizza.weight << "." << endl;
	return 0;
}
