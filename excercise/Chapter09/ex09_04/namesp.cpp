#include <iostream>
#include "namesp.h"

namespace SALES
{
	void setSales(Sales& s, const double ar[], int n)
	{
		double temp = 0;

		if (n > QUARTERS)
			n = QUARTERS;

		for (int i = 0; i < n; ++i)
			s.sales[i] = ar[i];

		s.min = s.sales[0];
		for (int i = 0; i < n; ++i)
		{
			if (s.min < s.sales[i])
				s.min = s.min;
			else
				s.min = s.sales[i];
		}

		s.max = s.sales[0];
		for (int i = 0; i < n; ++i)
		{
			if (s.max < s.sales[i])
				s.max = s.sales[i];
			else
				s.max = s.max;
		}

		for (int i = 0; i < n; ++i)
			temp += s.sales[i];

		s.average = temp / n;
	}

	void setSales(Sales& s)
	{
		double temp = 0;

		for (int i = 0; i < QUARTERS; ++i)
		{
			std::cout << "#" << i + 1 << " 분기 판매액을 입력하십시오: ";
			if (!(std::cin >> s.sales[i]))
			{
				std::cout << "입력에 오류가 발생하였습니다.\n";

				return;
			}
		}

		s.min = s.sales[0];
		for (int i = 0; i < QUARTERS; ++i)
		{
			if (s.min < s.sales[i])
				s.min = s.min;
			else
				s.min = s.sales[i];
		}

		s.max = s.sales[0];
		for (int i = 0; i < QUARTERS; ++i)
		{
			if (s.max < s.sales[i])
				s.max = s.sales[i];
			else
				s.max = s.max;
		}

		for (int i = 0; i < QUARTERS; ++i)
			temp += s.sales[i];

		s.average = temp / QUARTERS;
	}

	void showSales(const Sales& s)
	{
		for (int i = 0; i < QUARTERS; ++i)
		{
			std::cout << "#" << i + 1 << " 분기 판매액: " << s.sales[i] << std::endl;
		}

		std::cout << "max		: " << s.max << std::endl;
		std::cout << "min		: " << s.min << std::endl;
		std::cout << "average	: " << s.average << std::endl;
	}
}