#ifndef CLASSIC1_H_
#define CLASSIC1_H_

class Cd
{
private:
	char* performers;
	char* label;
	int selections;
	double playtime;

public:
	Cd(const char* s1 = "None", const char* s2 = "None", int n = 0, double x = 0.0);
	Cd(const Cd& d);
	virtual ~Cd();
	virtual void Report() const;
	Cd& operator=(const Cd& d);
};

class Classic : public Cd
{
private:
	char* piecename;

public:
	Classic(const char* piece = "None", const  char* s1 = "None", const char* s2 = "None", int n = 0, double x = 0.0);
	Classic(const Cd& d, const char* piece = "None");
	Classic(const Classic& x);
	virtual ~Classic();
	virtual void Report() const;
	Classic& operator=(const Classic& x);
};

#endif