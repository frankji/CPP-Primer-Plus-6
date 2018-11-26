#include <iostream>
class complex
{
	private:
		double real;
		double imag;
	public:
		complex(double real = 0, double imag = 0);
		~complex();
		void reset(double re, double im);
		complex operator+(complex & b) const;
		complex operator-(complex & b) const;
		complex operator*(complex & b) const;
		complex operator*(double re) const;
		friend complex operator*(double re, complex & b) { return (b * re); }
		complex operator~() const;
		friend std::ostream & operator<<(std::ostream & os, const complex b);
		friend std::istream & operator>>(std::istream & is, complex & b);
};
