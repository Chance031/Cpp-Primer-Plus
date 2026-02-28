// Q. T형 항목 5개를 원소로 가진 배열을 매개변수로 취하고, 그 배열에서 가장 큰 항목을 찾아 리턴하는 템플릿 함수 max5()를 작성하라. (크기가 고정되어 있으므로 매개변수로 전달하는 대신 루프에 직접 코딩해 넣을 수도 있다.)
// int형 값이 5개를 가진 배열과, double형 값5개를 가진 배열에 대해 그 템플릿 함수를 사용하는 프로그램을 작성하여 이것을 테스트하라.

#include <iostream>

template <typename T>
T max5(T* arr);

int main()
{
	int arr_i[5] = { 2, 3, 5, 1, 4 };
	double arr_d[5] = { 2.3, 5.1, 3.6, 8.4, 1.6 };

	std::cout << "가장 큰 수: " << max5(arr_i) << std::endl;
	std::cout << "가장 큰 수: " << max5(arr_d) << std::endl;

	return 0;
}

template<typename T>
T max5(T* arr)
{
	T bigger = arr[0];

	for (int i = 0; i < 4; ++i)
	{
		if (bigger < arr[i + 1])
			bigger = arr[i + 1];
		else if (bigger > arr[i + 1])
			bigger = bigger;
	}

	return bigger;
}