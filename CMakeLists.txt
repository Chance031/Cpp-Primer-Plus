cmake_minimum_required(VERSION 3.10)
project(Cpp_Primer_Plus)

# 1. C++ 표준 설정 (Cpp Primer Plus 예제는 11이면 충분합니다)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# 2. 출력 디렉토리 설정 (빌드된 .exe 파일들이 bin 폴더에 모이게 함)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

# 첫 번째 예제: myfirst.cpp
add_executable(my_first_exam Cpp_Primer_Plus/Cpp_Primer_Plus/myfirst.cpp)

# 두 번째 예제: carrots.cpp (새로 추가한 부분)
add_executable(carrots_exam Cpp_Primer_Plus/Cpp_Primer_Plus/carrots.cpp)