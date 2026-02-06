// Q. 초 수를 정수 값(long형 사용)으로 요청하고, 그에 상당하는 시간을 일, 시, 분, 초로 디스플레이하는 프로그램을 작성하라. 1일의 시간 수, 1시간의 분 수, 1분의 초 수를 기호 상수를 사용하여 표현하라. 출력은 다음과 같아야 한다.
// [초 수를 입력하시오: 31600000]
// [31600000초는 365일, 17시간, 46분, 40초]

#include <iostream>

int main()
{
	long total_seconds;
	
	const int DAY_PER_SECONDS = 60 * 60 * 24;
	const int HOURS_PER_SECONDS = 60 * 60;
	const int MINUTES_PER_SECONDS = 60;

	long remaining_seconds;

	std::cout << "초 수를 입력하시오: ";
	if (!(std::cin >> total_seconds))
	{
		std::cout << "숫자를 입력하시오." << std::endl;
		return 1;
	}
	
	long days = total_seconds / DAY_PER_SECONDS;
	remaining_seconds = total_seconds % DAY_PER_SECONDS;

	long hours = remaining_seconds / HOURS_PER_SECONDS;
	remaining_seconds = remaining_seconds % HOURS_PER_SECONDS;
	
	long minutes = remaining_seconds / MINUTES_PER_SECONDS;
	remaining_seconds = remaining_seconds % MINUTES_PER_SECONDS;

	long seconds = remaining_seconds;

	std::cout << total_seconds << "초는 " << days << "일, " << hours << "시간, " << minutes << "분, " << seconds <<"초";

	return 0;
}