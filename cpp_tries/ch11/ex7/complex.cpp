#include "complex0.h"
using std::cout;

complex::complex(double re, double im)
{
	real = re;
	imag = im;
}

complex::~complex()
{
}

void complex::reset(double re, double im)
{
	real = re;
	imag = im;
}

complex complex::operator+(complex & b) const
{
	return complex(real + b.real, imag + b.imag);
}

complex complex::operator-(complex & b) const
{
	return complex(real - b.real, imag - b.imag);
}

complex complex::operator*(complex & b) const
{
	return complex(real * b.real - imag * b.imag, real * b.imag + imag * b.real);
}

complex complex::operator*(double b) const
{
	return complex(real * b, imag * b);
}

complex complex::operator~() const
{
	return complex(real, -imag);
}

std::istream & operator>>(std::istream & is, complex & b)
{
	cout << "real: ";
	if(!(is >> b.real))
	{
		return is;
	}
	cout << "imaginary: ";
        if(!(is >> b.imag))
        {       
                return is;
        }
	return is;
}

std::ostream & operator<<(std::ostream & os, const complex b)
{
	os << "(" << b.real << "," << b.imag << "i)";
	return os;
}
