//Production Worker.h - specification file for the ProductionWorker class.

#pragma once
#include "Employee.h"

using namespace std;

class ProductionWorker : public Employee
{
private:
	int shift;
	double hourlyRate;
public:
	string getShift();

	void setShift(int);

	double getHourlyRate();

	void setHourlyRate(double);

	void print();

	ProductionWorker(string name = "NAME", string empNumber = "EMPLOYEE NUMBER", string hireDate = "HIRE DATE", int shift = 0, double rate = 0.0)
		: Employee(name, empNumber, hireDate), shift(shift), hourlyRate(rate) {}
}; 
