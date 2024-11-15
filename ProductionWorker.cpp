// ProductionWorker.cpp - implementation file for the ProductionWorker class.

#include <iomanip>
#include "Production Worker.h"

using namespace std;

string ProductionWorker::getShift()
{
	if (shift == 1)
		return "Day";
	else if (shift == 2)
		return "Night";
	return "None";
}

void ProductionWorker::setShift(int shiftTime)
{
	shift = shiftTime;
}

double ProductionWorker::getHourlyRate()
{
	return hourlyRate;
}

void ProductionWorker::setHourlyRate(double rate)
{
	hourlyRate = rate;
}

void ProductionWorker::print()
{
	cout << "Production Worker" << endl;
	Employee::print();
	cout << "Shift: " << getShift() << endl;
	cout << "Hourly Pay Rate: $" << fixed << setprecision(2) << getHourlyRate() << endl;
}
