#include "Staff.h"
#include <iostream>

void Staff::InputData()
{
	Person::InputData();
	Employee::InputData();
	std::cout << "Enter staff member's title. ";
	std::cin >> title;
}
void Staff::PrintData()
{
	Person::PrintData();
	Employee::PrintData();
	std::cout << title << '\n';
}