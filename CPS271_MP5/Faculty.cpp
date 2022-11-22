#include "Faculty.h"
#include "Person.h"
#include <iostream>
#include <vector>

std::vector<MyDate> hoursList;
void Faculty::InputData()
{
	Person::InputData();
	Employee::InputData();
	std::cout << "Enter faculty's room number: ";
	std::cin >> roomNum;
	std::cout << "Is faculty tenured? Enter 1 if true, 0 if false. ";
	std::cin >> tenure;
	std::cout << "Enter dates the faculty holds office hours: (DD/MM/YYYY) " << '\n';
	bool moreHours = true;
	while (moreHours)
	{
		officeHours.InputData();
		hoursList.push_back(officeHours);
		std::cout << "Do you have more office hours to add? Enter 1 for yes or 0 for no. ";
		std::cin >> moreHours;
	}
}
void Faculty::PrintData()
{
	Person::PrintData();
	Employee::PrintData();
	std::cout << "Faculty's room number is: " << roomNum;
	if (tenure)
		std::cout << '\n' << "Is tenured.";
	else
		std::cout << '\n' << "Is not tenured.";
	std::cout << '\n' << "Office hours will be held on: " << '\n';
	for (int i = 0; i < hoursList.size(); i++)
	{
		hoursList.at(i).PrintData();
		std::cout << '\n';
	}
}