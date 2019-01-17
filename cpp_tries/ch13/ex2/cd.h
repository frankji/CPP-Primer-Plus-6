#ifndef _CD_H_
#define _CD_H_

#include <iostream>
#include <cstring>
using namespace std;

class Cd
{
	private:
		char * performers;
		char * label;
		int selections;
		double playtime;
	public:
		Cd(const char * s1, const char * s2, int n, double x);
		Cd(const Cd & d);
		Cd();
		virtual ~Cd();
		virtual void Report() const;
		virtual Cd & operator=(const Cd & d);
};

class Classic : public Cd
{
	private:
		char * primary;
	public:
		Classic(const char * s0, const char * s1, const char * s2, int n, double x);
		Classic(const Classic & c);
		Classic();
		virtual ~Classic();
		virtual void Report() const;
		virtual Classic & operator=(const Classic & c);
};

#endif

