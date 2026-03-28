// error2.cpp -- 에러 코드를 리턴한다
#include <iostream>
#include <cstdlib>						// (또는 float.h) DBL_MAX를 위해

bool hmean(double a, double b, double* ans);

int main()
{
	double x, y, z;

	std::cout << "두 수를 입력하십시오: ";
	while (std::cin >> x >> y)
	{
		if (hmean(x, y, &z))
			std::cout << x << ", " << y << "의 조화평균은 " << z << "입니다.\n";
		else
			std::cout << "서로 부정인 두 수의 조화평균은 구할 수 없다.\n";
		std::cout << "다른 두 수를 입력하십시오 (끝내려면 q): ";
	}
	std::cout << "프로그램을 종료합니다.\n";
	return 0;
}

bool hmean(double a, double b, double* ans)
{
	if (a == -b)
	{
		*ans = DBL_MAX;
		return false;
	}
	else
	{
		*ans = 2.0 * a * b / (a + b);
		return true;
	}
}