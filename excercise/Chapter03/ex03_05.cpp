// Q. 세계 인구와 미국(또는 본인이 희망하는 국가)의 현재 인구수를 요구하는 프로그램을 작성하라. 작성한 정보를 long long형 변수에 저장하라. 전 세계 인구에서 미국(또는 본인이 희망하는 국가) 인구수가 차지하는 비중을 나타내 보아라. 이때, 결과물은 다음과 같은 형태로 나타난다.
// [세계 인구수를 입력하시오: 6898758899]
// [미국의 인구수를 입력하시오: 310783781]
// [세계 인구수에서 미국이 차지하는 비중은 4.50492%이다.]

#include <iostream>

int main()
{
	long long world_population;
	long long country_population;

	std::cout << "세계 인구수를 입력하시오: ";
	if(!(std::cin>> world_population))
	{
		std::cout << "숫자를 입력하시오." << std::endl;
		return 1;
	}

	std::cout << "미국의 인구수를 입력하시오: ";
	if(!(std::cin>> country_population))
	{
		std::cout << "숫자를 입력하시오." << std::endl;
		return 1;
	}

	long double ratio_population = (100.0 * country_population) / world_population;

	std::cout << "세계 인구수에서 미국이 차지하는 비중은 " << ratio_population << "%이다." << std::endl;

	return 0;
}