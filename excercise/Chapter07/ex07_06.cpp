// Q. 다음과 같은 함수를 사용하는 프로그램을 작성하라.
// Fill_array() 는 double형 값들의 배열 이름과 배열 크기를 매개변수로 취한다. 이 함수는 배열에 저장할 double형 값들을 입력하라는 프롬프트를 표시한다. 배열이 가득 찼거나, 숫자가 아닌 것이 입력되면 입력받기를 멈추고, 그때까지 입력받은 값을 개수를 리턴한다.
// Show_array()는 double형 값들의 배열 이름과 배열 크기를 매개변수로 취하고, 배열의 내용을 출력한다.
// Reverse_array()는 double형 값들의 배열 이름과 배열 크기를 매개변수로 취하고, 배열에 저장된 값들의 순서를 뒤집는다.
// 프로그램은 이 함수들을 사용하여 배열을 채우고, 배열을 출력하고, 배열의 저장 순서를 뒤집고, 배열을 출력하고, 배열의 첫 번째 원소와 마지막 원소를 제외한 모든 원소의 순서를 뒤집고, 배열의 내용을 출력해야 한다.

#include <iostream>

int Fill_array(double[], int);
void Show_array(double[], int);
void Reverse_array(double[], int);

int main()
{
	int size = 0;
	int count = 0;

	std::cout << "배열의 크기를 입력하십시오: ";
	if (!(std::cin >> size))
	{
		std::cout << "숫자가 아닌 것이 입력되었습니다.\n";

		return 1;
	}

	double* ar = new double[size];

	count = Fill_array(ar, size);

	Show_array(ar, count);

	Reverse_array(ar, count);

	Show_array(ar, count);

	Reverse_array(ar + 1, count - 2);

	Show_array(ar, count);

	std::cout << "프로그램이 종료됩니다.\n";

	delete[] ar;
	return 0;
}

int Fill_array(double ar[], int n)
{
	int count = 0;

	std::cout << "배열의 값을 입력하시오(숫자가 아닌 것이 입력되면 종료):\n";

	for (int i = 0; i < n; ++i)
	{
		if (!(std::cin >> ar[i]))
		{
			std::cout << "숫자가 아닌 것이 입력되었습니다.\n";

			break;
		}

		count++;
	}

	return count;
}

void Show_array(double ar[], int n)
{
	std::cout << "배열의 값을 출력: ";

	for (int i = 0; i < n; ++i)
		std::cout << ar[i] << " ";

	std::cout << std::endl;
}

void Reverse_array(double ar[], int n)
{
	std::cout << "배열의 순서를 뒤집는다.\n";

	for (int i = 0, j = n - 1; i < j; ++i, --j)
	{
		double tmp = ar[i];
		ar[i] = ar[j];
		ar[j] = tmp;
	}
}