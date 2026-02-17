// Q. 메뉴 방식으로 운영되는 샘플 프로그램을 작성하라. 프로그램은 하나의 문자를 각각의 레이블로 사용하는 4개의 선택 사항을 제시하는 메뉴를 출력해야 한다.
// 사용자가 네 가지 선택 사항에 해당하지 않는 다른 문자를 입력할 경우에, 프로그램은 사용자가 바르게 응답할 때까지 다시 입력하라고 요구해야 한다.
// 그러고 나서 프로그램은 switch 구문을 사용하여 사용자의 선택에 해당하는 간단한 행동을 처리해야 한다. 프로그램의 실행 예는 대략 다음과 같을 것이다.
// [다음 선택 사항 중에서 하나를 선택하십시오. (끝내려면 q)]
// [c) camera			p) pianist]
// [t) tree				g) game]
// [f]
// [c, p, t, g 중에서 하나를 선택하십시오. (끝내려면 q): a]
// [c, p, t, g 중에서 하나를 선택하십시오. (끝내려면 q): t]
// [단풍나무는 잎이 별처럼 생겼습니다.]

#include <iostream>

void display_menu();

int main()
{
	char ch;

	display_menu();

	while (std::cin >> ch && ch != 'q')
	{
		switch (ch)
		{
		case 'c':
			std::cout << "카메라는 시간과 공간을 순간적으로 포착합니다.\n";
			break;
		case 'p':
			std::cout << "피아니스트는 소리의 예술가입니다.\n";
			break;
		case 't':
			std::cout << "단풍나무는 잎이 별처럼 생겼습니다.\n";
			break;
		case 'g':
			std::cout << "컴퓨터 게임 시장이 커지고 있습니다.\n";
			break;
		default:
			std::cout << "c, p, t, g 중에서 하나를 선택하십시오. (끝내려면 q): ";
			continue;
		}

		std::cout << "\n";
		display_menu();
	}

	std::cout << "프로그램을 종료합니다.\n";
	return 0;
}

void display_menu()
{
	std::cout << "다음 선택 사항 중에서 하나를 선택하십시오. (끝내려면 q)\n";
	std::cout << "c) camera		p) pianist\n";
	std::cout << "t) tree			g) game\n";
}
