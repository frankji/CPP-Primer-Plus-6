#include <iostream>
#include <fstream>
#include <string>

int main()
{
	using namespace std;
	char ch;
	string filename;
	ifstream infile;
	int num_char = 0;
	do
	{
		cout << "Enter the filename: ";
		getline(cin, filename);
		while(!cin.good())
        	{
                	cin.clear();
                	cout << "Enter the filename: ";
			getline(cin, filename);
        	}
		infile.open(filename);
	}
	while(!infile.is_open());
	
	infile >> ch; //Make sure it reads something when being tested if good.
	while(infile.good()) 
	{
		++num_char;
		infile >> ch;
	}
	cout << num_char << " Charaters in " << filename << "." << endl;
	infile.close();
	return 0;
}
