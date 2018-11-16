#include <iostream>
#include <string>

struct CandyBar
{
	std::string brand_name;
	double weight;
	int calories;
};

int main(){
	using namespace std;
	CandyBar * snack = new CandyBar[3];
	//snack[i] is not a pointer. This is one way to access the element so snack[i]->brand_name will be invalid. 
	cout << "Please input the brand name of snack 1: " << endl;
	getline(cin, snack[0].brand_name);
	cout << "Please input the weight of snack 1: " << endl;
	cin >> snack[0].weight;
	cout << "Please input the energy of snack 1: " << endl;
	cin >> snack[0].calories;
	cin.get(); // Remember this line because getline will parse '\n';
        cout << "Please input the brand name of snack 2: " << endl;
        getline(cin, snack[1].brand_name);
        cout << "Please input the weight of snack 2: " << endl;
        cin >> snack[1].weight;
        cout << "Please input the energy of snack 2: " << endl;
        cin >> snack[1].calories;
	cin.get();
        cout << "Please input the brand name of snack 3: " << endl;
        getline(cin, snack[2].brand_name);
        cout << "Please input the weight of snack 3: " << endl;
        cin >> snack[2].weight;
        cout << "Please input the energy of snack 3: " << endl;
        cin >> snack[2].calories;
	cout << "The brand names of these snack: " << snack[0].brand_name << ", " << snack[1].brand_name << ", " << snack[2].brand_name << ". " << endl;
	cout << "The weights of these snacks: " << snack[0].weight << ", " << snack[1].weight << ", " << snack[2].weight << ". " << endl;
	cout << "The energy values of these snacks: " << snack[0].calories << ", " << snack[1].calories << ", " << snack[2].calories << ". " << endl;
	return 0;
	delete [] snack;
}
