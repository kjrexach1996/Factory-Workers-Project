// Factory Workers Project.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Employee.h"

int main()
{
    Employee myEmp;
    Employee yourEmp("Paul Jones", "12345", "10/28/2024");
    myEmp.print();
    cout << endl << endl;
    yourEmp.print();
    cout << endl << endl;
}


