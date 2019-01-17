#include "tabtenn0.h"
#include <iostream>

TableTennisPlayer::TableTennisPlayer(const string & fn, const string & ln, bool ht) : firstname(fn), lastname (ln), hasTable(ht) {}
//member initializer saves the step to invok string assignment to reset firstname to fn.


void TableTennisPlayer::Name() const
{
	std::cout << lastname << ", " << firstname;
}
