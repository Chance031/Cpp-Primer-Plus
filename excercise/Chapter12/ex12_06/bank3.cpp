// Q. 히서 은행은, ATM을 하나 더 추가했을 때에는 상황이 어떻게 변하는지 알고 싶어한다. 두 개의 큐를 사용하도록 이 장에 있는 시뮬레이션을 수정하라. 제2 큐보다 제1 큐에 대기하고 있는 고객 수가 적으면, 고객은 줄이 짧은 제1 큐에 줄을 서고, 그렇지 않으면 고객은 제2 큐에 줄을 선다고 가정한다.
// 평균 대기 시간을 1분으로 하면, 시간당 평균 고객 수는 얼마가 될까? (이것은 비선형 문제이다. ATM 대수를 2배로 늘린다고 해서, 최고 대기 시간이 1분인 시간당 처리 고객의 수가 2배가 되지 않는다.) (queue.h, queue.cpp, bank3.cpp)

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <limits>
#include "queue.h"

const int MIN_PER_HR = 60;

bool newcustomer(double x);

int main()
{
	std::srand(std::time(0));

	std::cout << "사례 연구: 히서 은행의 ATM\n";
	std::cout << "큐의 최대 길이를 입력하십시오: ";

	int qs;
	while (!(std::cin >> qs))
	{
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

		std::cout << "큐의 최대 길이를 입력하십시오: ";
	}

	std::cout << "시뮬레이션 시간 수를 입력하십시오(100시간 이상): ";
	int hours;
	while (!(std::cin >> hours) || hours < 100)
	{
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

		std::cout << "시뮬레이션 시간 수를 입력하십시오(100시간 이상): ";
	}

	long cyclelimit = MIN_PER_HR * hours;

	double perhour;
	double min_per_cust;
	double avg_wait_time = 0.0;

	Item temp;
	long turnaways;
	long customers;
	long served1, served2;
	long sum_line1, sum_line2;
	int wait_time1, wait_time2;
	long line_wait1, line_wait2;

	for (perhour = 1; avg_wait_time < 1.0; ++perhour)
	{
		Queue line1(qs);
		Queue line2(qs);

		min_per_cust = MIN_PER_HR / perhour;
		turnaways = 0;
		customers = 0;
		served1 = served2 = 0;
		sum_line1 = sum_line2 = 0;
		wait_time1 = wait_time2 = 0;
		line_wait1 = line_wait2 = 0;

		for (int cycle = 0; cycle < cyclelimit; cycle++)
		{
			if (newcustomer(min_per_cust))
			{
				if (line1.isfull() && line2.isfull())
					turnaways++;
				else
				{
					customers++;
					temp.set(cycle);
					if (line1.queuecount() < line2.queuecount())
						line1.enqueue(temp);
					else
						line2.enqueue(temp);
				}
			}

			if (wait_time1 <= 0 && !line1.isempty())
			{
				line1.dequeue(temp);
				wait_time1 = temp.ptime();
				line_wait1 += cycle - temp.when();
				served1++;
			}
			if (wait_time2 <= 0 && !line2.isempty())
			{
				line2.dequeue(temp);
				wait_time2 = temp.ptime();
				line_wait2 += cycle - temp.when();
				served2++;
			}

			if (wait_time1 > 0)
				wait_time1--;
			if (wait_time2 > 0)
				wait_time2--;

			sum_line1 += line1.queuecount();
			sum_line2 += line2.queuecount();
		}

		long total_served = served1 + served2;

		if (customers > 0)
		{
			std::cout << "  시간당 평균 고객 수: " << perhour << std::endl;
			std::cout << " 큐에 줄을 선 고객 수: " << customers << std::endl;
			std::cout << "거래를 처리한 고객 수: " << served1 + served2 << std::endl;
			std::cout << "  발길을 돌린 고객 수: " << turnaways << std::endl;
			std::cout << "       평균 큐의 길이: ";
			std::cout.precision(2);
			std::cout.setf(std::ios_base::fixed, std::ios_base::floatfield);
			std::cout.setf(std::ios_base::showpoint);
			std::cout << (double)(sum_line1 + sum_line2) / (2.0 * cyclelimit) << '\n';
			if (total_served > 0)
				std::cout << "       평균 대기 시간: " << (double)(line_wait1 + line_wait2) / total_served << "분\n";
			else
				std::cout << "       평균 대기 시간: 측정 불가(처리된 고객 없음)\n";
		}
		else
			std::cout << "고객이 한 명도 없습니다!\n";

		if (total_served > 0)
			avg_wait_time = (double)(line_wait1 + line_wait2) / total_served;
		else
			avg_wait_time = 0.0;
	}

	std::cout << "\n" << "자동 지급기를 2대 설치했을 경우에,\n" << "시간당 평균 고객 수가 " << (int)perhour - 1 << "명 이상이 되면,\n" << "평균 대기 시간이 1분을 초과하게 됩니다.\n";

	return 0;
}

bool newcustomer(double x)
{
	return (std::rand() * x / RAND_MAX < 1);
}