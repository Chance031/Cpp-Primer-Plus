// Q. 다음과 같은 구조체 선언이 있다
// [struct box]
// [{]
// [	char maker[40];]
// [	float height;]
// [	float width;]
// [	float length;]
// [	float volume;]
// [};]
// a. box 구조체를 값으로 전달받아, 각 멤버의 값을 출력하는 함수를 작성하라.
// b. box 구조체의 주소를 전달받아, volume 멤버를 다른 세 가지 멤버의 곱으로 설정하는 함수를 작성하라.
// c. 앞의 두 함수를 사용하는 간단한 프로그램을 작성하라.

#include <iostream>

struct box
{
	char maker[40];
	float height;
	float width;
	float length;
	float volume;
};

void output_box(box);
void volume_box(box*);

int main()
{
	box box = { "Technical Communication Laboratory", 10.5, 20.5, 30.5, 0 };

	output_box(box);

	volume_box(&box);
	
	std::cout << std::endl;

	output_box(box);

	return 0;
}

void output_box(box box)
{
	std::cout << "maker	: " << box.maker << std::endl;
	std::cout << "height: " << box.height << std::endl;
	std::cout << "width	: " << box.width << std::endl;
	std::cout << "length: " << box.length << std::endl;
	std::cout << "volume: " << box.volume << std::endl;
}

void volume_box(box* box)
{
	box->volume = box->height * box->width * box->length;
}