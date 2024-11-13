//Production Worker.h - specification file for the ProductionWorker class.

#pragma once
#include <iostream>
#include "Employee.h"

using namespace std;

class ProductionWorker : public Employee
{
private:
	int shift;
	double hourlyRate;
}; 
