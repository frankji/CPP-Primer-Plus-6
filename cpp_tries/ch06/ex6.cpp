#include <iostream>
#include <string>
#include <vector>

struct contributor
{
	std::string name;
	double contribution;
};

int main()
{
	using namespace std;
	int num;
	vector<int> toppatron, patron;
	cout << "Please enter the number of contributors: ";
	while(!(cin >> num))
	{
		cout << "Please enter the number of contributors: ";
		cin.clear();
		while(cin.get() != '\n')
			continue;
	}
	contributor * members = new contributor[num];
	for(int i = 0; i < num; ++i)
	{
		cout << "Please enter the name of contributor " << i + 1 << ": ";
		while(!(cin >> members[i].name))
        	{       
                	cout << "Please enter the name of contributor " << i + 1 << ": ";
                	cin.clear();
                	while(cin.get() != '\n')
                        	continue;
        	}	
		cout << "Please enter the contribution of contributor " << i + 1 << ": ";
                while(!(cin >> members[i].contribution))
                {
                	cout << "Please enter the contribution of contributor " << i + 1 << ": ";
                	cin.clear();
                	while(cin.get() != '\n')
                        	continue;
                }
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
