//TeamLeader.h - specification file for the TeamLeader class.

#include "TeamLeader.h"

using namespace std;

double TeamLeader::getMonthlyBonus()
{
	return monthlyBonus;
}

void TeamLeader::setMonthlyBonus(double bonus)
{
	monthlyBonus = bonus;
}

int TeamLeader::getReqHours()
{
	return reqHours;
}

void TeamLeader::setReqHours(int hours)
{
	reqHours = hours;
}

int TeamLeader::getAttHours()
{
	return attHours;
}

void TeamLeader::setAttHours(int hours)
{
	attHours = hours;
}

void TeamLeader::print()
{
	ProductionWorker::print();
	cout << "Monthly Bonus: $" << getMonthlyBonus() << endl;
	cout << "Required Training Hours: " << getReqHours() << endl;
	cout << "Attended Training Hours: " << getAttHours() << endl;
}