// Q. array 클래스를 사용하지 않고 Listing 7.15를 다시 해 본다. 아래 두 가지 경우로 진행한다.
// a. 계절명에 대해 const char *로 배열을 사용하여라. 그리고, 그 비용에 대하여 double로 array 객체를 사용하여라.
// b. 계절명에 대해 const char *로 배열을 사용하여라. 그리고, 그 비용에 대하여 double로 배열을 사용하며, 그 배열을 단일 멤버로 가지는 구조체를 사용하라. (본 설계는 array 클래스의 기초 설계와 유사하다.)

#include <iostream>

const int Seasons = 4;
const char* Sname[Seasons] = { "Spring", "Summer", "Fall", "Winter" };

void fill(double[]);
void show(const double[]);

int main()
{
	double expenses[4];

	fill(expenses);
	show(expenses);

	return 0;
}

void fill(double pa[])
{
	for (int i = 0; i < Seasons; i++)
	{
		std::cout << Sname[i] << "에 소요되는 비용: ";
		std::cin >> pa[i];
	}
}

void show(const double da[])
{
	double total = 0.0;
	std::cout << "\n계절별 비용\n";
	for (int i = 0; i < Seasons; i++)
	{
		std::cout << Sname[i] << " : $" << da[i] << std::endl;
		total += da[i];
	}
	std::cout << "총 비용 : $" << total << std::endl;
}