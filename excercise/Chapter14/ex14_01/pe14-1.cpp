// Q. Wine 클래스는 와인 이름을 저장하는 하나의 string 클래스 객체 멤버(4장)와, (이 장에서 설명한) Avalarray<int> 객체들을 가진 하나의 (이 장에서 설명한) Pair 객체를 가지고 있다. 
// 각 Pair 객체의 첫 번째 멤버는 포도 수확 년도를 저장하고, 두 번째 멤버는 해당 수확 년도에 생산된 와인의 수량(병 수)을 저장한다. 예를 들면, Pair 객체의 첫 번째 valarray 객체에는 포도 수확 년도로 1988, 1992, 1996을 저장할 수 있다. 
// 그리고 두 번째 valarray 객체에는 각 해당 년도에 생산된 수량으로 24, 48, 144를 저장할 수 있다. 포도 수확 년도들의 수를 저장하기 위해 Wine이 하나의 int형 멤버를 가지는 것이 편리하다. 또한, 코드를 단순하게 만들기 위해 몇 가지 typedef을 사용할 수 있다.
//
// typedef std::valarray<int> ArrayInt;
// typedef Pair<ArrayInt, ArrayInt> PairArray;
//
// PairArray형은 Pair<std::valarray<int>, std::valarray<int> >형을 나타낸다. 컨테인먼트를 사용하여 Wine 클래스를 구현하라. 이 클래스는 디폴트 생성자를 가져야 하고, 적어도 다음과 같은 생성자들을 가져야 한다.
//
// // 레이블을 l로, 수확 년도 개수를 y로 초기화한다
// // 수확 년도들을 yr[]로, 와인 수량들을 bot[]로 초기화한다
// Wine(const char * l, int y, const int yr[], const int bot[]);
// // 레이블을 l로, 수확 년도 개수를 y로 초기화한다
// // 길이 y인 array 객체들을 생성한다
// Wine(const char * l, int y);
//
// Wine 클래스는 GetBottles() 메서드를 가져야 한다. 이 메서드는 하나의 Wine 객체가 y개의 수확 년도로 주어졌을 때, 사용자가 각각에 해당하는 수확 년도와 와인 수량을 입력하도록 지시한다. Label() 메서드는 와인 이름에 대한 참조를 리턴해야 한다. 
// sum() 메서드는 Pair 객체 안에 있는 두 번째 valarray<int> 객체에 있는 와인의 전체 수량을 리턴해야 한다.
//
// 프로그램은 와인 이름, 배열의 원소 수, 각 배열 원소의 포도 수확 년도와 생산 수량 정보를 입력하도록 사용자에게 요구해야 한다. 이 데이터들을 사용하여 Wine 객체를 생성한 후, 그 객체에 저장된 정보를 출력해야 한다. 다음과 같은 샘플 테스트 프로그램을 사용할 수 있다.
//
// pe14-1.cpp -- 컨테인먼트를 가진 Wine 클래스를 사용한다
// [#include <iostream>]
// [#include "winec.h"]
// []
// [int main()]
// [{]
// [	using std::cin;]
// [	using std::cout;]
// [	using std::endl;]
// []
// [	cout << "와인 이름을 입력하시오: ";]
// [	char lab[50];]
// [	cin.getline(lab, 50);]
// [	cout << "수확 년도 개수를 입력하십시오: ";]
// [	int yrs;]
// [	cin >> yrs;]
// []
// [	Wine holding(lab, yrs);]
// [	// 레이블과 수확 년도 개수를 저장한다]
// [	// 배열에 yrs개의 원소를 제공한다]
// [	holding.GetBottles();]
// [	// 수확 년도, 와인 수량을 입력하도록 요청한다]
// [	holding.Show();]
// [	// 객체 내용을 디스플레이한다]
// []
// [	const int YRS = 3;]
// [	int y[YRS] = { 1993, 1995, 1998 };]
// [	int b[YRS] = { 48, 60, 72 };]
// [	// 새 객체를 생성하고, 배열 y와 b에 있는 데이터를 사용하여 초기화한다]
// [	Wine more("Gushing Grape Red", YRS, y, b);]
// [	more.Show();]
// [	cout << more.Label() << " 전체 수량"	// Label() 메서드 사용]
// [		 << ": " << more.sum() << endl;		// sum() 메서드 사용]
// [	cout << "프로그램을 종료합니다.\n";]
// [	return 0;]
// [}]
//
// 샘플 출력은 다음과 같아야 한다.
//
// [와인 이름을 입력하시오: Gully Wash]
// [수확 년도 개수를 입력하시오: 4]
// [4년 간의 Gully Wash 데이터를 입력하시오:]
// [년도를 입력하시오: 1988]
// [수량을 입력하시오: 42]
// [년도를 입력하시오: 1994]
// [수량을 입력하시오: 58]
// [년도를 입력하시오: 1988]
// [수량을 입력하시오: 122]
// [년도를 입력하시오: 2001]
// [수량을 입력하시오: 144]
// [와인: Gully Wash]
// [		년도	수량]
// [		1988	42]
// [		1994	58]
// [		1998	122]
// [		2001	144]
// [와인: Gushing Grape Red]
// [		년도	수량]
// [		1993	48]
// [		1995	60]
// [		1998	72]
// [Gushing Grape Red 전체 수량: 180]
// [프로그램을 종료합니다.]

#include <iostream>
#include "winec.h"

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