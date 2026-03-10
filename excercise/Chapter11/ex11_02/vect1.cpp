#include <cmath>
#include "vect1.h"

namespace VECTOR
{
	const double Rad_to_deg = 45.0 / std::atan(1.0);

	void Vector::set_x(double mag, double ang)
	{
		x = mag * std::cos(ang);
	}

	void Vector::set_y(double mag, double ang)
	{
		y = mag * std::sin(ang);
	}

	Vector::Vector()
	{
		x = y = 0.0;
		mode = RECT;
	}

	Vector::Vector(double n1, double n2, Mode form)
	{
		reset(n1, n2, form);
	}
	
	void Vector::reset(double n1, double n2, Mode form)
	{
		mode = form;
		if (form == RECT)
		{
			x = n1;
			y = n2;
		}
		else if (form == POL)
		{
			set_x(n1, n2 / Rad_to_deg);
			set_y(n1, n2 / Rad_to_deg);
		}
		else
		{
			std::cout << "Vector()에 전달된 제3의 매개변수가 잘못되었다.\n";
			std::cout << "그래서 벡터를 0으로 설정하였다.\n";
			x = y = 0.0;
			mode = RECT;
		}
	}

	Vector::~Vector()
	{
	}

	double Vector::magval() const
	{
		return std::sqrt(x * x + y * y);
	}

	double Vector::angval() const
	{
		if (x == 0.0 && y == 0.0)
			return 0.0;
		else
			return std::atan2(y, x);
	}

	void Vector::polar_mode()
	{
		mode = POL;
	}

	void Vector::rect_mode()
	{
		mode = RECT;
	}

	Vector Vector::operator+ (const Vector& b) const
	{
		return Vector(x + b.x, y + b.y);
	}

	Vector Vector::operator-(const Vector& b) const
	{
		return Vector(x - b.x, y - b.y);
	}

	Vector Vector::operator-() const
	{
		return Vector(-x, -y);
	}

	Vector Vector::operator*(double n) const
	{
		return Vector(n * x, n * y);
	}

	Vector operator*(double n, const Vector& a)
	{
		return a * n;
	}

	std::ostream& operator<<(std::ostream& os, const Vector& v)
	{
		if (v.mode == Vector::RECT)
			os << "(x,y) = (" << v.x << ", " << v.y << ")";
		else if (v.mode == Vector::POL)
		{
			os << "(m,a) = (" << v.magval() << ", "
				<< v.angval() * Rad_to_deg << ")";
		}
		else
			os << "Vector 객체의 모드 지정이 틀렸습니다.\n";

		return os;
	}
}