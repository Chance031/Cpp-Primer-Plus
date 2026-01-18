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
add_executable(ch02_01 Chapter02/myfirst.cpp)
add_executable(ch02_02 Chapter02/carrots.cpp)
add_executable(ch02_03 Chapter02/getinfo.cpp)


# -----------------------------------------------------------------
# 제 3장: 데이터 처리 (Chapter 03) - (추가 예정)
# -----------------------------------------------------------------
# 새로운 예제를 만들 때마다 아래에 add_executable을 추가하세요.
# add_executable(ch03_01_limits Chapter03/limits.cpp)