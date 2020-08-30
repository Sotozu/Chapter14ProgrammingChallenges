#include "TimeOff5.h"
#include <string>
#include <iostream>




//Constructor

TimeOff5::TimeOff5() {
	name = "";
	identification_num = 0;
}

TimeOff5::TimeOff5(std::string n, int id) {
	name = n;
	identification_num = id;
}


//Accessor

std::string TimeOff5::getName() {
	return name;
}
int TimeOff5::getID() {
	return identification_num;
}

double TimeOff5::getVacWorkDays() {
	return vacTaken.getWorkDays();
}
int TimeOff5::getVacWorkHours() {
	return vacTaken.getHours();
}

double TimeOff5::getUnpVacWorkDays() {
	return unpaidTaken.getWorkDays();
}
int TimeOff5::getUnpVacWorkHours() {
	return unpaidTaken.getHours();
}

double TimeOff5::getSickWorkDays() {
	return sickTaken.getWorkDays();
}
int TimeOff5::getSickWorkHours() {
	return sickTaken.getHours();
}


//Mutator POLICY SPECIFIC
// change these to static maybe

//void TimeOff5::setMaxVacation() {
//	int value;
//	do {
//		std::cout << "Total Max amount of paid vacation days (MAX is 30): "; std::cin >> value;
//		if (value > 30) {
//			std::cout << "ERROR: Maximum possible amount of vacation days is 30." << std::endl;
//		}
//	} while (value > 30);
//	maxVacation.setWorkDays(value);
//}
//
//
//void TimeOff5::setMaxUnpaid() {
//	int value;
//	std::cout << "Total Max amount of unpaid vacation days: "; std::cin >> value;
//	
//	unpaidTaken.setWorkDays(value);
//
//}
//
//void TimeOff5::setMaxSickDays() {
//	int value;
//	std::cout << "Total Max amount of sick days: ";  std::cin >> value;
//	sickTaken.setWorkDays(value);
//
//}

// MUTATOR Employee Specific Data
void TimeOff5::setVacation(double days) {

	vacTaken.setWorkDays(days);
	if (vacTaken.getWorkDays() > 60) { //Once over 60 both paid and unpaid capoff
		vacTaken.setWorkDays(30);
		unpaidTaken.setWorkDays(30);
		std::cout << "ERROR: Over amount of vacation days. Total vacation days policy: 30 paid and 30 unpaid" << std::endl;
		std::cout << "SET PAID VACATION DAYS TO 30" << std::endl;
		std::cout << "SET UNPAID VACATION DAYS TO 30" << std::endl;
	}
	else if (vacTaken.getWorkDays() > 30) { //Adjust the paid vacation days if exceeds 30
		double excess = vacTaken.getWorkDays() - 30;
		vacTaken.setWorkDays(30);
		unpaidTaken.setWorkDays(excess);
	}

}

void TimeOff5::setUnpaid(double days) {

	unpaidTaken.setWorkDays(days);

}

void TimeOff5::setSickDays(double days) {

		sickTaken.setWorkDays(days);
		if (sickTaken.getWorkDays() > 30) {
			std::cout << "ERROR: Over amount of sick days. Total sick day policy is 30 days. "<< std::endl;
			std::cout << "SET SICK DAYS TO 30" << std::endl;
			sickTaken.setWorkDays(30);
		}

}



//Private Member Functions
bool TimeOff5::isMaxVacation(int value) { //private member function
	
	if (maxVacation.getHours() > 240) {
		std::cout << "ERROR: Maximum possible amount of vacation days is 30." << std::endl;
		return true;
	}
	else if (value > maxVacation.getWorkDays()) {
		std::cout << "ERROR: Over amount of vacation days. Total vacation days policy: " << maxVacation.getWorkDays() << std::endl;
		return true;
	}
	
	return false;
}

bool TimeOff5::isMaxUnpaid(int value) {
	if (value > maxUnpaid.getWorkDays()) {
		std::cout << "ERROR: Over amount of unpaid vacation days. Total unpaid vacation days policy: " << maxUnpaid.getWorkDays() << std::endl;
		return true;
	}
	else {
		return false;
	}
}
bool TimeOff5::isMaxSick(int value ) {
	if (value > maxSickDays.getWorkDays()) {
		std::cout << "ERROR: Over amount of sick days. Total sick day policy: " << maxSickDays.getWorkDays() << std::endl;
		return true;
	}
	else {
		return false;
	}
}


//Definition of the static member variable, written outside the class
//For Programming challenge number 5 we will set these by hardcoding them. They will regarded as default policy
Numdays4 TimeOff5::maxVacation(30 * 8);
Numdays4 TimeOff5::maxSickDays(30*8);
Numdays4 TimeOff5::maxUnpaid(30*8);
