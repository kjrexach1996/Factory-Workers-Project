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
	double getMonthlyBonus();

	void setMonthlyBonus(double);

	int getReqHours();

	void setReqHours(int);

	int getAttHours();

	void setAttHours(int);

	void print();

	TeamLeader(string name = "NAME", string empNumber = "EMPLOYEE NUMBER", string hireDate = "HIRE DATE", int shift = 0, double rate = 0.0, double bonus = 0.0, int required = 0, int attended = 0)
		: ProductionWorker(name, empNumber, hireDate, shift, rate), monthlyBonus(bonus), reqHours(required), attHours(attended) {}
};
