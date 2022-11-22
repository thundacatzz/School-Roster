#include <iostream>
#include "Person.h"

void Person::InputData()
{
	std::string anyName;
	std::cout << "Enter person's first name: ";
	std::cin >> anyName;
	name = anyName;
	std::cout << "Enter " << name << "'s last name: ";
	std::cin >> anyName;
	name = name + ' ' + anyName;
	std::cout << "Enter " << name << "'s phone number: ";
	std::cin >> phoneNumber;
	std::cout << "Enter " << name << "'s email address: ";
	std::cin >> email;
	std::cout << "Enter " << name << "'s birthdate (DD/MM/YYYY): ";
	birthDate.InputData();
}

void Person::PrintData()
{
	std::cout << name << '\n' << phoneNumber << '\n' << email << '\n' << "DOB: ";
	birthDate.PrintData();
	std::cout << '\n';
}