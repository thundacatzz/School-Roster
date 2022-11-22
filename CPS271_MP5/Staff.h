#pragma once
#include "Employee.h"
class Staff :
    public Employee
{
    std::string title;
public:
    void InputData();
    void PrintData();
};

