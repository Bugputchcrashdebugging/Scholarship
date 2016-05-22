#include<iostream>
#include<string>
#include"Student.h"
using namespace std;

int main()
{
	GirlsScholarShip::setCoefficient(238.2);
	BoysScholarship::setPaymentSize(1000.0);
	BoysScholarship::setPassRange(4.2);
	Student John("John", "mele", "cs7", 5.0);
	John.setScholarship();
	cout << John.getScholarShip() << endl;
	Student Sara("Sara", "femele", "cs9", 5.0);
	Sara.setScholarship();
	cout << Sara.getScholarShip() << endl;
	return 0;
}
