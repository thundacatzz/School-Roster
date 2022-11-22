#include <iostream>
#include <string>
#include "MyDate.h"

void MyDate::InputData()
{
	std::string date, day, month, year;
	std::cin >> date;
	day = date.substr(0, 2);
	month = date.substr((date.find_first_of('/') + 1), 2);
	year = date.substr((date.find_last_of('/') + 1), 4);
	MyDate::day = std::stoi(day);
	MyDate::month = std::stoi(month);
	MyDate::year = std::stoi(year);
}
void MyDate::PrintData()
{
	std::cout << day << '/' << month << '/' << year;
}
