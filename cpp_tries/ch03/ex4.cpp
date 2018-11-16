#include <iostream>

int main(){
	using namespace std;
	unsigned long long seconds, minutes, hours, days;
	cout << "Please enter the number of seconds: ";
	cin >> seconds;
	cout << seconds << " seconds = ";
	minutes  = seconds / 60;
	seconds = seconds - minutes * 60;
	hours = minutes / 60;
	minutes = minutes - hours * 60;
	days = hours / 24;
	hours = hours - days * 24; 
	cout << days << " days, " << hours << " hours, " << minutes << " minutes, " << seconds << " seconds." << endl;
	return 0;
}
