#pragma once
#include "Employee.h"
class Faculty : public Employee
{
    int roomNum;
    bool tenure;
    MyDate officeHours;
public:
    void InputData();
    void PrintData();
};

