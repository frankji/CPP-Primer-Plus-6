#include <iostream>
using namespace std;

template <class T>
T max5(T * arr);

int main()
{
	int int_arr[5] = {1, 2, 3, 4, 5};
	double double_arr[5]= {1.0, 2.0, 3.0, 4.0, 5.0};
	cout << "Testing with 1, 2, 3, 4, 5." << endl;
	int int_max = max5(int_arr);
	cout << "Max value is " << int_max << "." << endl;
	cout << "Testing with 1.0, 2.0, 3.0, 4.0, 5.0." << endl; 
	double double_max = max5(double_arr);
	cout << "Max value is " << double_max << "." << endl;
	return 0;
}

template <class T>
T max5(T * arr)
{
	T max = arr[0];
	for(int i = 1; i < 5; ++i)
	{
		if(arr[i] > max)
			max = arr[i];
	}
	return max;
}
