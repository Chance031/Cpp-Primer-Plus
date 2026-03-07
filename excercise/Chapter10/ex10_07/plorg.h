#ifndef PLORG_H_
#define PLORG_H_

class Plorg
{
private:
	enum { MAX = 20 };
	char plorgName[MAX];
	int contentmentIndex;

public:
	Plorg(const char* name = "Plorga", int CI = 50);
	void changeCI(int CI);
	void showPlorg() const;
};

#endif