// Factory Workers Project.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "TeamLeader.h"
#include "ShiftSupervisor.h"

int main()
{
    Employee myEmp;
    Employee yourEmp("John Smith", "246810", "01/01/2024");
    myEmp.print();
    cout << endl;
    yourEmp.print();
    cout << endl;

    ProductionWorker myWorker;
    ProductionWorker Paul("Paul Jones", "12345", "10/28/2024", 1, 20.25);
    ProductionWorker Harriet("Harriet Smith", "54321", "6/15/2024", 2, 25.50);
    cout << "Production Worker " << endl;
    myWorker.print();
    cout << endl;
    cout << "Production Worker " << endl;
    Paul.print();
    cout << endl;
    cout << "Production Worker " << endl;
    Harriet.print();
    cout << endl;

    ShiftSupervisor mySupervisor;
    ShiftSupervisor Elmer("Elmer Velasquez", "100325", "1/17/2024", 70000, 1000);
    cout << "Shift Supervisor " << endl;
    mySupervisor.print();
    cout << endl;
    cout << "Shift Supervisor " << endl;
    Elmer.print();
    cout << endl;

    TeamLeader myLeader;
    TeamLeader Mike("Mike Rogers", "64327", "2/7/2024", 2, 25.50, 150, 20, 10);
    cout << "Team Leader" << endl;
    myLeader.print();
    cout << endl;
    cout << "Team Leader" << endl;
    Mike.print();
    cout << endl;
}


