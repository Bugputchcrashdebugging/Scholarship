#include "GirlsScholarShip.h"
double GirlsScholarShip::m_COEFFICIENT = 220;

void GirlsScholarShip::setPayment(double _averageMark)
{
	m_payment = _averageMark* m_COEFFICIENT;
}
