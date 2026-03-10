// Q. 목표 거리와 총 걸음 수를 시도할 때마다 그 결과를 보고하지 말고, N번 시도했을 때의 최고, 최저, 평균 걸음 수를 보고하도록 Listing 11.15를 수정하라. N은 사용자가 입력하는 정수이다. (vector.h, vector.cpp, usevector.cpp)

#include <iostream>
#include <cstdlib>
#include <ctime>
#include "vector.h"

int main()
{
	using VECTOR::Vector;
	
	srand(time(0));

	int N;
	double target;
	double dstep;


	std::cout << "시도할 횟수(N)를 입력하십시오(끝내려면 q): ";
	while (std::cin >> N && N > 0)
	{

		std::cout << "목표 거리를 입력하십시오: ";
		if (!(std::cin >> target))
			break;

		std::cout << "보폭을 입력하십시오: ";
		if (!(std::cin >> dstep))
			break;

		unsigned long max_steps = 0;
		unsigned long min_steps = 0;
		unsigned long total_steps = 0;

		for (int i = 0; i < N; ++i)
		{
			Vector step;
			Vector result(0.0, 0.0);
			unsigned long steps = 0;

			while (result.magval() < target)
			{
				double direction = rand() % 360;
				step.reset(dstep, direction, Vector::POL);
				result = result + step;
				steps++;
			}

			total_steps += steps;

			if (i == 0)
			{
				min_steps = steps;
				max_steps = steps;
			}
			else
			{
				if (steps > max_steps)
					max_steps = steps;
				if (steps < min_steps)
					min_steps = steps;
			}
		}

		std::cout << "\n--- " << N << "번 시도 결과 ---\n";
		std::cout << "최고 걸음 수: " << max_steps << "\n";
		std::cout << "최저 걸음 수: " << min_steps << "\n";
		std::cout << "평균 걸음 수: " << static_cast<double>(total_steps) / N << "\n";

		std::cout << "시도할 횟수(N)를 입력하십시오(끝내려면 q): ";
	}

	std::cout << "프로그램을 종료합니다.\n";
	std::cin.clear();
	while (std::cin.get() != '\n')
		continue;

	return 0;
}