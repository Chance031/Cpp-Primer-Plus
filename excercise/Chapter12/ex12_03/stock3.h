#ifndef STOCK3_H_
#define STOCK3_H_

#include <iostream>

class Stock
{
private:
	char* company;
	int shares;
	double share_val;
	double total_val;
	void set_tot() { total_val = shares * share_val; }

public:
	Stock();
	Stock(const char* co, int n, double pr);
	Stock(const Stock& st);
	Stock& operator=(const Stock& st);
	~Stock() { delete[] company; }
	void buy(long num, double price);
	void sell(long num, double price);
	void update(double price);
	const Stock& topval(const Stock& s) const;
	friend std::ostream& operator<<(std::ostream& os, const Stock& st);
};

#endif