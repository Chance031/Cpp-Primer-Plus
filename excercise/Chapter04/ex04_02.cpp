// Q. char형 배열 대신에 C++의 string 클래스를 사용하여 Listing 4.4를 다시 작성하라.

#include <iostream>
#include <string>

int main()
{
	std::string name;
	std::string dessert;

	std::cout << "이름을 입력하십시오:\n";
	std::getline(std::cin, name);
	std::cout << "좋아하는 디저트를 입력하십시오:\n";
	std::getline(std::cin, dessert);
	std::cout << "맛있는 " << dessert;
	std::cout << " 디저트를 준비하겠습니다." << name << "님!\n";

	return 0;
}