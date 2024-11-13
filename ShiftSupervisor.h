//ShiftSupervisor.h - specification file for the ShiftSupervisor class.

#pragma once
#include "Employee.h"

using namespace std;

class ShiftSupervisor : public Employee
{
private:
	double salary;
	double annualBonus;
public:
	double getSalary();

	void setSalary(double);

	double getAnnualBonus();

	void setAnnualBonus(double);

	void print();

	ShiftSupervisor(string name = "NAME", string empNumber = "EMPLOYEE NUMBER", string hireDate = "HIRE DATE", double salary = 0.0, double bonus = 0.0)
		: Employee(name, empNumber, hireDate), salary(salary), annualBonus(bonus) {}
};