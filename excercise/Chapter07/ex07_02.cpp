// Q. 골프 스코어를 최대 10개까지 입력할 것을 사용자에게 요구하여, 배열에 저장하는 프로그램을 작성하라. 10개의 스코어를 입력하기 전이라도 사용자가 입력을 끝낼 수 있어야 한다.
// 프로그램은 모든 스코어를 한 줄에 출력하고, 평균 스코어를 보고해야 한다. 입력, 출력, 평균 스코어 계산을 위해 세 가지 서로 다른 배열 처리 함수를 사용하라.

#include <iostream>

const int SIZE = 10;

int score_input(int*, int);
void score_output(int*, int);
void score_average(int*, int);

int main()
{
	int score[SIZE];
	int count = 0;

	std::cout << "숫자 이외의 값을 입력하면 입력이 종료됩니다.\n";

	count = score_input(score, SIZE);

	score_output(score, count);

	score_average(score, count);

	std::cout << "프로그램을 종료합니다.\n";

	return 0;
}

int score_input(int ar[], int n)
{
	int count = 0;

	std::cout << "입력: ";

	for (int i = 0; i < n; ++i)
	{
		if (!(std::cin >> ar[i]))
		{
			std::cout << "입력이 종료됩니다.\n";

			break;
		}

		count++;
	}

	return count;
}

void score_output(int ar[], int n)
{
	std::cout << "출력: ";

	for (int i = 0; i < n; ++i)
	{
		std::cout << ar[i] << " ";
	}

	std::cout << "\n";
}

void score_average(int ar[], int n)
{
	double average = 0.0;

	for (int i = 0; i < n; ++i)
	{
		average += ar[i];
	}

	average = average / double(n);

	std::cout << "평균: " << average << "\n";
}