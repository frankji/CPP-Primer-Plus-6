#include <iostream>
#include <string>
//#include <cstring>

int main(){
	using namespace std;
	char first[50];
	string last;
	char grade[20];
	int age;
	cout << "What is your first name? ";
	cin.get(first, 50).get(); // remember that get will parse "\n", right?
	cout << "What is your last name? ";
	getline(cin, last); // char array can use cin.get() but string cannot.
	// You should use getline and cin is serving as an argument. The additional get() for cin.get() solves the problem of getline() reading "\n" in the input queue.
	cout << "What letter grade do you deserve? ";
	cin.getline(grade, 20); // both get and getline will put the remaining text into the input queue. This will be discussed later.
	grade[1] = '\0';
	cout << "What is your age? ";
	cin >> age;
	cout << "Name: " << last << ", " << first << endl;
	cout << "Grade: " << grade << endl;
	cout << "Age: " << age << endl;
	return 0;	
}
