#include "dma.h"
#include <cstring>

abcDMA::abcDMA(const char * l, int r)
{
	label = new char[std::strlen(l) + 1];
	std::strcpy(label, l);
	rating = r;
}

abcDMA::abcDMA(const abcDMA & rs)
{
	label = new char[std::strlen(rs.label) + 1];
	std::strcpy(label, rs.label);
	rating = rs.rating;
}

abcDMA::~abcDMA()
{
	delete [] label;
}

abcDMA & abcDMA::operator=(const abcDMA & rs)
{
	if(this == &rs)
		return *this;
	delete [] label;
	label = new char[std::strlen(rs.label) + 1];
	std::strcpy(label, rs.label);
	rating = rs.rating;
	return *this;
}

std::ostream & operator<<(std::ostream & os, const abcDMA & rs)
{
	os << "Label: " << rs.label << std::endl;
	os << "Rating: " << rs.rating << std::endl;
	return os;
}

void abcDMA::View() const
{
	std::cout << "Object of abcDMA:\n";
	std::cout << *this;
}

baseDMA::~baseDMA()
{
}

baseDMA & baseDMA::operator=(const baseDMA & rs) 
{
	abcDMA::operator=(rs);
	return *this;
}

void baseDMA::View() const
{
	std::cout << "Object of baseDMA:\n";
	std::cout << *this;
}
lacksDMA::lacksDMA(const char * c, const char * l, int r) : abcDMA(l, r)
{
	std::strncpy(color, c, 39);
	color[39] = '\0';
}

lacksDMA::lacksDMA(const char * c, const baseDMA & rs) : abcDMA(rs)
{
	std::strncpy(color, c, COL_LEN - 1);
	color[COL_LEN - 1] = '\0';
}

std::ostream & operator<<(std::ostream & os, const lacksDMA & ls)
{
	os << (const abcDMA &) ls;
	os << "Color: " << ls.color << std::endl;
	return os;
}

void lacksDMA::View() const
{
        std::cout << "Object of lackDMA:\n";
        std::cout << *this;
}

hasDMA::hasDMA(const char * s, const char * l, int r) : abcDMA(l, r)
{
	style = new char[std::strlen(s) + 1];
	std::strcpy(style, s);
}

hasDMA::hasDMA(const char * s, const baseDMA & rs) : abcDMA(rs)
{
	style = new char[std::strlen(s) + 1];
	std::strcpy(style, s);
}

hasDMA::hasDMA(const hasDMA & hs) : abcDMA(hs)
{
	style = new char[std::strlen(hs.style) + 1];
	std::strcpy(style, hs.style);
}

hasDMA::~hasDMA()
{
	delete [] style;
}

hasDMA & hasDMA::operator=(const hasDMA & hs)
{
	if(this == &hs)
		return *this;
	abcDMA::operator=(hs);
	delete [] style;
	style = new char[std::strlen(hs.style) + 1];
	std::strcpy(style, hs.style);
	return *this;
}

std::ostream & operator<<(std::ostream & os, const hasDMA & hs)
{
	os << (const abcDMA &) hs;
	os << "Style: " << hs.style << std::endl;
	return os;
}

void hasDMA::View() const
{
        std::cout << "Object of hasDMA:\n";
        std::cout << *this;
}
