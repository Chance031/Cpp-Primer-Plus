// Q. TCL 사는 피자 분석 서비스를 대행하고 있다. 정밀 분석을 위한 기초 자료로 각 피자에 대해서 다음과 같은 정보를 기록해야 한다.
// - 피자 회사의 이름(여러 단어로 된 이름일 수도 있다)
// - 피자의 지름
// - 피자의 중량
// 이러한 정보를 저장할 수 있는 구조체 템플릿을 설계하고, 그 구조체형의 변수를 사용하는 프로그램을 작성하라. 위에 열거한 세 가지 정보 항목을 사용자에게 입력할 것을 요구해야 하고, 입력한 정보를 출력해야 한다. cin(또는 cin의 메서드)과 cout을 사용하라.

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
	TCL pizza;

	std::cout << "피자 회사의 이름을 입력하시오: ";
	std::getline(std::cin, pizza.brand_name);

	std::cout << "피자의 지름을 입력하시오: ";
	std::cin >> pizza.diameter;

	std::cout << "피자의 중량을 입력하시오: ";
	std::cin >> pizza.weight;

	std::cout << "피자 회사의 이름: ";
	std::cout << pizza.brand_name << std::endl;

	std::cout << "피자의 지름: ";
	std::cout << pizza.diameter << std::endl;

	std::cout << "피자의 중량: ";
	std::cout << pizza.weight << std::endl;

	return 0;
}