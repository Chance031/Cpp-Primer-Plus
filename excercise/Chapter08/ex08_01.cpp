// Q. 평상시에는 문자열의 주소를 하나의 매개변수로 취하여, 그 문자열을 한 번 출력하는 함수를 작성하라.
// 그러다가 0이 아닌 int형 값을 두 번째 매개변수로 제공하면, 그 시점에 도달할 때까지 그 함수가 호출되었던 횟수만큼 그 문자열을 반복해서 출력해야 한다.(문자열이 출력되는 횟수는 두 번째 매개변수의 값이 아니라 그 함수가 호출되었던 횟수와 같다.)
// 물론 이 함수는 거의 쓸모가 없다. 하지만 이것은 이 장에서 설명한 몇 가지 프로그래밍 기술을 사용할 것을 요구한다. 이들 함수를 사용하여 함수의 작동을 보여 주는 간단한 프로그램을 작성하라.

#include <iostream>

const int SIZE = 50;

void repeat_print(char* , int n = 0);

int main()
{
	char word[SIZE];
	int num = 0;

	std::cout << "문자열을 입력하십시오: ";
	std::cin.getline(word, SIZE);

	repeat_print(word);

	std::cout << "반복될 횟수를 입력해주십시오: ";
	if (!(std::cin >> num))
	{
		std::cout << "오류가 발생했습니다.\n";

		return 1;
	}

	for (int i = 0; i < num; ++i)
		repeat_print(word);

	repeat_print(word, 30);

	return 0;
}

void repeat_print(char* str, int n)
{
	static int called = 0;
	called++;

	if (n == 0)
	{
		std::cout << called << "번째 호출 : " << str << std::endl;
	}
	else
	{
		for (int i = 0; i < called; ++i)
			std::cout << called << "번째 호출 : " << str << std::endl;
	}
}