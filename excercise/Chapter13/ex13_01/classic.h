#ifndef CLASSIC_H_
#define CLASSIC_H_

class Cd
{
private:
	char performers[50];
	char label[20];
	int selections;
	double playtime;

public:
	Cd(const char* s1 = "None", const char* s2 = "None", int n = 0, double x = 0.0);
	Cd(const Cd& d);
	virtual ~Cd() {};
	virtual void Report() const;
	Cd& operator=(const Cd& d);
};

class Classic : public Cd
{
private:
	char piecename[50];

public:
	Classic(const char* piece = "None", const  char* s1 = "None", const char* s2 = "None", int n = 0, double x = 0.0);
	Classic(const Cd& d, const char* piece = "None");
	virtual void Report() const;
	Classic& operator=(const Classic& x);
};

#endif