#pragma once
#include <string>
#include "MyDate.h"

class Person
{
	std::string name;
	MyDate birthDate;
	std::string phoneNumber;
	std::string email;
public:
	virtual void InputData();
	virtual void PrintData();
};

