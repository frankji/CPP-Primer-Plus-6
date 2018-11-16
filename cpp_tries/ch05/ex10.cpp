#include <iostream>

int main()
{
	using namespace std;
	int rownum;
	cout << "Enter number of rows: ";
	cin >> rownum;
	int j;
	for(int i = 0; i < rownum; ++i)
	{
		j = rownum - 1;
		while(j > i)
		{
			cout << ".";
			--j;
		}
		do
		{
			cout << "*";
			--j;
		}
		while(j >= 0);
		cout << endl;
	}
	return 0;
}
