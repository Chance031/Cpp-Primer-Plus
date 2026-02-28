// Q. T형 항목들을 원소로 가진 배열과, 그 배열의 원소 개수를 나타내는 정수를 매개변수로 취하고, 그 배열에서 가장 큰 항목을 리턴하는 템플릿 함수 maxn()을 작성하라.
// int형 값 6개를 가진 배열과, double형 값 4개를 가진 배열에 대해 그 템플릿 함수를 사용하는 프로그램을 작성하여 이것을 테스트하라.
// 또한 이 프로그램은 char를 지시하는 포인터의 배열과, 포인터의 개수를 매개변수로 취하고, 가장 긴 문자열의 주소를 리턴하는 특수화를 제공해야 한다.
// 여러 개의 문자열이 가장 긴 길이를 갖는 것으로 나온다면, 가장 먼저 나오는 문자열의 주소를 리턴해야 한다. 5개의 문자열 포인터를 가진 배열을 사용하여 그 특수화를 테스트하라.

#include <iostream>
#include <cstring>

template <typename T>
T maxn(T* arr, int n);

template <> char* maxn(char* arr[], int n);

int main()
{
	int num_i[6] = { 1, 3, 5, 6, 4, 2 };
	double num_d[4] = { 2.6, 3.8, 1.7, 3.9 };
	char* pStr[5] = {
		"Seong-il Yoon",
		"Technical Communication Laboratory",
		"Technical Editor",
		"C++ Primer Plus Fourth Edition",
		"Correctness is another name of TCL"
	};

	std::cout << "int형: " << maxn(num_i, 6) << std::endl;
	std::cout << "double형: " << maxn(num_d, 4) << std::endl;

	std::cout << "\n문자열 중 가장 긴 것: " << maxn(pStr, 5) << std::endl;

	std::cout << "프로그램을 종료합니다.\n";

	return 0;
}

template<typename T>
T maxn(T* arr, int n)
{
	T num = arr[0];

	for (int i = 0; i < n - 1; ++i)
	{
		if (num < arr[i + 1])
			num = arr[i + 1];
	}

	return num;
}

template<>
char* maxn(char* arr[], int n)
{
	char* size = arr[0];

	for (int i = 0; i < n; ++i)
	{
		if (strlen(size) >= strlen(arr[i]))
			size = size;
		else
			size = arr[i];

	}

	return size;
}