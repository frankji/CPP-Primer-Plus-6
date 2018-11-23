#ifndef STONEWT_H_
#define STONEWT_H_
#include <iostream>
class Stonewt
{
	private:
		enum {Lbs_per_stn = 14}; // pounds per stone
		enum Mode {STN, LBS}; // state variable
		Mode state;
		int stone;	// whole stones
		double pds_left;	// whole stones
		double pounds;	// entire weight in pounds
		void set_lbs() {pounds = stone * Lbs_per_stn + pds_left;}// stone -> lbs
		void set_stn();	// lbs -> stone
	public:
		Stonewt(double lbs, Mode form = LBS);	// constructor for double pounds
		Stonewt(int stn, double lbs, Mode form = STN);	// constructor for stone, lbs
		Stonewt();	// default constructor
		~Stonewt();
		Stonewt operator+(Stonewt & st) { return Stonewt(pounds + st.pounds); }
		Stonewt operator+(double lbs) { return Stonewt(lbs + pounds, state); }
		Stonewt operator-(Stonewt & st) { return Stonewt(pounds - st.pounds); }
		Stonewt operator-(double lbs) { return Stonewt(pounds - lbs, state); }
		Stonewt operator*(double mult) { return Stonewt(pounds * mult, state); }
		friend Stonewt operator*(double mult, Stonewt & st) { return st * mult; }
		friend Stonewt operator-(double lbs, Stonewt & st) { return Stonewt(lbs - st.pounds, st.state); }
		friend Stonewt operator+(double lbs, Stonewt & st) { return st + lbs; }
		friend std::ostream & operator<<(std::ostream & os, const Stonewt & st);
		//void show_lbs() const;  // show weight in pounds format
		//void show_stn() const;	 // show weight in stone format
};
#endif
