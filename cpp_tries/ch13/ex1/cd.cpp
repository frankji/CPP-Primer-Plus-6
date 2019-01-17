#include "cd.h"

Cd::Cd(const char * s1, const char * s2, int n, double x)
{
	strcpy(performers, s1);
	strcpy(label, s2);
	selections = n;
	playtime = x;
}

Cd::Cd(const Cd & d)
{
	strcpy(performers, d.performers);
	strcpy(label, d.label);
	selections = d.selections;
	playtime = d.playtime;
}

Cd::Cd()
{
	strcpy(performers, "unknown");
	strcpy(label, "unknown");
	selections = 0;
	playtime = 0.0;
}

Cd::~Cd()
{
}

void Cd::Report() const
{
	cout << "Performer: " << performers << endl;
	cout << "Label: " << label << endl;
	cout << "Selections: " << selections << endl;
	cout << "Playtime: " << playtime << endl;
}

Cd & Cd::operator=(const Cd & d)
{
	if(this == &d)
		return *this;
	else
	{
		strcpy(performers, d.performers);
		strcpy(label, d.label);
		selections = d.selections;
		playtime = d.playtime;
	}
	return *this;
}

Classic::Classic(const char * s0, const char * s1, const char * s2, int n, double x) : Cd(s1, s2, n, x)
{
	strcpy(primary, s0);
}

Classic::Classic(const Classic & c) : Cd(c)
{
	strcpy(primary, c.primary);
}

// Calls base default constructor
Classic::Classic() 
{
	strcpy(primary, "unknown");
}

Classic::~Classic()
{
}

void Classic::Report() const
{
	// Call base function to report
	cout << "Primary: " << primary << endl;
	Cd::Report();
}

Classic & Classic::operator=(const Classic & c)
{
	if(this == &c)
		return *this;
	else
	{
		Cd::operator=(c);
		strcpy(primary, c.primary);
	}
	return *this;
}
