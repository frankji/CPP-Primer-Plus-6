#include <iostream>
using namespace std;
#include <cstring>

struct stringy
{
	char * str;
	int ct;
};

void set(stringy & str, const char * testing);
void show(stringy & str, int showtime = 1);
void show(const char * str, int showtime = 1);

int main()
{
	stringy beany;
	char testing[] = "Reality isn't what it used to be.";
	set(beany, testing);
	show(beany);
	show(beany, 2);
	testing[0] = 'D';
	testing[1] = 'u';
	show(testing);
	show(testing, 3);
	show("Done!");
	return 0;
}

void set(stringy & str, const char * testing)
{
	str.ct = strlen(testing);
	str.str = new char[str.ct];
	strcpy(str.str, testing); //Use strcpy to copy the string.
}

void show(stringy & str, int showtime)
{
	for(int i = 0; i < showtime; ++i)
		cout << str.str << endl;
}

void show(const char * str, int showtime)
{
	for(int i = 0; i < showtime; ++i)
                cout << str << endl;
}
