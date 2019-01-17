#include "port.h"

Port::Port(const char * br, const char * st, int b)
{
	brand = new char[strlen(br) + 1];
	strcpy(brand, br);
	style = new char[strlen(st) + 1];
	strcpy(style, st);
	bottles = b;
}

Port::Port(const Port & p)
{
        brand = new char[strlen(p.brand) + 1];
        strcpy(brand, p.brand);
        style = new char[strlen(p.style) + 1];
        strcpy(style, p.style);
        bottles = p.bottles;
}

Port & Port::operator=(const Port & p)
{
	if(this == &p)
		return *this;
	else
	{
		delete [] brand;
		brand = new char[strlen(p.brand) + 1];
	        strcpy(brand, p.brand);
       		delete [] style;
		style = new char[strlen(p.style) + 1];
        	strcpy(style, p.style);
        	bottles = p.bottles;

	}
	return *this;
}

Port & Port::operator+=(int b)
{
	bottles += b;
	return *this;
}

Port & Port::operator-=(int b)
{
	if(bottles - b < 0)
	{
		cout << "Bottles are not enough!\n";
		return *this;
	}
	else
	{
		bottles -= b;
	}
	return *this;
}

void Port::Show() const
{
	cout << "Brand: " << brand << endl;
	cout << "Kind: " << style << endl;
	cout << "Bottles: " << bottles << endl;
}

ostream & operator<<(ostream & os, const Port & p)
{
	os << p.brand << ", " << p.style << ", " << p.bottles << endl;
	return os;
}

VintagePort::VintagePort() : Port()
{
	nickname = new char[5];
	strcpy(nickname, "none");
}

VintagePort::VintagePort(const char * br, const char * st, int b, const char * nn, int y) : Port(br, st, b)
{
	nickname = new char[strlen(nn) + 1];
	strcpy(nickname, nn);
	year = y;
}

VintagePort::VintagePort(const VintagePort & vp) : Port(vp)
{
	delete [] nickname;
	nickname = new char[strlen(vp.nickname) + 1];
	nickname = strcpy(nickname, vp.nickname);
	year = vp.year;
}

VintagePort & VintagePort::operator=(const VintagePort & vp)
{
	if(this == &vp)
		return *this;
	else
	{
		Port::operator=(vp);
		delete [] nickname;
        	nickname = new char[strlen(vp.nickname) + 1];
        	nickname = strcpy(nickname, vp.nickname);
		year = vp.year;
	}	
	return *this;
}

void VintagePort::Show() const
{
	cout << "Nickname: " << nickname << endl;
	Port::Show();
}

ostream & operator<<(ostream & os, const VintagePort & vp)
{
	os << vp.nickname << ", " << (const Port &) vp;
	return os;
}
