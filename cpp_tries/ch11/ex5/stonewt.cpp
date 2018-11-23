#include <iostream>
#include "stonewt.h"

// construct Stonewt object from double value
Stonewt::Stonewt(double lbs, Mode form)
{
	pounds = lbs;
	set_stn();
	state = form;
}

// construct Stonewt object from stone, double values
Stonewt::Stonewt(int stn, double lbs, Mode form)
{
	stone = stn;
	pds_left = lbs;
	set_lbs();
	state = form;
}

Stonewt::Stonewt()	// default constructor, wt = 0
{
	stone = pounds = pds_left = 0;
	state = LBS;
}

Stonewt::~Stonewt()
{
}

void Stonewt::set_stn()
{
	stone = int (pounds) / Lbs_per_stn; // integer division
        pds_left = int (pounds) % Lbs_per_stn + pounds - int(pounds);
}




std::ostream & operator<<(std::ostream & os, const Stonewt & st)
{
	if(st.state == Stonewt::STN)
		os << st.stone << " stone, " << st.pds_left << " pounds";
	else if(st.state == Stonewt::LBS)
		os << st.pounds << " pounds";
	else
		os << "Invalid mode!";
	return os;
}
