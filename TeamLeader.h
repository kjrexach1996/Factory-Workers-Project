//TeamLeader.h - specification file for the TeamLeader class.

#pragma once
#include "Production Worker.h"

using namespace std;

class TeamLeader : public ProductionWorker
{
private:
	double monthlyBonus;
	int reqHours;
	int attHours;
public:
	//monthlyBonus member variable must be accessible with a double value stored.
	//Function should return a default double value of 0.00 or a user-supplied
	//double value should one be provided.
	double getMonthlyBonus();

	//monthlyBonus member variable must be accessible and initialized; function should also
	//expect to receive a double value as a parameter.
	//Function will store the provided double value into the "monthlyBonus" variable.
	void setMonthlyBonus(double);

	//reqHours member variable must be accessible with an int value stored.
	//Function should return a default int value of 0 or a user-supplied
	//int value should one be provided.
	int getReqHours();

	//reqHours member variable must be accessible and initialized; function should also
	//expect to receive an int value as a parameter.
	//Function will store the provided int value into the "reqHours" variable.
	void setReqHours(int);

	//attHours member variable must be accessible with an int value stored.
	//Function should return a default int value of 0 or a user-supplied
	//int value should one be provided.
	int getAttHours();

	//attHours member variable must be accessible and initialized; function should also
	//expect to receive an int value as a parameter.
	//Function will store the provided int value into the "attHours" variable.
	void setAttHours(int);

	//Function should expect for montlyBonus, reqHours, and attHours to exist and be accessible;
	//function should also expect ProductionWorker class' print function to be accessible.
	//Function will display a header for the TeamLeader class then call on the print function
	//in ProductionWorker to print its information while also providing information on the team
	//leader's monthly bonus and required and attended training hours. 
	void print();

	//Constructor for TeamLeader object. Function should expect to be able to create an ProductionWorker object
	//and have access to its member variables.
	//Function will create a default object if no parameters are supplied.
	TeamLeader(string name = "NAME", string empNumber = "EMPLOYEE NUMBER", string hireDate = "HIRE DATE", int shift = 0, double rate = 0.0, double bonus = 0.0, int required = 0, int attended = 0)
		: ProductionWorker(name, empNumber, hireDate, shift, rate), monthlyBonus(bonus), reqHours(required), attHours(attended) {}
};
