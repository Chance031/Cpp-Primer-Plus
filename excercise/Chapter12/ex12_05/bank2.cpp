// Q. 히서 은행은 ATM 이용 고객들이 1분 이상 줄을 서서 기다리지 않는다는 것을 실증하는 연구를 실시했다. Listing 12.10의 시뮬레이션을 사용하여, 평균 대기 시간을 1분으로 하려면, 시간당 평균 고객 수는 얼마가 될까? (적어도 100시간의 시뮬레이션 시간을 사용하라.) (queue.h, queue.cpp, bank2.cpp)

#include <iostream>
#include <cstdlib>
#include <ctime>
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
		std::cin.ignore();

		std::cout << "큐의 최대 길이를 입력하십시오: ";
	}

	std::cout << "시뮬레이션 시간 수를 입력하십시오(100시간 이상): ";
	int hours;
	while (!(std::cin >> hours) || hours < 100)
	{
		std::cin.clear();
		std::cin.ignore();

		std::cout << "시뮬레이션 시간 수를 입력하십시오(100시간 이상): ";
	}

	long cyclelimit = MIN_PER_HR * hours;

	double perhour;
	double min_per_cust;
	double avg_wait_time = 0.0;

	Item temp;
	long turnaways;
	long customers;
	long served;
	long sum_line;
	int wait_time;
	long line_wait;

	for (perhour = 1; avg_wait_time < 1.0; ++perhour)
	{
		Queue line(qs);

		min_per_cust = MIN_PER_HR / perhour;
		turnaways = 0;
		customers = 0;
		served = 0;
		sum_line = 0;
		wait_time = 0;
		line_wait = 0;

		for (int cycle = 0; cycle < cyclelimit; cycle++)
		{
			if (newcustomer(min_per_cust))
			{
				if (line.isfull())
					turnaways++;
				else
				{
					customers++;
					temp.set(cycle);
					line.enqueue(temp);
				}
			}
			if (wait_time <= 0 && !line.isempty())
			{
				line.dequeue(temp);
				wait_time = temp.ptime();
				line_wait += cycle - temp.when();
				served++;
			}
			if (wait_time > 0)
				wait_time--;
			sum_line += line.queuecount();
		}

		if (customers > 0)
		{
			std::cout << "  시간당 평균 고객 수: " << perhour << std::endl;
			std::cout << " 큐에 줄을 선 고객 수: " << customers << std::endl;
			std::cout << "거래를 처리한 고객 수: " << served << std::endl;
			std::cout << "  발길을 돌린 고객 수: " << turnaways << std::endl;
			std::cout << "       평균 큐의 길이: ";
			std::cout.precision(2);
			std::cout.setf(std::ios_base::fixed, std::ios_base::floatfield);
			std::cout.setf(std::ios_base::showpoint);
			std::cout << (double)sum_line / cyclelimit << '\n';
			std::cout << "       평균 대기 시간: " << (double)line_wait / served << "분\n";
		}
		else
			std::cout << "고객이 한 명도 없습니다!\n";

		avg_wait_time = (double)line_wait / served;

	}

	std::cout << "\n" << "시간당 평균 고객 수가 " << (int)perhour - 1 << "명 이상이 되면,\n" << "평균 대기 시간이 1분을 초과하게 됩니다.\n";

	return 0;
}

bool newcustomer(double x)
{
	return (std::rand() * x / RAND_MAX < 1);
}