// Q. 연습 8의 제시문과 부합되는 프로그램을, 배열 대신 string 클래스 객체를 사용하여 작성하라. string 헤더 파일을 포함시켜야 한다. 관계 연산자를 사용하여 비교 테스트를 수행해야 한다.

#include <iostream>
#include <string>

int main()
{
	std::string word;
	int count = 0;

	std::cout << "영어 단어들을 입력하십시오(끝내려면 done을 입력):\n";

	while (std::cin >> word && word != "done")
		++count;

	std::cout << "총 " << count << "단어가 입력되었습니다.";

	return 0;
}