#include <iostream>
#include <cmath>

const double inch_per_foot = 12.00L;
const double meter_per_inch = 0.0254L;
const double pound_per_kg = 2.2L;

int main(){
	using namespace std;
	double height_in_meter, height_in_inch, height_in_foot, weight_in_pound, weight_in_kg; 
	cout << "Please input your height of feet:____\b\b\b\b";
	cin >> height_in_foot;
	cout << "Please input your height of inch:____\b\b\b\b";
	cin >> height_in_inch;
	height_in_inch = height_in_foot * inch_per_foot + height_in_inch;
	height_in_meter = height_in_inch * meter_per_inch;
	cout << "Please input your weight in pounds:____\b\b\b\b";
	cin >> weight_in_pound;
	weight_in_kg = weight_in_pound / pound_per_kg;
	double BMI = weight_in_kg / pow(height_in_meter, 2);
	cout << "Your BMI is " << BMI  << "." << endl;
}
