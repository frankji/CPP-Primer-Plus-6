#include <iostream>
#include <cstring>
#include "golf.h"

const int limits = 5;
extern const int ChSize = 40;// const makes it internal. Add extern if you really want to use it externally.

int main()
{
	golf g[limits * 2];
	char tmp_fullname[ChSize];
	int tmp_hc;
	using namespace std;
	int i = 0;
	while(i < limits)
	{
		cout << "Enter the name: ";
		cin.get(tmp_fullname, ChSize).get();
		if(strlen(tmp_fullname) == 0)
			break;
		cout << "Enter the handicap: ";
		(cin >> tmp_hc).get();
		setgolf(g[i++], tmp_fullname, tmp_hc);
		if(setgolf(g[i]))
			i++;
		else
			break;
	}
	for(int j = 0;i > 0; ++j, --i)
	{
		showgolf(g[j]);
	}
	return 0;
}
