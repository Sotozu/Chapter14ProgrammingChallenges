#include "DayofYearModification3.h"
#include <iostream>
#include <string>
//Constructor
DayofYearModification3::DayofYearModification3(int i) {
	day = i;
	checkValidInput365();
}


DayofYearModification3::DayofYearModification3(int i, std::string user_month_input) {
	day = i;
	bool month_found = false;
	month = user_month_input;
	for (int i = 0; i < 12; i++) {
		if (month == months[i]) {
			month_found = true;
			month_index = i;
		}
	}
	isValidMonth(month_found);
	checkValidMonthDays(month_index);



}

//Function
void DayofYearModification3::printDate() {
	/*int find_day = day;
	std::string date_string;
	for (int i = 0; i < 12; i++) {
		if (find_day <= numDaysMonth[i]) {
			date_string = months[i];
			break;
		}
		find_day -= numDaysMonth[i];
	}*/

	std::cout << month << " " << day << std::endl;
}

//Overloading the Prefix Operator ++Variable
DayofYearModification3 DayofYearModification3::operator++() {
	++day;
	adjustDateAddition();
	return *this;
}

//Overloading the Prefix Operator ++Variable
DayofYearModification3 DayofYearModification3::operator++(int) {
	DayofYearModification3 temp(day, month);
	day++;
	adjustDateAddition();
	return temp;
}

//Overloading the Prefix Operator --Variable
DayofYearModification3 DayofYearModification3::operator--() {
	--day;
	adjustDateSubtraction();
	return *this;
}

//Overloading the Prefix Operator --Variable
DayofYearModification3 DayofYearModification3::operator--(int) {
	DayofYearModification3 temp(day, month);
	day--;
	adjustDateSubtraction();
	return temp;
}


//define static variables. Found this method of defining the static member variable outside the calss online, But also found on page 813.

//Because static member variables are not part of the individual class objects(they are treated 
//similarly to global variables, and get initialized when the program starts), 
//you must explicitly define the static member outside of the class, in the global scope.

std::string DayofYearModification3::months[12] = { "January","February", "March", "April", "May", "June",
									  "July", "August", "September", "October", "November", "December" };

int DayofYearModification3::numDaysMonth[12] = { 31,28,31,30,31,31,30,31,30,31,30,31 };