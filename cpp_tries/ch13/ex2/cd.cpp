#include "cd.h"

Cd::Cd(const char * s1, const char * s2, int n, double x)
{
	performers = new char[strlen(s1) + 1];
	strcpy(performers, s1);
	label = new char[strlen(s2) + 1];
	strcpy(label, s2);
	selections = n;
	playtime = x;
}

Cd::Cd(const Cd & d)
{
	delete [] performers;
	performers = new char[strlen(d.performers) + 1];
	strcpy(performers, d.performers);
	delete [] label;
	label = new char[strlen(d.label) + 1];
	strcpy(label, d.label);
	selections = d.selections;
	playtime = d.playtime;
}

Cd::Cd()
{
	performers = new char[8];
	strcpy(performers, "unknown");
	label = new char[8];
	strcpy(label, "unknown");
	selections = 0;
	playtime = 0.0;
}

Cd::~Cd()
{
	delete [] performers;
	delete [] label;
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
		delete [] performers;
		performers = new char[strlen(d.performers) + 1];
		strcpy(performers, d.performers);
		delete [] label;
		label = new char[strlen(d.label) + 1];
		strcpy(label, d.label);
		selections = d.selections;
		playtime = d.playtime;
	}
	return *this;
}

Classic::Classic(const char * s0, const char * s1, const char * s2, int n, double x) : Cd(s1, s2, n, x)
{
	primary = new char[strlen(s0) + 1];
	strcpy(primary, s0);
}

Classic::Classic(const Classic & c) : Cd(c)
{
	delete [] primary;
	primary = new char[strlen(c.primary) + 1];
	strcpy(primary, c.primary);
}

// Calls base default constructor
Classic::Classic()
{
	primary = new char[8];
	strcpy(primary, "unknown");
}

Classic::~Classic()
{
	delete [] primary;
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
		delete [] primary;
		primary = new char[strlen(c.primary) + 1];
		strcpy(primary, c.primary);
	}
	return *this;
}
