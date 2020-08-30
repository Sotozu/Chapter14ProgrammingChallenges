#pragma once
#pragma once
#include <iostream>
#include <string>
class DayofYearModification3 {
private:
	int day;
	static std::string months[12];
	static int numDaysMonth[12];
	std::string month;
	int month_index;
	void checkValidInput365() {
		if (day < 1 || day > 365) {
			std::cout << "Error: Days incorrect input. Ending Program." << std::endl;
			exit(0);
		}
	}
	bool isValidMonth(bool month_found) {
		if (month_found == false) {
			std::cout << "Error: Month incorrect input. Ending Program." << std::endl;
			exit(0);
		}
	}
	void checkValidMonthDays(int month) {
		if (day < 0 || day > numDaysMonth[month]) {
			std::cout << "Error: Day incorrect input. Ending Program." << std::endl;
			exit(0);

		}
	}

	void adjustDateAddition() {
		if (day > numDaysMonth[month_index]) {
			day = 1;
			month_index++;
			if (month_index == 12) {
				month_index = 0;
				month = months[month_index];
			}
			else {
				//std::cout << "HERE!" << std::endl;
				//std::cout << months[month_index] << std::endl;
				//std::cout << month_index << std::endl;

				month = months[month_index];

			}
		}
	}

	void adjustDateSubtraction() {
		if (day < 1) {
			month_index--;
			if (month_index == -1) {
				month_index = 11;
				month = months[month_index];
			}
				day = numDaysMonth[month_index];
		}
		else {
			//std::cout << "HERE!" << std::endl;
			//std::cout << months[month_index] << std::endl;
			//std::cout << month_index << std::endl;

			month = months[month_index];
		}
	}
public:
	//Constructor
	DayofYearModification3(int, std::string);
	DayofYearModification3(int);

	//Function
	void printDate();

	DayofYearModification3 operator++(); //Prefix ++ Operator
	DayofYearModification3 operator++(int); //Postfix ++ Operator

	DayofYearModification3 operator--(); //Prefix -- Operator
	DayofYearModification3 operator--(int); //Postfix -- Operator
};





    