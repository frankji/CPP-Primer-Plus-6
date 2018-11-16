#include <iostream>
#include <cstring>
using namespace std;

template <class T>
T maxn(T * arr, int n);

template <>
const char * maxn(const char ** arr, int n);

int main()
{
	int int_arr[6] = {0, 1, 2, 3, 4, 5};
	double double_arr[4] = {0.0, 1.0, 2.0, 3.0};
	const char * arr[5] = {"Tom", "Ziggy", "Stardust", "Stardust", "David"};
	cout << "Maximum of 0, 1, 2, 3, 4, 5 is " << maxn(int_arr, 6) << "." << endl;
	cout << "Maximum of 0.0, 1.0, 2.0, 3.0 is " << maxn(double_arr, 4) << "." << endl;
	cout << "The address of first longest string in {\"Tom\", \"Ziggy\", \"Ziggy\", \"Stardust\", \"David\"} is " << (int *) maxn(arr, 5) << "." << endl; // int * changes char * to address no.
	return 0;
}

template <class T>
T maxn(T * arr, int n)
{
	T max = arr[0];
	for(int i = 1; i < n; ++i)
		if(arr[i] > max)
			max = arr[i];
	return max;
}

template <>
const char * maxn(const char ** arr, int n)
{
	int max = strlen(arr[--n]);
	int maxi = n;
	int leni = 0;
	while(n--)
	{
		leni = strlen(arr[n]);
		if(leni > max)
		{
			max = leni;
			maxi = n;
		}	
	}
	return arr[maxi];
}
