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