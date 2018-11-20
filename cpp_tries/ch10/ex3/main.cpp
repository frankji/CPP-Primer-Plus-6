#include <iostream>
#include <cstring>
#include "golf.h"

const int limits = 5;
extern const int ChSize = 40;// const makes it internal. Add extern if you really want to use it externally.

int main()
{
	golf g[limits];
	char tmp_fullname[ChSize];
	int tmp_hc;
	using namespace std;
	int i = 0;
	while(i < limits)
	{
		if((i % 2) == 1)
		{ 
			cout << "Enter the name: ";
			cin.get(tmp_fullname, ChSize).get();
			cout << "Enter the handicap: ";
			(cin >> tmp_hc).get();
			g[i] = golf(tmp_fullname, tmp_hc);
		}
		else
		{
			g[i].setgolf();
		}
		i++;
	}
	for(int j = 0;i > 0; ++j, --i)
	{
		g[j].showgolf();
	}
	return 0;
}
