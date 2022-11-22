#pragma once
#include "Person.h"
class Employee :
    public Person
{
    long salary;
    MyDate dateHired;
public:
    virtual void InputData();
    virtual void PrintData();
};

