#include <iostream>

const double inch_per_feet = 12.00L;

int main(){
	using namespace std;
	double height_inch;
	cout << "Please input your height in inches:____\b\b\b\b";
	cin >> height_inch;
	
	double height_foot = height_inch / inch_per_feet;	
	cout << "Your height in feet is:\n" << height_foot << endl;
	return 0;
} 
