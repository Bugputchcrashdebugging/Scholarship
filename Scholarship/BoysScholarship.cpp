#include "BoysScholarship.h"
double BoysScholarship::m_PASS_RANGE = 4.2;
double BoysScholarship::m_PAYMENT = 1000;

void BoysScholarship::setPayment(double _averageMark)
{
	_averageMark > m_PASS_RANGE ? m_payment = m_PAYMENT : m_payment = 0;
}
