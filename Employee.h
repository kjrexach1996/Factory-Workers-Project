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
	//name member variable must be accessible; variable must contain a string value.
	//Function will return "NAME" for default generated object or a string
	//representing a name if one is provided.
	string getName();

	//name member variable must be accessible and initialized; function must also expect a 
	//string parameter to be provided.
	//Function will update the user-provided string parameter in the member variable "name".
	void setName(string);

	//empNumber member variable must be accessible; variable must contain a string value.
	//Function will return "EMPLOYEE NUMBER" for default generated object or a string
	//representing an employee number if one is provided.
	string getEmpNumber();

	//empNumber member variable must be accessible and initialized; function must also expect a 
	//string parameter to be provided.
	//Function will update the user-provided string parameter in the member variable "empNumber".
	void setEmpNumber(string);

	//hireDate member variable must be accessible; variable must contain a string value.
	//Function will return "HIRE DATE" for default generated object or a string
	//representing an employee's hire date if one is provided.
	string getHireDate();

	//hireDate member variable must be accessible and initialized; function must also expect a 
	//string parameter to be provided.
	//Function will update the user-provided string parameter in the member variable "hireDate".
	void setHireDate(string);

	//Function expects all private member variables to be accessible with string values stored in each variable.
	//Function will display employee information in the following order with proper formatting: 
	//Name, Employee Number, Hire Date.
	void print();

	//Constructor for the Employee object. 
	//Function will create a default object if no parameters are supplied.
	Employee(string name = "NAME", string empNumber = "EMPLOYEE NUMBER", string hireDate = "HIRE DATE")
		: name(name), empNumber(empNumber), hireDate(hireDate) {}
};




