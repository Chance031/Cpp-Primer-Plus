#ifndef WINEC_H_
#define WINEC_H_

#include <string>
#include <valarray>

#include "pair.h"

class Wine : private std::string, private Pair<std::valarray<int>, std::valarray<int>>
{
private:
	typedef std::valarray<int> ArrayInt;
	typedef Pair<ArrayInt, ArrayInt> PairArray;
	int years;

public:
	Wine();
	Wine(const char* l, int y);
	Wine(const char* l, int y, const int yr[], const int bot[]);
	void GetBottles();
	void Show() const;
	const std::string& Label() const;
	int sum();
};

#endif