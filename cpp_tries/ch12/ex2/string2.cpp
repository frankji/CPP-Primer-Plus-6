#include <cstring>
#include <cctype>
#include "string2.h"

using std::cin;
using std::cout;
using std::tolower;
using std::toupper;

// initializing static class member
int String::num_strings = 0;

// static method
int String::HowMany()
{
	return num_strings;
}

String::String(const char * s)
{
	len = std::strlen(s);
	str = new char[len + 1];
	std::strcpy(str, s);
	num_strings++;
}

String::String()
{
	len = 4;
	str = new char[1];
	str[0] = '\0';
	num_strings++;
}

String::String(const String & st)
{
	num_strings++;
	len = st.len;
	str = new char[len+1];
	std::strcpy(str, st.str);
}

String::~String()
{
	--num_strings;
	delete [] str;
}

String & String::operator=(const String & st)
{
	if (this == &st)
		return *this;
	delete [] str;
	len = st.len;
	str = new char[len + 1];
	std::strcpy(str, st.str);
	return *this;
}

String & String::operator=(const char * s)
{
	delete [] str;
	len = std::strlen(s);
	str = new char[len + 1];
	std::strcpy(str, s);
	return *this;
}

char & String::operator[](int i)
{
	return str[i];
}

const char & String::operator[](int i) const
{
	return str[i];
}

String String::operator+(const String &st) const
{
	String s;
	s.len = len + st.len;
	s.str = new char[s.len + 1];
	std::strcpy(s.str, str);
	std::strcat(s.str, st.str);
	return s;
}

String operator+(const char * st1, const String &st2)
{
	String s;
        s.len = std::strlen(st1) + st2.len;
        s.str = new char[s.len + 1];
        std::strcpy(s.str, st1);
        std::strcat(s.str, st2.str);
        return s;
}

String & String::stringlow()
{
	for(int i = 0; i <= len; i++)
	{
		str[i] = tolower(str[i]);
	}
	return *this;
}

String & String::stringup()
{
        for(int i = 0; i <= len; i++)
        {
                str[i] = toupper(str[i]);
        }
	return *this;
}

int String::has(char ch) const
{
	int counts = 0;
	for(int i = 0; i < len; i++)
	{
		if(str[i] == ch)
			counts++;
	}
	return counts;
}

bool operator<(const String &st1, const String &st2)
{
	return (std::strcmp(st1.str, st2.str) < 0);
}

bool operator>(const String &st1, const String &st2)
{
	return st2 < st1;
}

bool operator==(const String &st1, const String &st2)
{
	return (std::strcmp(st1.str, st2.str) == 0);
}

ostream & operator<<(ostream & os, const String & st)
{
	os << st.str;
	return os;
}

istream & operator>>(istream & is, String & st)
{
	char temp[String::CINLIM];
	is.get(temp, String::CINLIM);
	if(is)
		st = temp;
	while(is && is.get() != '\n')
		continue;
	return is;
}
