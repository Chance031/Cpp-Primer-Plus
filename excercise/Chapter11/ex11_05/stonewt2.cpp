#include <iostream>
#include "stonewt2.h"

Stonewt::Stonewt(double lbs, Mode md)
{
	stone = int(lbs) / Lbs_per_stn;
	pds_left = int(lbs) % Lbs_per_stn + lbs - int(lbs);
	pounds = lbs;
	mode = md;
}

Stonewt::Stonewt(int stn, double lbs, Mode md)
{
	stone = stn;
	pds_left = lbs;
	pounds = stn * Lbs_per_stn + lbs;
	mode = md;
}

Stonewt::Stonewt()
{
	stone = pounds = pds_left = 0;
	mode = STONE;
}

Stonewt::~Stonewt()
{
}

void Stonewt::setmode(Mode md)
{
	mode = md;
}

Stonewt Stonewt::operator+(const Stonewt& st) const
{
	return Stonewt(pounds + st.pounds, mode);
}

Stonewt Stonewt::operator-(const Stonewt& st) const
{
	return Stonewt(pounds - st.pounds, mode);
}

Stonewt Stonewt::operator*(const Stonewt& st) const
{
	return Stonewt(pounds * st.pounds, mode);
}

std::ostream& operator<<(std::ostream& os, const Stonewt& st)
{
	if (st.mode == Stonewt::STONE)
		os << st.stone << "스톤, " << st.pds_left << "파운드\n";
	else if (st.mode == Stonewt::FLOAT_POUND)
		os << st.pounds << "파운드\n";
	else if (st.mode == Stonewt::INT_POUND)
		os << int(st.pounds) << "파운드\n";
	else
		os << "Stonewt의 객체의 모드 지정이 틀렸습니다.\n";

	return os;
}
