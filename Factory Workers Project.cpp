// Factory Workers Project.cpp - This file acts as the testing file for the base class Employee
// and its derived classes ProductionWorker, ShiftSupervisor, and TeamLeader. All member functions
// and variables are used and accessed in each class' implementation file.

#include <iostream>
#include "TeamLeader.h"
#include "ShiftSupervisor.h"

int main()
{
    //Testing for Employee object.
    Employee myEmp;
    Employee yourEmp("John Smith", "246810", "01/01/2024");
    myEmp.print();
    cout << endl;
    yourEmp.print();
    cout << endl;

    //Testing for ProductionWorker object.
    ProductionWorker myWorker;
    ProductionWorker Paul("Paul Jones", "12345", "10/28/2024", 1, 20.25);
    ProductionWorker Harriet("Harriet Smith", "54321", "6/15/2024", 2, 25.50);
    myWorker.print();
    cout << endl;
    Paul.print();
    cout << endl;
    Harriet.print();
    cout << endl;

    //Testing for ShiftSupervisor object.
    ShiftSupervisor mySupervisor;
    ShiftSupervisor Elmer("Elmer Velasquez", "100325", "1/17/2024", 70000, 1000);
    mySupervisor.print();
    cout << endl;
    Elmer.print();
    cout << endl;

    //Testing for TeamLeader object.
    TeamLeader myLeader;
    TeamLeader Mike("Mike Rogers", "64327", "2/7/2024", 2, 25.50, 150, 20, 10);
    myLeader.print();
    cout << endl;
    Mike.print();
    cout << endl;
}


