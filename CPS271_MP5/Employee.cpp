#include <iostream>
#include "Employee.h"

void Employee::InputData()
{
	std::cout << "Enter employee's salary." << '\n';
	std::cin >> salary;
	std::cout << "Enter employee's date of hire. (DD/MM/YYYY)" << '\n';
	dateHired.InputData();
}
void Employee::PrintData()
{
	std::cout << "Employee's salary is: $" << salary << '\n' << "Employee's date of hire is: ";
	dateHired.PrintData();
	std::cout << '\n';
}
