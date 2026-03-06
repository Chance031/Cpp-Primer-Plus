#ifndef GOLF_H_
#define GOLF_H_

class Golf
{
private:
	enum { Len = 40 };
	char fullname[Len];
	int handicap;

public:
	Golf();
	Golf(const char* name, int hc);
	int setgolf();
	void updatehandicap(int hc) { handicap = hc; }
	void showgolf() const;
};

#endif