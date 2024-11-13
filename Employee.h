//Employee.h - specification file for the Employee class.

#pragma once
#include <iostream>

using namespace std;

class Employee
{
private:
	string name;
	string empNumber;
	string hireDate;
public:
	string getName();

	void setName(string);

	string getEmpNumber();

	void setEmpNumber(string);

	string getHireDate();

	void setHireDate(string);

	void print();

	Employee(string name = "NAME", string empNumber = "EMPLOYEE NUMBER", string hireDate = "HIRE DATE")
		: name(name), empNumber(empNumber), hireDate(hireDate) {}
};
