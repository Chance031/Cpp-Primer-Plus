// worker0.h -- 작업 클래스들
#ifndef WORKER0_H_
#define WORKER0_H_

#include <string>

class Worker						// 추상화 기초 클래스
{
private:
	std::string fullname;
	long id;
public:
	Worker() : fullname("no name"), id(0L) {}
	Worker(const std::string& s, long n) : fullname(s), id(n) {}
	virtual ~Worker() = 0;			// 순수 가상 파괴자
	virtual void Set();
	virtual void Show() const;
};

class Waiter : public Worker
{
private:
	int panache;
public:
	Waiter() : Worker(), panache(0) {}
	Waiter(const std::string& s, long n, int p = 0) : Worker(s, n), panache(p) {}
	Waiter(const Worker& wk, int p = 0) : Worker(wk), panache(p) {}
	void Set();
	void Show() const;
};

class Singer : public Worker
{
protected:
	enum { other, alto, contralto, soprano, bass, baritone, tenor };
	enum { Vtypes = 7 };
private:
	static char* pv[Vtypes];		// 목소리 유형 문자열 대응 값
	int voice;
public:
	Singer() : Worker(), voice(other) {}
	Singer(const std::string& s, long n, int v = ohter) : Worker(s, n), voice(v) {}
	Singer(const Worker& wk, int v = other) : Worker(wk), voice(v) {}
	void Set();
	void Show() const;
};

#endif;