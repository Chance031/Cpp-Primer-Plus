// Q. 사용자에게 본인의 이름을 입력하도록 요구하는 프로그램을 작성하시오. 또한 그 프로그램은 화면에 사용자의 나이를 월수로 나타내도록 합니다.
// [Enter your age : 29]
// 이때 당신의 나이를 월수로 나타낼 경우 348입니다.

#include <iostream>

int CalculateMonths(int age);

int main()
{
	int age;
	std::cout << "Enter your age: ";
	std::cin >> age;
	
	int result = CalculateMonths(age);

	std::cout << "이때 당신의 나이를 월수로 나타낼 경우 " << result << "입니다." << std::endl;

	return 0;
}

int CalculateMonths(int age)
{
	return age * 12;
}