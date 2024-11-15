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
	//salary member variable must be accessible and a double value must be stored.
	//Function will return the double value 0.00 when the object is created using default
	//parameters or a user-provided double value.
	double getSalary();

	//salary member variable is accessible and initialized, function must expect to take an
	//double as a parameter.
	//Function will store the supplied double parameter into the "salary" member variable.
	void setSalary(double);

	//annualBonus member variable must be accessible and a double value must be stored.
	//Function will return the default double value 0.00 when the object is created using
	//default parameters or a user-supplied double value.
	double getAnnualBonus();

	//annualBonus member variable is accessible and initialized, function must expect to take an
	//double as a parameter.
	//Function will store the supplied double parameter into the "annualBonus" member variable.
	void setAnnualBonus(double);

	//Function expects salary and annualBonus variables to be accessible with appropriate values; also
	//expects to be able to access base class Employee's print function.
	//Function will print out a header for the object; function will call on Employee's print function
	//and override while also displaying supervisor's salary and annual bonus.
	void print();

	//Constructor for ShiftSupervisor object. Function should expect to be able to create an Employee object
	//and have access to its member variables.
	//Function will create a default object if no parameters are supplied.
	ShiftSupervisor(string name = "NAME", string empNumber = "EMPLOYEE NUMBER", string hireDate = "HIRE DATE", double salary = 0.0, double bonus = 0.0)
		: Employee(name, empNumber, hireDate), salary(salary), annualBonus(bonus) {}
};