// studenti.h -- private 상속을 사용하는 Student 클래스를 정의한다.
#ifndef STUDENTI_H_
#define STUDENTI_H_

#include <iostream>
#include <string>
#include <valarray>
class Student : private std::string, private std::valarray<double>
{
private:
	typedef std::valarray<double> ArrayDb;
	// scores 출력을 위한 private 메서드
	std::ostream& arr_out(std::ostream& os) const;
public:
	Student() : std::string("Null Student"), ArrayDb() {}
	explicit Student(const std::string& s) : std::string(s), ArrayDb() {}
	explicit Student(int n) : std::string("Nully"), ArrayDb(n) {}
	Student(const std::string& s, int n) : std::string(s), ArrayDb(n) {}
	Student(const std::string& s, const ArrayDb& a) : std::string(s), ArrayDb(a) {}
	Student(const char* str, const double* pd, int n) : std::string(str), ArrayDb(pd, n) {}
	~Student() {}
	double Average() const;
	double& operator[](int i);
	double operator[](int i) const;
	const std::string& Name() const;
	// 프렌드
	// 입력
	friend std::istream& operator>>(std::istream& is, Student& stu);		// 1워드
	friend std::istream& getline(std::istream& is, Student& stu);			// 1줄
	// 출력
	friend std::ostream& operator<<(std::ostream& os, const Student& stu);
};

#endif