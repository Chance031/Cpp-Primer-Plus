// Q. 이 연습은, 컨테인먼트 대신 private 상속을 사용해야 한다는 점만 제외하고 프로그래밍 연습 1과 같다. 여기에서도 몇 가지 typedef을 사용할 수 있다. 또한, 다음과 같은 구문들의 의미를 깊이 생각해 볼 수 있다.
//
// [PairArray::operator==(PairArray(ArrayInt(), ArrayInt()));]
// [cout << (const string&)(*this);]
//
// 이 클래스는 프로그래밍 연습 1에서 제시한 샘플 테스트 프로그램으로 잘 동작해야 한다.

#include <iostream>
#include "winei.h"

int main()
{
	using std::cin;
	using std::cout;
	using std::endl;

	cout << "와인 이름을 입력하시오: ";
	char lab[50];
	cin.getline(lab, 50);
	cout << "수확 년도 개수를 입력하십시오: ";
	int yrs;
	cin >> yrs;

	Wine holding(lab, yrs);
	// 레이블과 수확 년도 개수를 저장한다
	// 배열에 yrs개의 원소를 제공한다
	holding.GetBottles();
	// 수확 년도, 와인 수량을 입력하도록 요청한다
	holding.Show();
	// 객체 내용을 디스플레이한다

	const int YRS = 3;
	int y[YRS] = { 1993, 1995, 1998 };
	int b[YRS] = { 48, 60, 72 };
	// 새 객체를 생성하고, 배열 y와 b에 있는 데이터를 사용하여 초기화한다
	Wine more("Gushing Grape Red", YRS, y, b);
	more.Show();
	cout << more.Label() << " 전체 수량"	// Label() 메서드 사용
		<< ": " << more.sum() << endl;		// sum() 메서드 사용
	cout << "프로그램을 종료합니다.\n";
	return 0;
}