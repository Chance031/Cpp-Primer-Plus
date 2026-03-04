// Q. 다음과 같은 구조체 선언이 주어진다.
// [struct chaff]
// [{]
// [	char dross[20];]
// [	int slag;]
// [};]
//
// 위치 지정 new를 사용하여 그러한 구조체 두 개짜리 배열을 버퍼에 넣는 프로그램을 작성하라. 그러고 나서 구조체들의 멤버에 값들을 대입하고(char형 배열에는 strcpy()를 사용한다), 루프를 사용하여 그 내용을 디스플레이하라.
// 한가지 방법은, Listing 9.10과 같이 버퍼에 정적 배열을 사용하는 것이다. 다른 한 가지 방법은, 보통의 new를 사용하여 버퍼를 대입하는 것이다.

#include <iostream>
#include <cstring>

const int BUF = 512;
char buffer[BUF];

struct chaff
{
	char dross[20];
	int slag;
};

void setArr(chaff& arr);
void showArr(chaff& arr);

int main()
{
	chaff* cha = new(buffer) chaff[2];

	for (int i = 0; i < 2; ++i)
	{
		setArr(cha[i]);
	}

	for (int i = 0; i < 2; ++i)
	{
		showArr(cha[i]);
	}

	return 0;
}

void setArr(chaff& arr)
{
	char ch[20];

	std::cout << "dross값을 입력하십시오: ";
	std::cin.get(ch, 20);

	strcpy(arr.dross, ch);

	std::cout << "slag값을 입력하십시오: ";
	if (!(std::cin >> arr.slag))
	{
		std::cout << "잘못된 값이 입력되었습니다.\n";
	}
	std::cin.get();
}

void showArr(chaff& arr)
{
	std::cout << "dross 값: " << arr.dross << std::endl;
	std::cout << "slag 값: " << arr.slag << std::endl;
}