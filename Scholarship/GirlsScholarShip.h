#pragma once
#include "Scholarship.h"
class GirlsScholarShip :
	public Scholarship
{
public:
	GirlsScholarShip(double _averageMark)
	{
		//girls check 
		setPayment(_averageMark);
	}
	static void setCoefficient(double _coefficient) { m_COEFFICIENT = _coefficient; }
private:
	void setPayment(double _averageMark)override;
	static double m_COEFFICIENT;
};


