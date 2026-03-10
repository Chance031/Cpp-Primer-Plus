// Q. 주어진 모든 오버로딩 연산자들이 프렌드 함수를 사용하도록, 마지막으로 작성된 Time 클래스 예제(Listing 11.10, 11.11, 11.12)를 다시 작성하라. (mytime4.h, mytime4.cpp, usetime4.cpp)

#include <iostream>
#include "mytime4.h"

int main()
{
	using std::cout;
	using std::endl;
	Time aida(3, 35);
	Time tosca(2, 48);
	Time temp;

	cout << "Aida와 Tosca:\n";
	cout << aida << "; " << tosca << endl;
	temp = aida + tosca;
	cout << "Aida + Tosca: " << temp << endl;
	temp = aida * 1.17;
	cout << "Aida * 1.17: " << temp << endl;
	cout << "10 * Tosca: " << 10 * tosca << endl;

	return 0;
}