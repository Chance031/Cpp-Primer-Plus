// Q. 다음과 같은 몇 가지의 클래스 선언이 있다.
//
// emp.h -- abstr_emp 클래스와 그것의 파생 클래스들을 위한 헤더 파일
// []
// [#include <iostream>]
// [#include <string>]
// []
// [class abstr_emp]
// [{]
// [private:]
// [	std::string fname;				// abstr_emp의 퍼스트 네임]
// [	std::string lname;				// abstr_emp의 라스트 네임]
// [	std::string job;				// abstr_emp의 직무]
// [public:]
// [	abstr_emp();]
// [	abstr_emp(const std::string& fn, const std::string& ln, const std::string& j);]
// [	virtual void ShowAll() const;	// 모든 데이터를 보여 준다]
// [	virtual void SetAll();			// 사용자에게 값들을 입력하라고 요구한다]
// [	friend std::ostream& operator<<(std::ostream& os, const abstr_emp& e);	// 퍼스트 네임과 라스트 네임을 디스플레이한다]
// [	virtual ~abstr_emp() = 0;		// 가상 기초 클래스]
// [};]
// []
// [class employee : public abstr_emp]
// [{]
// [public:]
// [	employee();]
// [	employee(const std::string& fn, const std::string& ln, const std::string& j);]
// [	virtual void ShowAll() const;]
// [	virtual void SetAll();]
// [};]
// []
// [class manager : virtual public abstr_emp]
// [{]
// [private:]
// [	int inchargeof;					// 관리하는 abstr_emp 수]
// [protected:]
// [	int InChargeOf() const { return inchargeof; }	// 출력]
// [	int& InChargeOf() { return inchargeof; }		// 입력]
// [public:]
// [	manager();]
// [	manager(const std::string& fn, const std::string& ln, const std::string& j, int ico = 0);]
// [	manager(const abstr_emp& e, int ico);]
// [	manager(const manager& m);]
// [	virtual void ShowAll() const;]
// [	virtual void SetAll();]
// [};]
// []
// [class fink : virtual public abstr_emp]
// [{]
// [private:]
// [	std::string reportsto;			// fink가 보고하는 대상]
// [protected:]
// [	const std::string ReportsTo() const { return reportsto; }]
// [	std::string& ReportsTo() { return reportsto; }]
// [public:]
// [	fink();]
// [	fink(const std::string& fn, const std::string& ln, const std::string& j, const std::string& rpo);]
// [	fink(const abstr_emp& e, const std::string& rpo);]
// [	fink(const fink& e);]
// [	virtual void ShowAll() const;]
// [	virtual void SetAll();]
// [};]
// []
// [class highfink : public manager, public fink	// fink 관리]
// [{]
// [public:]
// [	highfink();]
// [	highfink(const std::string& fn, const std::string& ln, const std::string& j, const std::string& rpo, int ico);]
// [	highfink(const abstr_emp& e, const std::string& rpo, int ico);]
// [	highfink(const fink& f, int ico);]
// [	highfink(const manager& m, const std::string& rpo);]
// [	highfink(const highfink& h);]
// [	virtual void ShowAll() const;]
// [	virtual void SetAll();]
// [};]
//
// 이 클래스 계열은 하나의 가상 기초 클래스를 가지는 다중 상속을 사용한다. 이와 같은 경우에 생성자 멤버 초기자 리스트를 위한 특별한 규칙을 사용해야 한다. protected로 접근하는 몇몇 메서드들의 존재에 주목하라.
//
// 이것은 highfink 메서드들의 일부 코드를 단순화시킨다. (예를 들어, highfink::ShowAll()이 fink::ShowAll()과 manager::ShowAll()을 단순히 호출한다면, 그것은 abstr_emp::ShowAll()을 두 번 호출하는 것이 된다.) 
// 클래스 메서드들의 구현을 제공하고, 간단한 프로그램으로 그 클래스들이 바르게 동작하는지 테스트하라. 다음은 간단한 테스트 프로그램이다.
//
// [// pe14-5.cpp]
// [// useemp1.cpp -- abstr_emp 클래스를 사용한다]
// []
// [#include <iostream>]
// [using namespace std;]
// [#include "emp.h"]
// [int main()]
// [{]
// [	employee em("Trip", "Harris", "Thumper");]
// [	cout << em << endl;]
// [	em.ShowAll();]
// []
// [	manager ma("Amorphia", "Spindragon", "Nuancer", 5);]
// [	cout << ma << endl;]
// [	ma.ShowAll();]
// []
// [	fink fi("Matt", "Oggs", "Oiler", "Juno Barr");]
// [	cout << fi << endl;]
// [	fi.ShowAll();]
// [	highfink hf(ma, "Curly Kew");]
// [	hf.ShowAll();]
// [	cout << "다음 출력을 위해 아무 키나 누르십시오:\n";]
// [	cin.get();]
// [	highfink hf2;]
// [	hf2.SetAll();]
// []
// [	cout << "abstr_emp * 포인터의 사용:\n";]
// [	abstr_emp* tri[4] = { &em, &fi, &hf, &hf2 };]
// [	for (int i = 0; i < 4; i++)]
// [		tri[i]->ShowAll();]
// []
// [	return 0;]
// [}]
//
// - 대입 연산자를 정의하지 않은 이유는 무엇인가?
// - ShowAll()과 SetAll()이 가상인 이유는 무엇인가?
// - abstr_emp가 가상 기초 클래스인 이유는 무엇인가?
// - highfink 클래스에 데이터 부분이 없는 이유는 무엇인가?
// - operator<<()의 한 가지 버전만 필요한 이유는 무엇인가?
// - 프로그램의 끝 부분 코드를 다음으로 대체하면 어떤 일이 발생하는가?
// abstr_emp tri[4] = {em, fi, hf, hf2};
// for (int i = 0; i < 4; i++)
//     tri[i].ShowAll();

#include <iostream>
using namespace std;
#include "emp.h"
int main()
{
	employee em("Trip", "Harris", "Thumper");
	cout << em << endl;
	em.ShowAll();

	manager ma("Amorphia", "Spindragon", "Nuancer", 5);
	cout << ma << endl;
	ma.ShowAll();

	fink fi("Matt", "Oggs", "Oiler", "Juno Barr");
	cout << fi << endl;
	fi.ShowAll();
	highfink hf(ma, "Curly Kew");
	hf.ShowAll();
	cout << "다음 출력을 위해 아무 키나 누르십시오:\n";
	cin.get();
	highfink hf2;
	hf2.SetAll();

	cout << "abstr_emp * 포인터의 사용:\n";
	abstr_emp* tri[4] = { &em, &fi, &hf, &hf2 };
	for (int i = 0; i < 4; i++)
		tri[i]->ShowAll();

	return 0;
}