// Q. Person 클래스는 어떤 한 사람의 퍼스트 네임과 라스트 네임을 저장한다. Person 클래스는 생성자들 외에, 퍼스트 네임과 라스트 네임을 함께 출력하는 Show() 메서드를 가진다. Gunslinger 클래스는 Person 클래스로부터 가상으로 파생된다. 
// Gunslinger 클래스는 총잡이가 권총을 빼내는 데 걸리는 시간을 나타내는 double형 값을 리턴하는 Draw() 멤버를 가진다. 또한 Gunslinger 클래스는 그 총잡이의 권총에 새겨진 금(notch) 수를 나타내는 int 멤버를 가진다. 마지막으로 Gunslinger 클래스는 이 모든 정보들을 출력하는 Show() 함수를 가진다.
//
// PokerPlayer 클래스는 Person 클래스로부터 가상으로 파생된다. 그 클래스는 1부터 52의 범위에 속하는 하나의 난수 카드 값으로 리턴하는 Draw() 멤버를 가진다. (또는패와 값 멤버들을 가지는 Card 클래스를 정의하고, Draw()를 위해 Card 리턴값을 사용할 수도 있다.)
// PokerPlayer 클래스는 Person 클래스의 Show() 함수를 사용한다. BadDude 클래스는 Gunslinger 클래스와 PokerPlayer 클래스로부터 public으로 파생된다. BadDude 클래스는 총을 꺼내는 데 걸리는 시간을 리턴하는 Gdraw() 멤버와, 다음에 꺼낼 카드 값을 리턴하는 Cdraw() 멤버를 가진다. 
// BadDude 클래스는 또한 적당한 Show() 함수를 가진다. 이 모든 클래스들과 메서드들을 정의하라. 그 밖에 다른 메서드(객체에 값을 설정하는 메서드 등)도 필요하다면 정의하라. Listing 14.12와 비슷한 프로그램을 간단하게 작성하여, 그것들이 바르게 동작하는지 테스트하라.

#include <iostream>
#include <cstring>
#include "person.h"

const int SIZE = 5;

int main(void)
{
    int ct, i;
    Person* gang[SIZE];

    for (ct = 0; ct < SIZE; ct++)
    {
        char choice;
        std::cout << "카테고리를 입력하십시오:\n" << "o: person  g: gunslinger  " << "p: pokerplayer  b: bad dude  q: quit\n";
        std::cin >> choice;
        while (std::strchr("ogpbq", choice) == nullptr)
        {
            std::cout << "o, g, p, b, q 중 하나를 입력하십시오: ";
            std::cin >> choice;
        }
        if (choice == 'q')
            break;
        switch (choice)
        {
        case 'o':   
            gang[ct] = new Person;
            break;
        case 'g':   
            gang[ct] = new Gunslinger;
            break;
        case 'p':   
            gang[ct] = new PokerPlayer;
            break;
        case 'b':   
            gang[ct] = new BadDude;
            break;
        }
        std::cin.get();
        gang[ct]->Set();
    }

    std::cout << "\nHere is your gang:\n";
    for (i = 0; i < ct; i++)
    {
        std::cout << '\n';
        gang[i]->Show();
    }
    for (i = 0; i < ct; i++)
        delete gang[i];
    std::cout << "프로그램을 종료합니다.\n";
    return 0;
}
