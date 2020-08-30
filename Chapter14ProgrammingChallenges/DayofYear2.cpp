#include "DayofYear2.h"
#include <iostream>

//Constructor
DayofYear2::DayofYear2(int i) {
	day = i;
	checkValidInput();
}


void DayofYear2::printDate() {
	int find_day = day;
	std::string date_string;
	for (int i = 0; i < 12; i++) {
		if (find_day <= numDaysMonth[i]) {
			date_string = months[i];
			break;
		}
		find_day -= numDaysMonth[i];
	}

	std::cout << date_string << " " << find_day << std::endl;
}

//define static variables. Found this method of defining the static member variable outside the calss online, But also found on page 813.

//Because static member variables are not part of the individual class objects(they are treated 
//similarly to global variables, and get initialized when the program starts), 
//you must explicitly define the static member outside of the class, in the global scope.

std::string DayofYear2::months[12] = { "January","February", "March", "April", "May", "June",
									  "July", "August", "September", "October", "November", "December" };

int DayofYear2::numDaysMonth[12] = { 31,28,31,30,31,31,30,31,30,31,30,31 };