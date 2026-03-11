#ifndef COMPLEX_H_
#define COMPLEX_H_

#include <iostream>

class complex
{
private:
	double real;
	double imaginary;

public:
	complex();
	complex(double re, double im);
	complex operator+(const complex& cm) const;
	complex operator-(const complex& cm) const;
	complex operator*(const complex& cm) const;
	complex operator*(double n) const;
	complex operator~() const;
	friend complex operator*(double n, const complex& cm) { return cm * n; }
	friend std::ostream& operator<<(std::ostream& os, const complex& cm);
	friend std::istream& operator>>(std::istream& is, complex& cm);
};

#endif