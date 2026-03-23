// Q. Benevolent Order of Programmers 사는 병에 담긴 포트 와인들의 컬렉션을 판매하고 있다. BOP 사의 포트 와인 관리자는 그 컬렉션을 관리하기 위해 다음과 같은 Port 클래스를 설계하였다.
// 
// [#include <iostream>]
// [using namespace std;]
// [class Port]
// [{]
// [private:]
// [	char* brand;]
// [	char style[20];				// 예를 들면 tawny, ruby, vintage]
// [	int bottles;]
// [public:]
// [	Port(const char* br = "none", const char* st = "none", int b = 0);]
// [	Port(const Port& p);		// 복사 생성자]
// [	virtual ~Port() { delete[] brand; }]
// [	Port& operator=(const Port& p);]
// [	Port& operator+=(int b);	// bottles에 b를 더한다]
// [	Port& operator-=(int b);	// 가능할 경우에 bottles에서 b를 뺀다]
// [	int BottleCount() const { return bottles; }]
// [	virtual void Show() const;]
// [	friend ostream& operator<<(ostream& os, const Port& p);]
// [};]
//
// Show() 메서드는 다음과 같은 형식으로 정보를 출력한다.
// [브랜드: Gallo]
// [스타일: tawny]
// [수량: 20]
//
// operator<<() 함수는 다음과 같은 형식으로 정보를 출력한다.(끝에 개행이 없다.)
// [Gallo, tawny, 20]
//
// 포트 와인 관리자는 Port 클래스의 메서드 정의를 완성하고, 다음과 같은 VintagePort 클래스를 파생시켰다. 그 후 그는 실험용 바베큐 소스를 만드는 어떤 사람에게 실수로 1945 Cockburn 병을 보내는 사고를 일으켜 직장에서 해고되었다.
//
// [class VintagePort : public Port	// Style = "vintage"인 포트 와인]
// [{]
// [private:]
// [	char* nickname;				// "The Noble", "Old Velvet" 등의 별명]
// [	int year;					// 포도 수확 년도 (빈티지)]
// [public:]
// [	VintagePort();]
// [	VintagePort(const char* br, int b, const char* nn, int y);]
// [	VintagePort(const VintagePort& vp);]
// [	~VintagePort() { delete[] nickname; }]
// [	VintagePort& operator=(const VintagePort& vp);]
// [	void Show() const;]
// [	friend ostream& operator<<(ostream& os, const VintagePort& vp);]
// [};]
//
// 이 VintagePort를 다음과 같은 작업들을 수행하여 완성하라.
// a. 첫 번째 작업은, 전임 포트 와인 관리자를 해고하게 만든 Port 메서드 정의들을 다시 구현하는 것이다.
// b. 두 번째 작업은, 어떤 메서드들은 다시 정의되고, 다른 메서드들은 다시 정의되지 않는지 그 이유를 설명하는 것이다.
// c. 세 번째 작업은 operator=()와 operator<<()가 가상이 아닌 이유를 설명하는 것이다.
// d. 네 번째 작업은 VintagePort 메서드들의 정의를 제공하는 것이다.

#include <iostream>
#include "port.h"

int main()
{
	Port pt1("Gallo", "tawny", 20);
	Port pt2("Chateau Haut Brion", "vintage", 30);
	Port pt3("Romanee Conti", "ruby", 40);

	Port tport;
	tport.Show();
	std::cout << std::endl;

	tport = pt1;
	tport.Show();
	std::cout << std::endl;

	std::cout << pt2;
	std::cout << std::endl;

	std::cout << pt3;
	std::cout << std::endl;

	pt3 += 3;
	std::cout << pt3;
	std::cout << std::endl;

	pt3 -= 3;
	std::cout << pt3;
	std::cout << std::endl << std::endl;

	VintagePort vpt1("Chateau Haut Brion", "vintage", 30, "The Noble", 1950);
	VintagePort vpt2("Chambertin", "vintage", 17, "Old Velvet", 1912);

	VintagePort tvport;
	tvport.Show();
	std::cout << std::endl;

	tvport = vpt1;
	tvport.Show();
	std::cout << std::endl;

	std::cout << vpt2;
	std::cout << std::endl;

	vpt2 += 3;
	std::cout << vpt2;
	std::cout << std::endl;

	vpt2 -= 3;
	std::cout << vpt2;
	std::cout << std::endl << std::endl;

	std::cout << "프로그램을 종료합니다.\n";
	return 0;
}

// a. 코드 참고
// b. operator+=, operator-=, BottleCount 함수는 Port와 VintagePort 두 클래스에서 모두 동일하게 동작하기에 다시 정의할 필요가 없다. 하지만, Show 함수는 VintagePort에서 nickname과 year를 추가로 출력해야 하기 때문에 새로 정의해야 한다.
// c. 두 함수는 매개변수가 다르기 때문에, 매개변수의 타입을 보고 더 적합한 타입을 사용하기 위해서 가상을 사용하지 않는다.
// d. 코드 참고