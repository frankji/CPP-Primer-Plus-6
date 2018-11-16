#include <iostream>

int main(){
	using namespace std;
	double degrees, minutes, seconds;
	cout << "Enter a latitude in degrees, minites and seconds:\n";
	cout << "First, enter the degrees: ";
	cin >> degrees;
	cout << "Next, enter the minutes: ";
	cin >> minutes;
	cout << "Finally, enter the seconds: ";
	cin >> seconds;
	cout << degrees << " degrees, " << minutes << " minutes, " << seconds << " seconds = ";
	minutes = seconds / 60 + minutes;
	degrees = degrees + minutes / 60;
	cout << degrees << endl;
	return 0;
}
