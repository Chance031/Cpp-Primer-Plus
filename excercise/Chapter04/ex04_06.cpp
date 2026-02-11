// Q. 연습 5에서 서술한 대로, CandyBar 구조체는 세 개의 멤버를 가지고 있다. 세 개의 CandyBar 구조체를 원소로 가지는 배열을 만들고, 그 배열의 구조체 원소들을 원하는 값으로 초기화한 다음, 각 구조체의 내용을 출력하는 프로그램을 작성하라.

#include <iostream>
#include <string>

struct CandyBar
{
	std::string brand_name;
	double weight;
	int kcal;
};

int main()
{
	CandyBar snacks[3] = { {"Chocolate", 100, 540},
						   {"Candy", 100, 360},
						   {"Jelly", 100, 266} };

	std::cout << "상표명: " << snacks[0].brand_name << std::endl;
	std::cout << "중  량: " << snacks[0].weight << std::endl;
	std::cout << "칼로리: " << snacks[0].kcal << std::endl << std::endl;

	std::cout << "상표명: " << snacks[1].brand_name << std::endl;
	std::cout << "중  량: " << snacks[1].weight << std::endl;
	std::cout << "칼로리: " << snacks[1].kcal << std::endl << std::endl;

	std::cout << "상표명: " << snacks[2].brand_name << std::endl;
	std::cout << "중  량: " << snacks[2].weight << std::endl;
	std::cout << "칼로리: " << snacks[2].kcal << std::endl;

	return 0;
}