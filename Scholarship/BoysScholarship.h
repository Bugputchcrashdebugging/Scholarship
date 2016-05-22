#pragma once
#include "Scholarship.h"
class BoysScholarship :
	public Scholarship
{
public:
	BoysScholarship(double _averageMark)
	{
		// boys check
		setPayment(_averageMark);
	}
	static void setPassRange(double _range) { m_PASS_RANGE = _range; }
	static void setPaymentSize(double _payment) { m_PAYMENT = _payment; }
private:
	void setPayment(double _averageMark)override;
	static double m_PAYMENT;
	static double m_PASS_RANGE;
};

