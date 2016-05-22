#include "Student.h"



Student::Student()
{
}


Student::~Student()
{
}

void Student::setScholarship()
{
	if (m_gender == "femele")
		m_scholarship = std::make_unique<GirlsScholarShip>(m_average);
	else
		m_scholarship = std::make_unique<BoysScholarship>(m_average);

}
