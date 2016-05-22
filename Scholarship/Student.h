#pragma once
#include<memory>
#include<string>
#include"BoysScholarship.h"
#include"GirlsScholarShip.h"
using std::string;
class Student
{
public:
	Student(const string& _name, const string &_gender, const string& _group, double _average) :
		m_name(_name), m_gender(_gender), m_group(_group), m_average(_average) {};
	Student(const Student&) = delete;
	Student& operator=(const Student &) = delete;
	void setScholarship();
	double getScholarShip()const { return m_scholarship->getPurchase(); }
	const string & getGender()const { return m_gender; }
	double getAverageMark()const { return m_average; }
private:
	string m_name;
	string m_group;
	string m_gender; // enum
	double m_average;
	std::unique_ptr<Scholarship>m_scholarship = nullptr;
};


