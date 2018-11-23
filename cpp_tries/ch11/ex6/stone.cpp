#include <iostream>
using std::cout;
#include "stonewt.h"

void display(const Stonewt & st, int n);
int main()
{
	Stonewt stones[6] = {170.0, 160.0, 180.0};
	double stones_left[3] = {140, 150, 130};
	for(int i = 3; i < 6; ++i)
	{
		stones[i] = stones_left[i-3];
	}
	Stonewt threshold(11, 0);
	Stonewt min_st, max_st;
	min_st = max_st = threshold;
	int min_index, max_index;
	int counts = 0;
	for(int i = 0; i < 6; ++i)
	{
		if(min_st > stones[i])
		{
			min_st = stones[i];
			min_index = i+1;
		}
		if(max_st < stones[i])
		{
			max_st = stones[i];
			max_index = i+1;
		}
		if(!(threshold > stones[i]))
			counts++;	
	}
	cout << "No." << min_index << " is the smallest: ";
	min_st.show_stn();
	cout << "No." << max_index << " is the largest: ";
	max_st.show_stn();
	cout << counts << " of 6 are above or equal to 11 stones.\n";
}

void display(const Stonewt & st, int n)
{
	for(int i = 0; i < n; ++i)
	{
		cout << "Wow! ";
		st.show_stn();
	}
}
