#include <iostream>

using namespace std;

const int ArSize = 10;

int Fill_array(double * arr, int ArSize);
void Show_array(double * arr, int ArSize);
void Reverse_array(double * arr, int ArSize);

int main()
{
	int N;	
	double * arr = new double[ArSize];
	N = Fill_array(arr, ArSize);
	Show_array(arr, N);
	cout <<"Reverse the array! Well, not the beginning or the end." << endl;
	Reverse_array(arr, N);
	Show_array(arr, N);
	delete [] arr;
	return 0;
}

int Fill_array(double * arr, int ArSize)
{
	cout << "Enter numbers of an array with size up to " << ArSize << ":" << endl;
	int counts = 0;
	for(int i = 0; i < ArSize; ++i)
	{
		if(cin >> arr[i])
			;
		else
			break;
		cout << "#" << i+1 << " of the array entered as: " << arr[i] << "." << endl;
		counts++;
	}
	return counts;
}

void Show_array(double * arr, int ArSize)
{
	cout << "Values of the array are: ";
	for(int i = 0; i < ArSize; ++i)
	{
		cout << " " << arr[i];
	}
	cout << "." << endl;
}

void Reverse_array(double * arr, int ArSize)
{
	double tmp;
	double start = arr[0];
	double end = arr[ArSize-1];
	int i, j;
	for(j = ArSize, i = 0; i < j; ++i, --j)
	{
		tmp = arr[ArSize-i-1];
		arr[ArSize-i-1] = arr[i];
		arr[i] = tmp;
	}
	arr[0] = start;
	arr[ArSize-1] = end;
}
