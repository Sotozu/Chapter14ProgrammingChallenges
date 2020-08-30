#pragma once
#include <iostream>
#include <string>
class DayofYear2
{
private:
	int day;
	static std::string months[12];
	static int numDaysMonth[12];
	void checkValidInput() {
		if (day < 1 || day > 365) {
			std::cout << "Error incorrect input. Ending Program." << std::endl;
			exit(0);
		}
	}
public:
	//Constructor

	DayofYear2(int);

	void printDate();
};



