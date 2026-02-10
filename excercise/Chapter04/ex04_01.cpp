// Q. 다음과 같은 형식으로 정보를 읽어들여 화면에 다시 출력하는 C++ 프로그램을 작성하라.
// [영문 퍼스트 네임 (이름): Seong il]
// [영문 라스트 네임 (성): Yoon]\
// [학생이 원하는 학점: B]
// [나이: 22]
// [성명: Yoon, Seong il]
// [학점: C]
// [나이: 22]
// 프로그램은 두 단어 이상으로 된 영문 퍼스트 네임(이름)을 받아들일 수 있어야 한다. 또한 프로그램은 사용자가 원하는 학점을 한 단계씩 하향 조정하여 출력한다.
// 즉, A라고 입력하면 한 단계를 내려 B를 출력한다. 학생들은 A, B, C 학점만을 원한다고 가정한다.


#include <iostream>
#include <string>

int main()
{
	std::string first_name, last_name;
	char grade;
	int age;

	std::cout << "영문 퍼스트 네임 (이름): ";
	if (!std::getline(std::cin, first_name))
	{
		std::cout << "문자를 입력하세요.\n";
		return 1;
	}

	std::cout << "영문 라스트 네임 (성): ";
	if (!(std::cin >> last_name))
	{
		std::cout << "문자를 입력하세요.\n";
		return 1;
	}

	std::cout << "학생이 원하는 학점: ";
	if (!(std::cin >> grade))
	{
		std::cout << "문자를 입력하세요.\n";
		return 1;
	}
	
	if (!(grade == 'A' || grade == 'B' || grade == 'C'))
	{
		std::cout << "A, B, C 중에서 입력하세요.\n";
		return 1;
	}

	grade += 1;

	std::cout << "나이: ";
	if(!(std::cin >> age))
	{
		std::cout << "숫자를 입력하세요.\n";
		return 1;
	}

	std::cout << "성명: " << last_name << ", " << first_name << "\n";
	std::cout << "학점: " << grade << "\n";
	std::cout << "나이: " << age << "\n";

	return 0; 
}