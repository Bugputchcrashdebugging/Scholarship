#pragma once
class Scholarship
{
public:
	Scholarship() {};
	double getPurchase()const { return m_payment; }
	virtual ~Scholarship() {};
private:
	virtual void setPayment(double) = 0;
protected:
	double m_payment;
};

