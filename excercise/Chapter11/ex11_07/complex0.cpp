#include "complex0.h"

complex::complex()
{
	real = 0.0;
	imaginary = 0.0;
}

complex::complex(double re, double im)
{
	real = re;
	imaginary = im;
}

complex complex::operator+(const complex& cm) const
{
	return complex(real + cm.real, imaginary + cm.imaginary);
}

complex complex::operator-(const complex& cm) const
{
	return complex(real - cm.real, imaginary - cm.imaginary);
}

complex complex::operator*(const complex& cm) const
{
	return complex(real * cm.real - imaginary * cm.imaginary, real * cm.imaginary + imaginary * cm.real);
}

complex complex::operator*(double n) const
{
	return complex(n * real, n * imaginary);
}

complex complex::operator~() const
{
	return complex(real, -imaginary);
}

std::ostream& operator<<(std::ostream& os, const complex& cm)
{
	os << "(" << cm.real << ", " << cm.imaginary << "i)";

	return os;
}

std::istream& operator>>(std::istream& is, complex& cm)
{
	std::cout << "실수부: ";
	if (!(is >> cm.real))
		return is;

	std::cout << "허수부: ";
	if (!(is >> cm.imaginary))
		return is;

	return is;
}