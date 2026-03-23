// Q. baseDMA - lacksDMA - hasDMA 클래스 상속 체계를, 세 클래스가 모두 하나의 추상화 기초 클래스로부터 파생되도록 수정하라. Listing 13.10과 비슷한 프로그램을 사용하여 그 결과를 테스트하라. 
// 즉, 추상화 기초 클래스를 지시하는 포인터들의 배열을 사용해야 하고, 어떤 객체형들을 생성할 것인지를 사용자가 실행 시에 결정할 수 있어야 한다. 데이터를 출력하는 가상 메서드 View()를 클래스 정의에 추가하라. (dmaabc.h, dmaabc.cpp, pe13-03.cpp) 

#include <iostream>
#include "dmaabc.h"
#include <limits>

const int GOODS = 4;
const int LEN = 40;

int main()
{
	dmaABC* p_goods[GOODS];
	char temp_label[LEN];
	int temp_rating;
	char kind;

	for (int i = 0; i < GOODS; ++i)
	{
		std::cout << "상표의 이름을 입력하십시오: ";
		std::cin.getline(temp_label, 20);
		
		std::cout << "등급을 입력하십시오: ";
		if (!(std::cin >> temp_rating))
		{
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

			std::cout << "등급을 입력하십시오: ";
		}
		
		std::cout << "baseDMA : 1,	lacksDMA : 2,	hasDMA : 3\n";
		std::cout << "명령어를 선택해 주십시오: ";

		while (std::cin >> kind && ((kind != '1' && kind != '2' && kind != '3')))
			std::cout << "1, 2, 3 중 하나를 입력하십시오: ";

		if (kind == '1')
			p_goods[i] = new baseDMA(temp_label, temp_rating);
		else if(kind == '2')
		{
			char temp_color[LEN];
			
			std::cout << "색상을 입력하십시오: ";
			std::cin >> temp_color;

			p_goods[i] = new lacksDMA(temp_color, temp_label, temp_rating);
		}
		else
		{
			char temp_style[LEN];
			
			std::cout << "스타일을 입력하십시오: ";
			std::cin >> temp_style;

			p_goods[i] = new hasDMA(temp_style, temp_label, temp_rating);
		}

		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	}

	for (int i = 0; i < GOODS; ++i)
	{
		p_goods[i]->View();
		std::cout << std::endl;
	}

	for (int i = 0; i < GOODS; ++i)
	{
		delete p_goods[i];
	}

	std::cout << "프로그램을 종료합니다.\n";
	return 0;
}