//ShiftSupervisor.cpp - implementation file for the ShiftSupervisor class.

#include <iomanip>
#include "ShiftSupervisor.h"

using namespace std;

double ShiftSupervisor::getSalary()
{
	return salary;
}

void ShiftSupervisor::setSalary(double annualSalary)
{
	salary = annualSalary;
}

double ShiftSupervisor::getAnnualBonus()
{
	return annualBonus;
}

void ShiftSupervisor::setAnnualBonus(double bonus)
{
	annualBonus = bonus;
}

void ShiftSupervisor::print()
{
	Employee::print();
	cout << "Annual Salary: $" << getSalary() << endl;
	cout << "Annual Bonus: $" << fixed << setprecision(2) << getAnnualBonus() << endl;
}