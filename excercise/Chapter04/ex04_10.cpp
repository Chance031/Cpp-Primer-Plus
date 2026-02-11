// Q. 40야드(혹은 40미터) 달리기 결과에 대하여 세 번을 입력할 수 있는 프로그램을 작성하고, 그 횟수와 평균을 디스플레이하시오. 그 데이터를 저장하기 위해 array 객체를 사용하시오.(array 객체 사용이 어려울 경우엔 내재 배열을 사용하시오.)

#include <iostream>
#include <array>

int main()
{
	std::array<double, 3> record;
	int times = 0;

	std::cout << "첫번째 달리기 결과를 입력하시오: ";
	if (!(std::cin >> record[0]))
	{
		std::cout << "숫자를 입력해 주십시오.\n";

		return 1;
	}
	times++;

	std::cout << "두번째 달리기 결과를 입력하시오: ";
	if (!(std::cin >> record[1]))
	{
		std::cout << "숫자를 입력해 주십시오.\n";

		return 1;
	}
	times++;

	std::cout << "세번째 달리기 결과를 입력하시오: ";
	if (!(std::cin >> record[2]))
	{
		std::cout << "숫자를 입력해 주십시오.\n";

		return 1;
	}
	times++;

	double average = (record[0] + record[1] + record[2]) / times;

	std::cout << "달리기 횟수: " << times << std::endl;
	std::cout << "1회차: " << record[0] << std::endl;
	std::cout << "2회차: " << record[1] << std::endl;
	std::cout << "3회차: " << record[2] << std::endl;
	std::cout << "평 균: " << average << std::endl;

	return 0;
}