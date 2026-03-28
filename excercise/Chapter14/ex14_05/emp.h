#ifndef EMP_H_
#define EMP_H_

#include <iostream>
#include <string>

class abstr_emp
{
private:
	std::string fname;				// abstr_emp의 퍼스트 네임
	std::string lname;				// abstr_emp의 라스트 네임
	std::string job;				// abstr_emp의 직무
public:
	abstr_emp();
	abstr_emp(const std::string& fn, const std::string& ln, const std::string& j);
	virtual void ShowAll() const;	// 모든 데이터를 보여 준다
	virtual void SetAll();			// 사용자에게 값들을 입력하라고 요구한다
	friend std::ostream& operator<<(std::ostream& os, const abstr_emp& e);	// 퍼스트 네임과 라스트 네임을 디스플레이한다
	virtual ~abstr_emp() = 0;		// 가상 기초 클래스
};

class employee : public abstr_emp
{
public:
	employee();
	employee(const std::string& fn, const std::string& ln, const std::string& j);
	virtual void ShowAll() const;
	virtual void SetAll();
	~employee() {}
};

class manager : virtual public abstr_emp
{
private:
	int inchargeof;					// 관리하는 abstr_emp 수
protected:
	int InChargeOf() const { return inchargeof; }	// 출력
	int& InChargeOf() { return inchargeof; }		// 입력
public:
	manager();
	manager(const std::string& fn, const std::string& ln, const std::string& j, int ico = 0);
	manager(const abstr_emp& e, int ico);
	manager(const manager& m);
	virtual void ShowAll() const;
	virtual void SetAll();
	~manager() {}
};

class fink : virtual public abstr_emp
{
private:
	std::string reportsto;			// fink가 보고하는 대상
protected:
	const std::string ReportsTo() const { return reportsto; }
	std::string& ReportsTo() { return reportsto; }
public:
	fink();
	fink(const std::string& fn, const std::string& ln, const std::string& j, const std::string& rpo);
	fink(const abstr_emp& e, const std::string& rpo);
	fink(const fink& e);
	virtual void ShowAll() const;
	virtual void SetAll();
	~fink() {}
};

class highfink : public manager, public fink	// fink 관리
{
public:
	highfink();
	highfink(const std::string& fn, const std::string& ln, const std::string& j, const std::string& rpo, int ico);
	highfink(const abstr_emp& e, const std::string& rpo, int ico);
	highfink(const fink& f, int ico);
	highfink(const manager& m, const std::string& rpo);
	highfink(const highfink& h);
	virtual void ShowAll() const;
	virtual void SetAll();
};

#endif