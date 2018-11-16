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
	Pizza * pizza = new Pizza; // The usage of new is TypeName * VarName = new TypeName;
	cout << "Enter the diameter of the pizza: " << endl;
        cin >> pizza->diam; //This is one way to call the members
	cin.get(); //Remember that the "\n" is still in the input queue;
	cout << "Enter the name of the pizza company: " << endl;
	cin.get((*pizza).name, 50).get(); //This is another way. You may call the structure first.
	cout << "Enter the weight of the pizza: " << endl;
	cin >> pizza->weight;
	cout << "The name of the pizza company: " << pizza->name << "." << endl;
	cout << "The diameter of the pizza: " << (*pizza).diam << "." << endl;
	cout << "The weight of the pizza: " << pizza->weight << "." << endl;
	delete pizza; //Remember to clean memory when you are done with it.
	return 0;
}
