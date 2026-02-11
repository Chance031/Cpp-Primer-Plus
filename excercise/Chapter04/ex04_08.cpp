// Q. 연습 7을 다시 하되, 이번에는 구조체 변수를 선언하는 대신에 new를 사용하여 구조체를 대입하라. 그리고 프로그램이 피자 회사의 이름보다 피자의 지름을 먼저 요구하게 하라.

#include <iostream>
#include <string>

struct TCL
{
	std::string brand_name;
	int diameter;
	int weight;
};

int main()
{
	TCL* pizza = new TCL;

	std::cout << "피자의 지름을 입력하시오: ";
	std::cin >> pizza->diameter;
	std::cin.ignore();

	std::cout << "피자 회사의 이름을 입력하시오: ";
	std::getline(std::cin, pizza->brand_name);

	std::cout << "피자의 중량을 입력하시오: ";
	std::cin >> pizza->weight;

	std::cout << "피자 회사의 이름: ";
	std::cout << pizza->brand_name << std::endl;

	std::cout << "피자의 지름: ";
	std::cout << pizza->diameter << std::endl;

	std::cout << "피자의 중량: ";
	std::cout << pizza->weight << std::endl;

	delete pizza;
	return 0;
}