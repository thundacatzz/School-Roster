#include <iostream>
#include "Employee.h"
#include "Faculty.h"
#include "MyDate.h"
#include "Person.h"
#include "Staff.h"
#include "Student.h"
#include <vector>
// This program takes user input to dynamically create a vector of people of different inherited classes. It can then return all of the information entered.
// Created by Logan Skura, 10/16/2022
int main()
{
	int j = 0;
	std::vector<Person*> personList;
	bool moreObjects = true;
	char decision = 'x';
	std::cout << "Welcome to the data input interface." << '\n'; 

	while (moreObjects == true)
	{
		std::cout << "Enter U to input student data, F for faculty, S for staff, P to print out all data entered, or Q to quit. ";
		std::cin >> decision;

		switch (decision)
		{
		case 'U': {
			personList.push_back(new Student);
			(*personList.at(j)).InputData();
			j++;
			break;
		}
		case 'F': {
			personList.push_back(new Faculty);
			(*personList.at(j)).InputData();
			j++;
			break;
		}
		case 'S': {
			personList.push_back(new Staff);
			(*personList.at(j)).InputData();
			j++;
			break;
		}
		case 'P': {
			for (int i = 0; i < personList.size(); i++)
			{
				(* personList.at(i)).PrintData();
				std::cout << '\n';
			}
		}
		case 'Q':
			moreObjects = false;
			break;
		default:
			std::cout << decision << " is not a valid choice. Please enter U, F, S, or Q to quit.";
			break;
		}

	}
}