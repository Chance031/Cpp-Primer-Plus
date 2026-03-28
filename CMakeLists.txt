# =================================================================
# C++ 기초 플러스 예제 관리 프로젝트 (CMake)
# =================================================================
cmake_minimum_required(VERSION 3.10)
project(Cpp_Primer_Plus)

# [설정 1] C++ 표준 설정
# 책의 예제 호환성을 위해 C++11을 사용하며, 해당 버전이 필수임을 명시합니다.
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# [설정 2] 출력 경로 설정
# 빌드된 모든 실행 파일(.exe)은 'build/bin' 폴더 안에 모이게 됩니다.
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)


# -----------------------------------------------------------------
# 제 2장: 시작하기 (Chapter 02)
# -----------------------------------------------------------------
add_executable(ch02_01 "source/Chapter02/ch02_01.cpp")
add_executable(ch02_02 "source/Chapter02/ch02_02.cpp")
add_executable(ch02_03 "source/Chapter02/ch02_03.cpp")
add_executable(ch02_04 "source/Chapter02/ch02_04.cpp")
add_executable(ch02_05 "source/Chapter02/ch02_05.cpp")
add_executable(ch02_06 "source/Chapter02/ch02_06.cpp")
add_executable(ex02_01 "excercise/Chapter02/ex02_01.cpp")
add_executable(ex02_02 "excercise/Chapter02/ex02_02.cpp")
add_executable(ex02_03 "excercise/Chapter02/ex02_03.cpp")
add_executable(ex02_04 "excercise/Chapter02/ex02_04.cpp")
add_executable(ex02_05 "excercise/Chapter02/ex02_05.cpp")
add_executable(ex02_06 "excercise/Chapter02/ex02_06.cpp")
add_executable(ex02_07 "excercise/Chapter02/ex02_07.cpp")


# -----------------------------------------------------------------
# 제 3장: 데이터 처리 (Chapter 03)
# -----------------------------------------------------------------
add_executable(ch03_01 "source/Chapter03/ch03_01.cpp")
add_executable(ch03_02 "source/Chapter03/ch03_02.cpp")
add_executable(ch03_03 "source/Chapter03/ch03_03.cpp")
add_executable(ch03_04 "source/Chapter03/ch03_04.cpp")
add_executable(ch03_05 "source/Chapter03/ch03_05.cpp")
add_executable(ch03_06 "source/Chapter03/ch03_06.cpp")
add_executable(ch03_07 "source/Chapter03/ch03_07.cpp")
add_executable(ch03_08 "source/Chapter03/ch03_08.cpp")
add_executable(ch03_09 "source/Chapter03/ch03_09.cpp")
add_executable(ch03_10 "source/Chapter03/ch03_10.cpp")
add_executable(ch03_11 "source/Chapter03/ch03_11.cpp")
add_executable(ch03_12 "source/Chapter03/ch03_12.cpp")
add_executable(ch03_13 "source/Chapter03/ch03_13.cpp")
add_executable(ch03_14 "source/Chapter03/ch03_14.cpp")
add_executable(ex03_01 "excercise/Chapter03/ex03_01.cpp")
add_executable(ex03_02 "excercise/Chapter03/ex03_02.cpp")
add_executable(ex03_03 "excercise/Chapter03/ex03_03.cpp")
add_executable(ex03_04 "excercise/Chapter03/ex03_04.cpp")
add_executable(ex03_05 "excercise/Chapter03/ex03_05.cpp")
add_executable(ex03_06a "excercise/Chapter03/ex03_06a.cpp")
add_executable(ex03_06b "excercise/Chapter03/ex03_06b.cpp")
add_executable(ex03_07 "excercise/Chapter03/ex03_07.cpp")


# -----------------------------------------------------------------
# 제 4장: 복합 데이터형 (Chapter 04)
# -----------------------------------------------------------------
add_executable(ch04_01 "source/Chapter04/ch04_01.cpp")
add_executable(ch04_02 "source/Chapter04/ch04_02.cpp")
add_executable(ch04_03 "source/Chapter04/ch04_03.cpp")
add_executable(ch04_04 "source/Chapter04/ch04_04.cpp")
add_executable(ch04_05 "source/Chapter04/ch04_05.cpp")
add_executable(ch04_06 "source/Chapter04/ch04_06.cpp")
add_executable(ch04_07 "source/Chapter04/ch04_07.cpp")
add_executable(ch04_08 "source/Chapter04/ch04_08.cpp")
add_executable(ch04_09 "source/Chapter04/ch04_09.cpp")
add_executable(ch04_10 "source/Chapter04/ch04_10.cpp")
add_executable(ch04_11 "source/Chapter04/ch04_11.cpp")
add_executable(ch04_12 "source/Chapter04/ch04_12.cpp")
add_executable(ch04_13 "source/Chapter04/ch04_13.cpp")
add_executable(ch04_14 "source/Chapter04/ch04_14.cpp")
add_executable(ch04_15 "source/Chapter04/ch04_15.cpp")
add_executable(ch04_16 "source/Chapter04/ch04_16.cpp")
add_executable(ch04_17 "source/Chapter04/ch04_17.cpp")
add_executable(ch04_18 "source/Chapter04/ch04_18.cpp")
add_executable(ch04_19 "source/Chapter04/ch04_19.cpp")
add_executable(ch04_20 "source/Chapter04/ch04_20.cpp")
add_executable(ch04_21 "source/Chapter04/ch04_21.cpp")
add_executable(ch04_22 "source/Chapter04/ch04_22.cpp")
add_executable(ch04_23 "source/Chapter04/ch04_23.cpp")
add_executable(ch04_24 "source/Chapter04/ch04_24.cpp")
add_executable(ex04_01 "excercise/Chapter04/ex04_01.cpp")
add_executable(ex04_02 "excercise/Chapter04/ex04_02.cpp")
add_executable(ex04_03 "excercise/Chapter04/ex04_03.cpp")
add_executable(ex04_04 "excercise/Chapter04/ex04_04.cpp")
add_executable(ex04_05 "excercise/Chapter04/ex04_05.cpp")
add_executable(ex04_06 "excercise/Chapter04/ex04_06.cpp")
add_executable(ex04_07 "excercise/Chapter04/ex04_07.cpp")
add_executable(ex04_08 "excercise/Chapter04/ex04_08.cpp")
add_executable(ex04_09 "excercise/Chapter04/ex04_09.cpp")
add_executable(ex04_10 "excercise/Chapter04/ex04_10.cpp")


# -----------------------------------------------------------------
# 제 5장: 루프와 관계 표현식 (Chapter 05)
# -----------------------------------------------------------------
add_executable(ch05_01 "source/Chapter05/ch05_01.cpp")
add_executable(ch05_02 "source/Chapter05/ch05_02.cpp")
add_executable(ch05_03 "source/Chapter05/ch05_03.cpp")
add_executable(ch05_04 "source/Chapter05/ch05_04.cpp")
add_executable(ch05_05 "source/Chapter05/ch05_05.cpp")
add_executable(ch05_06 "source/Chapter05/ch05_06.cpp")
add_executable(ch05_07 "source/Chapter05/ch05_07.cpp")
add_executable(ch05_08 "source/Chapter05/ch05_08.cpp")
add_executable(ch05_09 "source/Chapter05/ch05_09.cpp")
add_executable(ch05_10 "source/Chapter05/ch05_10.cpp")
add_executable(ch05_11 "source/Chapter05/ch05_11.cpp")
add_executable(ch05_12 "source/Chapter05/ch05_12.cpp")
add_executable(ch05_13 "source/Chapter05/ch05_13.cpp")
add_executable(ch05_14 "source/Chapter05/ch05_14.cpp")
add_executable(ch05_15 "source/Chapter05/ch05_15.cpp")
add_executable(ch05_16 "source/Chapter05/ch05_16.cpp")
add_executable(ch05_17 "source/Chapter05/ch05_17.cpp")
add_executable(ch05_18 "source/Chapter05/ch05_18.cpp")
add_executable(ch05_19 "source/Chapter05/ch05_19.cpp")
add_executable(ch05_20 "source/Chapter05/ch05_20.cpp")
add_executable(ex05_01 "excercise/Chapter05/ex05_01.cpp")
add_executable(ex05_02 "excercise/Chapter05/ex05_02.cpp")
add_executable(ex05_03 "excercise/Chapter05/ex05_03.cpp")
add_executable(ex05_04 "excercise/Chapter05/ex05_04.cpp")
add_executable(ex05_05 "excercise/Chapter05/ex05_05.cpp")
add_executable(ex05_06 "excercise/Chapter05/ex05_06.cpp")
add_executable(ex05_07 "excercise/Chapter05/ex05_07.cpp")
add_executable(ex05_08 "excercise/Chapter05/ex05_08.cpp")
add_executable(ex05_09 "excercise/Chapter05/ex05_09.cpp")
add_executable(ex05_10 "excercise/Chapter05/ex05_10.cpp")


# -----------------------------------------------------------------
# 제 6장: 분기 구문과 논리 연산자 (Chapter 06)
# -----------------------------------------------------------------
add_executable(ch06_01 "source/Chapter06/ch06_01.cpp")
add_executable(ch06_02 "source/Chapter06/ch06_02.cpp")
add_executable(ch06_03 "source/Chapter06/ch06_03.cpp")
add_executable(ch06_04 "source/Chapter06/ch06_04.cpp")
add_executable(ch06_05 "source/Chapter06/ch06_05.cpp")
add_executable(ch06_06 "source/Chapter06/ch06_06.cpp")
add_executable(ch06_07 "source/Chapter06/ch06_07.cpp")
add_executable(ch06_08 "source/Chapter06/ch06_08.cpp")
add_executable(ch06_09 "source/Chapter06/ch06_09.cpp")
add_executable(ch06_10 "source/Chapter06/ch06_10.cpp")
add_executable(ch06_11 "source/Chapter06/ch06_11.cpp")
add_executable(ch06_12 "source/Chapter06/ch06_12.cpp")
add_executable(ch06_13 "source/Chapter06/ch06_13.cpp")
add_executable(ch06_14 "source/Chapter06/ch06_14.cpp")
add_executable(ch06_15 "source/Chapter06/ch06_15.cpp")
add_executable(ch06_16 "source/Chapter06/ch06_16.cpp")
add_executable(ex06_01 "excercise/Chapter06/ex06_01.cpp")
add_executable(ex06_02 "excercise/Chapter06/ex06_02.cpp")
add_executable(ex06_03 "excercise/Chapter06/ex06_03.cpp")
add_executable(ex06_04 "excercise/Chapter06/ex06_04.cpp")
add_executable(ex06_05 "excercise/Chapter06/ex06_05.cpp")
add_executable(ex06_06 "excercise/Chapter06/ex06_06.cpp")
add_executable(ex06_07 "excercise/Chapter06/ex06_07.cpp")
add_executable(ex06_08 "excercise/Chapter06/ex06_08.cpp")
add_executable(ex06_09 "excercise/Chapter06/ex06_09.cpp")


# -----------------------------------------------------------------
# 제 7장: 함수 - C++의 프로그래밍 모듈 (Chapter 07)
# -----------------------------------------------------------------
add_executable(ch07_01 "source/Chapter07/ch07_01.cpp")
add_executable(ch07_02 "source/Chapter07/ch07_02.cpp")
add_executable(ch07_03 "source/Chapter07/ch07_03.cpp")
add_executable(ch07_04 "source/Chapter07/ch07_04.cpp")
add_executable(ch07_05 "source/Chapter07/ch07_05.cpp")
add_executable(ch07_06 "source/Chapter07/ch07_06.cpp")
add_executable(ch07_07 "source/Chapter07/ch07_07.cpp")
add_executable(ch07_08 "source/Chapter07/ch07_08.cpp")
add_executable(ch07_09 "source/Chapter07/ch07_09.cpp")
add_executable(ch07_10 "source/Chapter07/ch07_10.cpp")
add_executable(ch07_11 "source/Chapter07/ch07_11.cpp")
add_executable(ch07_12 "source/Chapter07/ch07_12.cpp")
add_executable(ch07_13 "source/Chapter07/ch07_13.cpp")
add_executable(ch07_14 "source/Chapter07/ch07_14.cpp")
add_executable(ch07_15 "source/Chapter07/ch07_15.cpp")
add_executable(ch07_16 "source/Chapter07/ch07_16.cpp")
add_executable(ch07_17 "source/Chapter07/ch07_17.cpp")
add_executable(ch07_18 "source/Chapter07/ch07_18.cpp")
add_executable(ch07_19 "source/Chapter07/ch07_19.cpp")
add_executable(ex07_01 "excercise/Chapter07/ex07_01.cpp")
add_executable(ex07_02 "excercise/Chapter07/ex07_02.cpp")
add_executable(ex07_03 "excercise/Chapter07/ex07_03.cpp")
add_executable(ex07_04 "excercise/Chapter07/ex07_04.cpp")
add_executable(ex07_05 "excercise/Chapter07/ex07_05.cpp")
add_executable(ex07_06 "excercise/Chapter07/ex07_06.cpp")
add_executable(ex07_07 "excercise/Chapter07/ex07_07.cpp")
add_executable(ex07_08a "excercise/Chapter07/ex07_08a.cpp")
add_executable(ex07_08b "excercise/Chapter07/ex07_08b.cpp")
add_executable(ex07_09 "excercise/Chapter07/ex07_09.cpp")
add_executable(ex07_10 "excercise/Chapter07/ex07_10.cpp")


# -----------------------------------------------------------------
# 제 8장: 함수의 활용 (Chapter 08)
# -----------------------------------------------------------------
add_executable(ch08_01 "source/Chapter08/ch08_01.cpp")
add_executable(ch08_02 "source/Chapter08/ch08_02.cpp")
add_executable(ch08_03 "source/Chapter08/ch08_03.cpp")
add_executable(ch08_04 "source/Chapter08/ch08_04.cpp")
add_executable(ch08_05 "source/Chapter08/ch08_05.cpp")
add_executable(ch08_06 "source/Chapter08/ch08_06.cpp")
add_executable(ch08_07 "source/Chapter08/ch08_07.cpp")
add_executable(ch08_08 "source/Chapter08/ch08_08.cpp")
add_executable(ch08_09 "source/Chapter08/ch08_09.cpp")
add_executable(ch08_10 "source/Chapter08/ch08_10.cpp")
add_executable(ch08_11 "source/Chapter08/ch08_11.cpp")
add_executable(ch08_12 "source/Chapter08/ch08_12.cpp")
add_executable(ch08_13 "source/Chapter08/ch08_13.cpp")
add_executable(ch08_14 "source/Chapter08/ch08_14.cpp")
add_executable(ch08_15 "source/Chapter08/ch08_15.cpp")
add_executable(ex08_01 "excercise/Chapter08/ex08_01.cpp")
add_executable(ex08_02 "excercise/Chapter08/ex08_02.cpp")
add_executable(ex08_03 "excercise/Chapter08/ex08_03.cpp")
add_executable(ex08_04 "excercise/Chapter08/ex08_04.cpp")
add_executable(ex08_05 "excercise/Chapter08/ex08_05.cpp")
add_executable(ex08_06 "excercise/Chapter08/ex08_06.cpp")
add_executable(ex08_07 "excercise/Chapter08/ex08_07.cpp")


# -----------------------------------------------------------------
# 제 9장: 메모리 모델과 이름 공간 (Chapter 09)
# -----------------------------------------------------------------
add_executable(ch09_01-03
	"source/Chapter09/ch09_01.h"
	"source/Chapter09/ch09_02.cpp"
	"source/Chapter09/ch09_03.cpp")
add_executable(ch09_04 "source/Chapter09/ch09_04.cpp")
add_executable(ch09_05-06 
	"source/Chapter09/ch09_05.cpp"
	"source/Chapter09/ch09_06.cpp")
add_executable(ch09_07-08 
	"source/Chapter09/ch09_07.cpp"
	"source/Chapter09/ch09_08.cpp")
add_executable(ch09_09 "source/Chapter09/ch09_09.cpp")
add_executable(ch09_10 "source/Chapter09/ch09_10.cpp")
add_executable(ch09_11-13
	"source/Chapter09/ch09_11.h"
	"source/Chapter09/ch09_12.cpp"
	"source/Chapter09/ch09_13.cpp")
add_executable(ex09_01 
	"excercise/Chapter09/ex09_01/ex09_01.cpp"
	"excercise/Chapter09/ex09_01/golf.h"
	"excercise/Chapter09/ex09_01/golf.cpp")
add_executable(ex09_02 "excercise/Chapter09/ex09_02.cpp")
add_executable(ex09_03 "excercise/Chapter09/ex09_03.cpp")
add_executable(ex09_04 
	"excercise/Chapter09/ex09_04/ex09_04.cpp"
	"excercise/Chapter09/ex09_04/namesp.h"
	"excercise/Chapter09/ex09_04/namesp.cpp")


# -----------------------------------------------------------------
# 제 10장: 객체와 클래스 (Chapter 10)
# -----------------------------------------------------------------
add_executable(ch10_01-03 
	"source/Chapter10/ch10_01.h"
	"source/Chapter10/ch10_02.cpp"
	"source/Chapter10/ch10_03.cpp")
add_executable(ch10_04-06
	"source/Chapter10/ch10_04.h"
	"source/Chapter10/ch10_05.cpp"
	"source/Chapter10/ch10_06.cpp")
add_executable(ch10_07-09 
	"source/Chapter10/ch10_07.h"
	"source/Chapter10/ch10_08.cpp"
	"source/Chapter10/ch10_09.cpp")
add_executable(ch10_10-12
	"source/Chapter10/ch10_10.h"
	"source/Chapter10/ch10_11.cpp"
	"source/Chapter10/ch10_12.cpp")
add_executable(ex10_01 
	"excercise/Chapter10/ex10_01/account.h"
	"excercise/Chapter10/ex10_01/account.cpp"
	"excercise/Chapter10/ex10_01/useaccnt.cpp")
add_executable(ex10_02 
	"excercise/Chapter10/ex10_02/person.h"
	"excercise/Chapter10/ex10_02/person.cpp"
	"excercise/Chapter10/ex10_02/ex10_02.cpp")
add_executable(ex10_03 
	"excercise/Chapter10/ex10_03/golf.h"
	"excercise/Chapter10/ex10_03/golf.cpp"
	"excercise/Chapter10/ex10_03/usegolf.cpp")
add_executable(ex10_04 
	"excercise/Chapter10/ex10_04/namesp.h"
	"excercise/Chapter10/ex10_04/namesp.cpp"
	"excercise/Chapter10/ex10_04/usenmsp.cpp")
add_executable(ex10_05 
	"excercise/Chapter10/ex10_05/stack.h"
	"excercise/Chapter10/ex10_05/stack.cpp"
	"excercise/Chapter10/ex10_05/usestack.cpp")
add_executable(ex10_06
	"excercise/Chapter10/ex10_06/move.h"
	"excercise/Chapter10/ex10_06/move.cpp"
	"excercise/Chapter10/ex10_06/usemove.cpp")
add_executable(ex10_07
	"excercise/Chapter10/ex10_07/plorg.h"
	"excercise/Chapter10/ex10_07/plorg.cpp"
	"excercise/Chapter10/ex10_07/useplorg.cpp")
add_executable(ex10_08
	"excercise/Chapter10/ex10_08/list.h"
	"excercise/Chapter10/ex10_08/list.cpp"
	"excercise/Chapter10/ex10_08/uselist.cpp")


# -----------------------------------------------------------------
# 제 11장: 클래스의 활용 (Chapter 11)
# -----------------------------------------------------------------
add_executable(ch11_01-03 
	"source/Chapter11/ch11_01.h"
	"source/Chapter11/ch11_02.cpp"
	"source/Chapter11/ch11_03.cpp")
add_executable(ch11_04-06
	"source/Chapter11/ch11_04.h"
	"source/Chapter11/ch11_05.cpp"
	"source/Chapter11/ch11_06.cpp")
add_executable(ch11_07-09
	"source/Chapter11/ch11_07.h"
	"source/Chapter11/ch11_08.cpp"
	"source/Chapter11/ch11_09.cpp")
add_executable(ch11_10-12 
	"source/Chapter11/ch11_10.h"
	"source/Chapter11/ch11_11.cpp"
	"source/Chapter11/ch11_12.cpp")
add_executable(ch11_13-15 
	"source/Chapter11/ch11_13.h"
	"source/Chapter11/ch11_14.cpp"
	"source/Chapter11/ch11_15.cpp")
add_executable(ch11_16-18
	"source/Chapter11/ch11_16.h"
	"source/Chapter11/ch11_17.cpp"
	"source/Chapter11/ch11_18.cpp")
add_executable(ch11_19-21 
	"source/Chapter11/ch11_19.h"
	"source/Chapter11/ch11_20.cpp"
	"source/Chapter11/ch11_21.cpp")
add_executable(ex11_01 
	"source/Chapter11/ch11_13.h"
	"source/Chapter11/ch11_14.cpp"
	"excercise/Chapter11/ex11_01.cpp")
add_executable(ex11_02
	"excercise/Chapter11/ex11_02/vect1.h"
	"excercise/Chapter11/ex11_02/vect1.cpp"
	"excercise/Chapter11/ex11_02/randwalk.cpp")
add_executable(ex11_03
	"excercise/Chapter11/ex11_03/vector.h"
	"excercise/Chapter11/ex11_03/vector.cpp"
	"excercise/Chapter11/ex11_03/usevector.cpp")
add_executable(ex11_04
	"excercise/Chapter11/ex11_04/mytime4.h"
	"excercise/Chapter11/ex11_04/mytime4.cpp"
	"excercise/Chapter11/ex11_04/usetime4.cpp")
add_executable(ex11_05
	"excercise/Chapter11/ex11_05/stonewt2.h"
	"excercise/Chapter11/ex11_05/stonewt2.cpp"
	"excercise/Chapter11/ex11_05/stone2.cpp")
add_executable(ex11_06
	"excercise/Chapter11/ex11_06/stonewt3.h"
	"excercise/Chapter11/ex11_06/stonewt3.cpp"
	"excercise/Chapter11/ex11_06/stone3.cpp")
add_executable(ex11_07
	"excercise/Chapter11/ex11_07/complex0.h"
	"excercise/Chapter11/ex11_07/complex0.cpp"
	"excercise/Chapter11/ex11_07/usecmplx.cpp")


# -----------------------------------------------------------------
# 제 12장: 클래스와 동적 메모리 대입 (Chapter 12)
# -----------------------------------------------------------------
add_executable(ch12_01-03 
	"source/Chapter12/ch12_01.h"
	"source/Chapter12/ch12_02.cpp"
	"source/Chapter12/ch12_03.cpp")
add_executable(ch12_04-05 
	"source/Chapter12/ch12_04.h"
	"source/Chapter12/ch12_05.cpp"
	"source/Chapter12/ch12_06.cpp")
add_executable(ch12_07 
	"source/Chapter12/ch12_04.h"
	"source/Chapter12/ch12_05.cpp"
	"source/Chapter12/ch12_07.cpp")
add_executable(ch12_08 "source/Chapter12/ch12_08.cpp")
add_executable(ch12_09 "source/Chapter12/ch12_09.cpp")
add_executable(ch12_10-12 
	"source/Chapter12/ch12_10.h"
	"source/Chapter12/ch12_11.cpp"
	"source/Chapter12/ch12_12.cpp")
add_executable(ex12_01 
	"excercise/Chapter12/ex12_01/cow.h"
	"excercise/Chapter12/ex12_01/cow.cpp"
	"excercise/Chapter12/ex12_01/usecow.cpp")
add_executable(ex12_02 
	"excercise/Chapter12/ex12_02/string2.h"
	"excercise/Chapter12/ex12_02/string2.cpp"
	"excercise/Chapter12/ex12_02/pe12-02.cpp")
add_executable(ex12_03 
	"excercise/Chapter12/ex12_03/stock3.h"
	"excercise/Chapter12/ex12_03/stock3.cpp"
	"excercise/Chapter12/ex12_03/usestok3.cpp")
add_executable(ex12_04 
	"excercise/Chapter12/ex12_04/stack1.h"
	"excercise/Chapter12/ex12_04/stack1.cpp"
	"excercise/Chapter12/ex12_04/usestak1.cpp")
add_executable(ex12_05 
	"excercise/Chapter12/ex12_05/queue.h"
	"excercise/Chapter12/ex12_05/queue.cpp"
	"excercise/Chapter12/ex12_05/bank2.cpp")
add_executable(ex12_06 
	"excercise/Chapter12/ex12_06/queue.h"
	"excercise/Chapter12/ex12_06/queue.cpp"
	"excercise/Chapter12/ex12_06/bank3.cpp")


# -----------------------------------------------------------------
# 제 13장: 클래스의 상속 (Chapter 13)
# -----------------------------------------------------------------
add_executable(ch13_01-03 
	"source/Chapter13/ch13_01.h"
	"source/Chapter13/ch13_02.cpp"
	"source/Chapter13/ch13_03.cpp")
add_executable(ch13_04-06 
	"source/Chapter13/ch13_04.h"
	"source/Chapter13/ch13_05.cpp"
	"source/Chapter13/ch13_06.cpp")
add_executable(ch13_07-09 
	"source/Chapter13/ch13_07.h"
	"source/Chapter13/ch13_08.cpp"
	"source/Chapter13/ch13_09.cpp")
add_executable(ch13_10
	"source/Chapter13/ch13_07.h"
	"source/Chapter13/ch13_08.cpp"
	"source/Chapter13/ch13_10.cpp")
add_executable(ch13_11-13 
	"source/Chapter13/ch13_11.h"
	"source/Chapter13/ch13_12.cpp"
	"source/Chapter13/ch13_13.cpp")
add_executable(ch13_15 
	"source/Chapter13/ch13_14.h"
	"source/Chapter13/ch13_15.cpp"
	"source/Chapter13/ch13_16.cpp")
add_executable(ex13_01 
	"excercise/Chapter13/ex13_01/classic.h"
	"excercise/Chapter13/ex13_01/classic.cpp"
	"excercise/Chapter13/ex13_01/pe13-01.cpp")
add_executable(ex13_02 
	"excercise/Chapter13/ex13_02/classic1.h"
	"excercise/Chapter13/ex13_02/classic1.cpp"
	"excercise/Chapter13/ex13_02/pe13-02.cpp")
add_executable(ex13_03 
	"excercise/Chapter13/ex13_03/dmaabc.h"
	"excercise/Chapter13/ex13_03/dmaabc.cpp"
	"excercise/Chapter13/ex13_03/pe13-03.cpp")
add_executable(ex13_04 
	"excercise/Chapter13/ex13_04/port.h"
	"excercise/Chapter13/ex13_04/port.cpp"
	"excercise/Chapter13/ex13_04/pe13-04.cpp")


# -----------------------------------------------------------------
# 제 14장: C++ 코드의 재활용 (Chapter 14)
# -----------------------------------------------------------------
add_executable(ex14_01-03 
	"source/Chapter14/ch14_01.h"
	"source/Chapter14/ch14_02.cpp"
	"source/Chapter14/ch14_03.cpp")
add_executable(ex14_04-06 
	"source/Chapter14/ch14_04.h"
	"source/Chapter14/ch14_05.cpp"
	"source/Chapter14/ch14_06.cpp")
add_executable(ex14_07-09 
	"source/Chapter14/ch14_07.h"
	"source/Chapter14/ch14_08.cpp"
	"source/Chapter14/ch14_09.cpp")
add_executable(ex14_10-12 
	"source/Chapter14/ch14_10.h"
	"source/Chapter14/ch14_11.cpp"
	"source/Chapter14/ch14_12.cpp")
add_executable(ex14_13-14 
	"source/Chapter14/ch14_13.h"
	"source/Chapter14/ch14_14.cpp") 
add_executable(ex14_15-16 
	"source/Chapter14/ch14_15.h"
	"source/Chapter14/ch14_16.cpp")
add_executable(ex14_17-18
	"source/Chapter14/ch14_17.h"
	"source/Chapter14/ch14_18.cpp")
add_executable(ex14_19 "source/Chapter14/ch14_19.cpp")
add_executable(ex14_20 "source/Chapter14/ch14_20.cpp")
add_executable(ex14_21 
	"source/Chapter14/ch14_13.h"
	"source/Chapter14/ch14_21.cpp")
add_executable(ex14_22 "source/Chapter14/ch14_22.cpp")
add_executable(ex14_23 "source/Chapter14/ch14_23.cpp")
add_executable(ex14_24 "source/Chapter14/ch14_24.cpp")
add_executable(ex14_01 
	"excercise/Chapter14/ex14_01/pair.h"
	"excercise/Chapter14/ex14_01/winec.h"
	"excercise/Chapter14/ex14_01/winec.cpp"
	"excercise/Chapter14/ex14_01/pe14-1.cpp")
add_executable(ex14_02 
	"excercise/Chapter14/ex14_02/pair.h"
	"excercise/Chapter14/ex14_02/winei.h"
	"excercise/Chapter14/ex14_02/winei.cpp"
	"excercise/Chapter14/ex14_02/pe14-2.cpp")
add_executable(ex14_03
	"excercise/Chapter14/ex14_03/queuetp.h"
	"excercise/Chapter14/ex14_03/worker.h"
	"excercise/Chapter14/ex14_03/worker.cpp"
	"excercise/Chapter14/ex14_03/pe14-3.cpp")
add_executable(ex14_04
	"excercise/Chapter14/ex14_04/person.h"
	"excercise/Chapter14/ex14_04/person.cpp"
	"excercise/Chapter14/ex14_04/pe14-4.cpp")
add_executable(ex14_05
	"excercise/Chapter14/ex14_05/emp.h"
	"excercise/Chapter14/ex14_05/emp.cpp"
	"excercise/Chapter14/ex14_05/pe14-5.cpp")


# -----------------------------------------------------------------
# 제 15장: 프렌드, 예외, 기타 사항 (Chapter 15)
# -----------------------------------------------------------------
add_executable(ex15_01-02 
	"source/Chapter15/ch15_01.h"
	"source/Chapter15/ch15_02.cpp"
	"source/Chapter15/ch15_03.cpp")



# -----------------------------------------------------------------
# 제 16장: string 클래스와 표준 템플릿 라이브러리 (Chapter 16)
# -----------------------------------------------------------------


# -----------------------------------------------------------------
# 제 17장: 입력, 출력, 파일 (Chapter 17)
# -----------------------------------------------------------------


# -----------------------------------------------------------------
# 제 18장: 새로운 C++ 표준과의 만남 (Chapter 18)
# -----------------------------------------------------------------