#include <iostream>
#include "namesp.h"

namespace SALES
{
	Sales::Sales()
	{
		for (int i = 0; i < QUARTERS; ++i)
			sales[i] = 0.0;
		average = 0.0;
		max = 0.0;
		min = 0.0;
	}

	Sales::Sales(const double ar[], int n)
	{
		double sum = 0.0;

		int actual = (n > QUARTERS) ? QUARTERS : n;

		for (int i = 0; i < QUARTERS; ++i)
		{
			sales[i] = (i < actual) ? ar[i] : 0.0;
			sum += sales[i];

			if (i == 0)
				min = max = sales[i];
			else if (i < actual)
			{
				if (sales[i] < min)
					min = sales[i];
				if (sales[i] > max)
					max = sales[i];
			}
		}
		average = (actual > 0) ? (sum / actual) : 0.0;
	}

	void Sales::setSales()
	{
		double temp_ar[QUARTERS];
		std::cout << "분기 판매액을 입력하십시오:\n";
		for (int i = 0; i < QUARTERS; ++i)
		{
			std::cout << "#" << i + 1 << " 분기: ";
			if (!(std::cin >> temp_ar[i]))
			{
				std::cin.clear();
				while (std::cin.get() != '\n') continue;
				std::cout << "오류를 발견하였습니다.\n";
				break;
			}
		}
		*this = Sales(temp_ar, QUARTERS);
	}

	void Sales::showSales() const
	{
		for (int i = 0; i < QUARTERS; ++i)
		{
			std::cout << "#" << i + 1 << " 분기 판매액: " << sales[i] << std::endl;
		}

		std::cout << "max		: " << max << std::endl;
		std::cout << "min		: " << min << std::endl;
		std::cout << "average	: " << average << std::endl;
	}
}