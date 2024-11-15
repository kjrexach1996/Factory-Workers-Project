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
	//shift member variable must be accessible and an int value must be stored.
	//Function will return a string; "Day" when shift == 1, "Night" when shift == 2,
	//or "None" if the object is created using the default parameter 0.
	string getShift();

	//shift member variable is accessible and initialized, function must expect to take an
	//int as a parameter.
	//Function will store the supplied int parameter into the "shift" member variable.
	void setShift(int);

	//hourlyRate member variable is accessible and initialized, function must expect to take an
	//double as a parameter.
	//Function will store the supplied double parameter into the "hourlyRate" member variable.
	double getHourlyRate();

	//hourlyRate member variable is accessible and initialized, function must expect to take an
	//double as a parameter.
	//Function will store the supplied int parameter into the "hourlyRate" member variable.
	void setHourlyRate(double);

	//Function expects shift and hourlyRate variables to be accessible with appropriate values; also
	//expects to be able to access base class Employee's print function.
	//Function will print out a header for the object; function will call on Employee's print function
	//and override while also displaying production worker's shift time and hourly rate.
	void print();

	//Constructor for ProductionWorker object. Function should expect to be able to create an Employee object
	//and have access to its member variables.
	//Function will create a default object if no parameters are supplied.
	ProductionWorker(string name = "NAME", string empNumber = "EMPLOYEE NUMBER", string hireDate = "HIRE DATE", int shift = 0, double rate = 0.0)
		: Employee(name, empNumber, hireDate), shift(shift), hourlyRate(rate) {}
}; 
