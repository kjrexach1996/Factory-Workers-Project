//Employee.cpp - implementation file for the Employee class.

#include "Employee.h"

string Employee::getName()
{
	return name;
}

void Employee::setName(string empName)
{
	name = empName;
}

string Employee::getEmpNumber()
{
	return empNumber;
}

void Employee::setEmpNumber(string number)
{
	empNumber = number;
}

string Employee::getHireDate()
{
	return hireDate;
}

void Employee::setHireDate(string date)
{
	hireDate = date;
}

void Employee::print()
{
	cout << "Name: " << name << endl;
	cout << "Employee Number: " << empNumber << endl;
	cout << "Hire Date: " << hireDate << endl;
}