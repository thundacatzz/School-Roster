#pragma once
#include "Person.h"
class Student :
    public Person
{
    enum Grade { freshman = 1, sophomore, junior, senior };
    Grade year;
    double gpa;
public:
    void InputData();
    void PrintData();
};

