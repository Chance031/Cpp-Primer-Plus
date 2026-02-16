// Q. double형의 배열에 기부금을 10개까지 읽어들이는 프로그램을 작성하라.(또는, 원한다면 array 템플릿 객체를 사용하라.) 10개가 입력되기 전이라도 수가 아닌것이 입력되면 프로그램이 종료되어야 한다.
// 프로그램은 입력된 기부금들의 평균과, 평균보다 큰 기부금이 배열에 몇 개 들어 있는지 보고해야 한다.

#include <iostream>

const int SIZE = 10;

int main()
{
	double donation[SIZE];
	double count = 0;
	double sum = 0;
	double average = 0;
	int bigger = 0;

	for (int i = 0; i < SIZE; ++i)
	{
		std::cout << i + 1<< "번 기부금: ";
		if (!(std::cin >> donation[i]))
		{
			std::cout << "숫자 이외의 것이 입력되었습니다.\n";

			break;
		}

		++count;
		sum += donation[i];
	}

	average = sum / count;

	std::cout << "\n입력이 완료되었습니다.\n";
	std::cout << "평균: " << average << "\n";

	for (int i = 0; i < count; ++i)
	{
		if (donation[i] > average)
			bigger++;
	}

	std::cout << "평균보다 큰 기부금은 " << bigger << "개 있습니다.\n";

	return 0;
}