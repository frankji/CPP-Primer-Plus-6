#ifndef PORT_H_
#define PORT_H_

#include <iostream>
#include <cstring>
using namespace std;
class Port
{
	private:
		char * brand;
		char * style;
		int bottles;
	public:
		Port(const char * br = "none", const char * st = "none", int b = 0);
		Port(const Port & p);
		virtual ~Port() { delete [] brand; };
		// The assignment itself has the argument type matched with the class so it does not need to be virtual 
		Port & operator=(const Port & p);
		Port & operator+=(int b);
		Port & operator-=(int b);
		int BottleCount() const { return bottles; }
		virtual void Show() const;
		// A friend function is not a class method so it will not be a virtual function.
		friend ostream & operator<<(ostream & os, const Port & p);
};

class VintagePort : public Port
{
	private:
		char * nickname;
		int year;
	public:
		VintagePort();
		VintagePort(const char * br, const char * st, int b, const char * nn, int y);
		VintagePort(const VintagePort & vp);
		~VintagePort() { delete [] nickname; }
		VintagePort & operator=(const VintagePort & vp);
		virtual void Show() const;
		friend ostream & operator<<(ostream & os, const VintagePort & vp);
};

#endif
