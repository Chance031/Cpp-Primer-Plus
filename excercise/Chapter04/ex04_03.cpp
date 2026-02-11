// Q. 퍼스트 네임(이름)과 라스트 네임(성)을 사용자에게 입력하도록 요청하고, 라스트 네임, 콤마, 빈칸, 퍼스트 네임으로 이루어지는 제3의 문자열을 구성하고, 저장하고, 출력하는 프로그램을 작성하라. char형 배열과 cstring 헤더 파일이 제공하는 함수들을 사용하라. 실행 예는 다음과 같아야 한다.
// [퍼스트 네임(이름)을 입력하시오: Seong il]
// [라스트 네임(성)을 입력하시오: Yoon]
// [하나의 문자열로 만들면: Yoon, Seong il]

#include <iostream>
#include <cstring>

int main()
{
	const int SIZE = 20;
	char first_name[SIZE];
	char last_name[SIZE];

	std::cout << "퍼스트 네임(이름)을 입력하시오: ";
	std::cin.getline(first_name, SIZE);

	std::cout << "라스트 네임(성)을 입력하시오: ";
	std::cin >> last_name;

	char name[SIZE * 2];
	strcpy(name, last_name);
	strcat(name, ", ");
	strcat(name, first_name);

	std::cout << "하나의 문자열로 만들면: " << name << "\n";

	return 0;
}