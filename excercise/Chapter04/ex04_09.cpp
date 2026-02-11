// Q. 연습 6을 다시 하되, 세 개의 CandyBar 구조체를 원소로 가지는 배열을 선언하는 대신에 new를 사용하여 그 배열을 동적으로 대입하라.

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
	CandyBar* snacks = new CandyBar[3];

	snacks[0] = { "Chocolate", 100, 540 };
	snacks[1] = { "Candy", 100, 360 };
	snacks[2] = { "Jelly", 100, 266 };

	std::cout << "상표명: " << snacks[0].brand_name << std::endl;
	std::cout << "중  량: " << snacks[0].weight << std::endl;
	std::cout << "칼로리: " << snacks[0].kcal << std::endl << std::endl;

	std::cout << "상표명: " << snacks[1].brand_name << std::endl;
	std::cout << "중  량: " << snacks[1].weight << std::endl;
	std::cout << "칼로리: " << snacks[1].kcal << std::endl << std::endl;

	std::cout << "상표명: " << snacks[2].brand_name << std::endl;
	std::cout << "중  량: " << snacks[2].weight << std::endl;
	std::cout << "칼로리: " << snacks[2].kcal << std::endl;

	delete[] snacks;
	return 0;
}