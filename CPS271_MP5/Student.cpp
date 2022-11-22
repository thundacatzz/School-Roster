#include "Student.h"
#include <iomanip>
#include <iostream>

void Student::InputData()
{
	Person::InputData();
	int studentYear = 0;
	std::cout << "Enter student's year as an integer. ( 1 = freshman, 2 = sophomore, etc. ): ";
	std::cin >> studentYear;
	std::cout << '\n' << "Enter student's GPA: ";
	std::cin >> gpa;
	std::cout << '\n';
	switch (studentYear)
	{
	case 1:
	{
		year = freshman;
		break;
	}
	case 2:
	{
		year = sophomore;
		break;
	}
	case 3:
	{
		year = junior;
		break;
	}
	case 4:
	{
		year = senior;
		break;
	}
	default:
	{
		std::cout << studentYear << " is not a valid year for students. Student set to year 1 (freshman).";
		year = freshman;
		break;
	}
	}
}
void Student::PrintData()
{
	Person::PrintData();
	switch (year)
	{
	case Grade::freshman:
		std::cout << "Freshman";
		break;
	case Grade::sophomore:
		std::cout << "Sophomore";
		break;
	case Grade::junior:
		std::cout << "Junior";
		break;
	case Grade::senior:
		std::cout << "Senior";
		break;
	default:
		std::cout << "No student year detected.";
		break;
	}
	std::cout << ", GPA: " << std::fixed << std::setprecision(2) << gpa << '\n';
}