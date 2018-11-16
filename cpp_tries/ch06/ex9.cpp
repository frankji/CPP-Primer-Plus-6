#include <iostream>
#include <string>
#include <vector>
#include <fstream>

struct contributor
{
	std::string name;
	double contribution;
};

int main()
{
	using namespace std;
	ifstream infile;
	string filename;
	int num;
	vector<int> toppatron, patron;
	do
	{
		cout << "Please enter the filename: ";
		getline(cin, filename);
		while(!cin.good())
		{
			cin.clear();
			cout << "Please enter the filename: ";
			getline(cin, filename);
		}
		infile.open(filename);
	}
	while(!infile.is_open());
	(infile >> num).get();
	contributor * members = new contributor[num];
	for(int i = 0; i < num; ++i)
	{
		getline(infile, members[i].name);
                (infile >> members[i].contribution).get(); //The get() is very important because of the '\n' in the input queue
		if(members[i].contribution >= 10000)
		{
			toppatron.push_back(i);
		}
		else
		{
			patron.push_back(i);
		}
	}
	cout << "Grand Patrons: " << endl;
	if(toppatron.size() > 0)
	{
		for(int i: toppatron)
		{
			cout << members[i].name << ": " << members[i].contribution << endl;
		}
	}
	else
		cout << "none" << endl;
	cout << "Patrons: " << endl;
	if(patron.size() > 0)
	{
		for(int i: patron)
		{
			cout << members[i].name << ": " << members[i].contribution << endl;
		}
	}
	else
		cout << "none" << endl;
	return 0;
}
