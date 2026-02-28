// Q. 템플릿 함수가 배열의 내용을 출력하는 대신 배열 내용의 합을 리턴하는 SumArray()라 불리는 두 개의 템플릿 함수를 사용하도록 Listing 8.14를 수정하라.
// 이제 프로그램은 재산 목록의 전체 개수와 모든 채무의 합계를 보고해야 한다.(역자는 Microsoft Visual C++ .NET에서 Listing 8.14를 수정한 프로그램을 컴파일하는 데 실패했다.)

#include <iostream>

template <typename T>
int SumArray(T arr[], int n);

template <typename T>
double SumArray(T* arr[], int n);

struct debts
{
	char name[50];
	double amount;
};

int main(void)
{
	int things[6] = { 13, 31, 103, 301, 310, 130 };
	struct debts mr_E[3] =
	{
		{ "Ima Wolfe", 2400 },
		{ "Ura Foxe", 1300 },
		{ "Iby Stout", 1800 }
	};

	double* pd[3];

	for (int i = 0; i < 3; i++)
		pd[i] = &mr_E[i].amount;

	std::cout << "Mr. E의 재산 합계: " << SumArray(things, 6) << std::endl;
	std::cout << "Mr. E의 채무 합계: " << SumArray(pd, 3) << std::endl;

	std::cout << "\n프로그램 종료.\n";

	return 0;
}

template<typename T>
int SumArray(T arr[], int n)
{
	int total = 0;

	for (int i = 0; i < n; i++)
		total += arr[i];

	return total;
}

template<typename T>
double SumArray(T* arr[], int n)
{
	double total = 0;

	for (int i = 0; i < n; i++)
		total += *arr[i];

	return total;
}