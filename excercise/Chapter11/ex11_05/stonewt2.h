#ifndef STONEWT_H_
#define STONEWT_H_

#include <iostream>

class Stonewt
{
public:
	enum Mode { STONE, INT_POUND, FLOAT_POUND };

private:
	enum { Lbs_per_stn = 14 };
	int stone;
	double pds_left;
	double pounds;
	Mode mode;

public:
	Stonewt(double lbs, Mode md = STONE);
	Stonewt(int stn, double lbs, Mode md = STONE);
	Stonewt();
	~Stonewt();
	void setmode(Mode md);
	Stonewt operator+(const Stonewt& st) const;
	Stonewt operator-(const Stonewt& st) const;
	Stonewt operator*(const Stonewt& st) const;
	friend Stonewt operator*(double m, const Stonewt& st)
	{
		return st * m;
	}
	friend std::ostream& operator<<(std::ostream& os, const Stonewt& st);
};

#endif