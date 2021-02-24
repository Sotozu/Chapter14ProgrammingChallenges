//#include <iostream>
//#include <string>
//#include <iomanip>
//#include "Numbers1.h"
//#include "DayofYear2.h"
//#include "DayofYearModification3.h"
//#include "Numdays4.h"
//#include "TimeOff5.h"
//#include "Month.h";
//#include "Date8.h";
//#include "FeetInches9.h";
//#include "DivSales10.h"
//#include "FeetInches11.h"
//#include "LandTract.h
//#include "RoomCarpet13.h"
//#include "PoliceOfficer14.h"
//#include "ParkingMeter14.h"
//#include "ParkedCar14.h"
//#include "Odometer15.h"
//#include "FuelGauge15.h"


//1. Number Class

//int main() {
//	int num;
//
//	std::cout << "Please enter a whole number between 0 - 9999.\n";
//	do {
//		std::cout << "Number: "; std::cin >> num;
//		if (num < 0 || num > 9999) {
//			std::cout << "ERROR: Please enter a valid number.\n";
//		}
//	} while (num < 0 || num > 9999);
//
//	Numbers1 obj(num);
//
//	std::cout << obj.computeTextVersion();
//	
//	return 0;
//}

// 2. Day of the Year
//int main() {
//	int day;
//	std::cout << "Please enter a day in a year (1-365)" << std::endl;
//	std::cout << "Day: "; std::cin >> day;
//
//	DayofYear2 stringDate(day);
//
//	stringDate.printDate();
//
//	return 0;
//}

// 3. Day of the Year Modification

//int main() {
//	std::string month;
//	int day;
//	std::cout << "Please enter a month (e.i. \"January\")" << std::endl;
//	std::cout << "Month: "; std::getline(std::cin, month);
//	std::cout << std::endl;
//	std::cout << "Please enter a valid day for that month." << std::endl;
//	std::cout << "Day: "; std::cin >> day;
//
//	DayofYearModification3 stringDate(day, month);
//
//	std::cout << "ADDING 10 DAYS" << std::endl;
//	for (int i = 0; i < 10; i++) {
//		++stringDate;
//		stringDate.printDate();
//
//	}
//	std::cout << std::endl;
//	std::cout << "SUBTRACTING 100 DAYS" << std::endl;
//	std::cout << std::endl;
//	for (int i = 0; i < 100; i++) {
//		--stringDate;
//		stringDate.printDate();
//	}
//	return 0;
//}

//4. Numdays Class
//
//int main() {
//	int hours;
//	std::cout << "Please enter the number of hours worked." << std::endl;
//	std::cout << "Hours: "; std::cin >> hours;
//	std::cout << std::endl << "Worker 1" << std::endl;
//	Numdays4 worker1(hours);
//	worker1.printInfo();
//
//	std::cout << std::endl << "Copied contents of Worker 1 and placed them in Worker 2" << std::endl;
//	std::cout << std::endl << "Worker 2" << std::endl;
//	Numdays4 worker2 = worker1;
//	worker2.printInfo();
//
//	std::cout << std::endl << "Added the conents of Worker 2 into Worker 1" << std::endl;
//	std::cout << std::endl << "Worker 1" << std::endl;
//	worker1 = worker1 + worker2;
//	worker1.printInfo();
//
//	for (int i = 0; i < 10; i++) {
//		worker1++;
//	}
//	std::cout << std::endl << "Added 10 hours to Worker 1" << std::endl;
//	worker1.printInfo();
//
//	for (int i = 0; i < 1; i++) {
//		worker1--;
//	}
//	std::cout << std::endl << "Subtracted 1 hour to Worker 1" << std::endl;
//	worker1.printInfo();
//
//	return 0;
//
//
//}

// 5. Time Off
//enum states{option1 = 1, option2, display_emp, end};
//void mainMenu();
//void displayEmp(TimeOff5&);
//bool checkUserChoice(int);
//void policyChange(TimeOff5&);
//void entEmpInfo(TimeOff5&);
//int main() {
//	std::string emp_name;
//	int emp_id;
//	states menu;
//	int user_choice;
//
//	std::cout << "Please enter the employees name: "; std:getline(std::cin, emp_name);
//	std::cout << "Please enter the employee ID number: "; std::cin >> emp_id;
//
//	TimeOff5 emp(emp_name, emp_id);
//
//	do {
//		mainMenu();
//		do {
//			std::cout << "ENTER OPTION: "; std::cin >> user_choice;
//		} while (!checkUserChoice(user_choice));
//		
//		menu = static_cast<states>(user_choice);
//		
//		std::cout << std::endl;
//
//		if (menu == option1) { 
//			policyChange(emp);
//		}
//		else if (menu == option2) {
//			entEmpInfo(emp);
//		}
//		else if (menu == display_emp) {
//			displayEmp(emp);
//		}
//
//	} while (menu != end);
//
//	return 0;
//}
//
//void mainMenu() {
//	std::cout << "--------Main Menu--------" << std::endl;
//	std::cout << "1. Change Policy Info (Sick Leave/Vacations)" << std::endl;
//	std::cout << "2. Enter employee information (Sick Leave/Vacations)" << std::endl;
//	std::cout << "3. Display employee information" << std::endl;
//	std::cout << "4. End Program" << std::endl;
//}
//
//bool checkUserChoice(int i) {
//	if (i < 1 || i > 4) {
//		std::cout << "ERROR: Please enter a valid menu option.\n";
//		return false;
//	}
//	return true;
//}
//
//void policyChange(TimeOff5& emp) {
//	std::cout << "Please Enter The Following Vacation/Sick Policy Information for The Company.\n\n";
//	emp.setMaxVacation();
//	std::cout << std::endl;
//	emp.setMaxUnpaid();
//	std::cout << std::endl;
//	emp.setMaxSickDays();
//	std::cout << std::endl;
//}
//
//void entEmpInfo(TimeOff5& emp) {
//	std::cout << "EMPLOYEE INFO" << std::endl << std::endl;
//	emp.setVacation();
//	std::cout << std::endl;
//	
//	emp.setUnpaid();
//	std::cout << std::endl;
//
//	emp.setSickDays();
//	std::cout << std::endl;
//	
//}
//
//void displayEmp(TimeOff5& emp) {
//	std::cout << "EMPLOYEE NAME: " << emp.getName() << std::endl;
//	std::cout << "EMPLOYEE ID: " << emp.getID() << std::endl;
//	std::cout << std::endl;
//	std::cout << "PAID TIME OF: " << emp.getVacWorkDays() << " DAYS" << std::endl;
//	std::cout << "UNPAID TIME OF: " << emp.getUnpVacWorkDays() << " DAYS" << std::endl;
//	std::cout << "SICK TIME OF: " << emp.getSickWorkDays() << " DAYS" << std::endl;
//
//}

//6. Personal Report [HAD TO CHANG THE CLASS TimeOff5 FOR IT TO WORK HERE. UNFORTUNATELY I DID NOT SAVE IT PROPERLY AND WONT WORK FOR PROBLEM 5.]

//enum states { option1 = 1, option2, display_emp, end };
//
//void displayEmp(TimeOff5&);
//
//int main() {
//	std::string emp_name;
//	int emp_id;
//	states menu;
//	int user_choice, months, m_vac = 12, m_sick = 8;
//	std::cout << "----PRELIMINARY INFORMATION----" << std::endl;
//	std::cout << "Please enter the employees name: "; std:getline(std::cin, emp_name);
//	std::cout << "Please enter the employee ID number: "; std::cin >> emp_id;
//	std::cout << "Months worked at the company: "; std::cin >> months;
//
//	TimeOff5 emp(emp_name, emp_id);
//	double vac_earned_days = ((m_vac * months)/8), sick_earned_days = ((m_sick * months)/8);
//	emp.setVacation(vac_earned_days);
//	emp.setSickDays(sick_earned_days);
//
//
//	displayEmp(emp);
//	
//
//	return 0;
//}
//
//
//
//void displayEmp(TimeOff5& emp) {
//	std::cout << "EMPLOYEE NAME: " << emp.getName() << std::endl;
//	std::cout << "EMPLOYEE ID: " << emp.getID() << std::endl;
//	std::cout << std::endl;
//	std::cout << "-------TIME OF EAREND---------" << std::endl;
//	std::cout << "PAID TIME OF: " << emp.getVacWorkDays() << " DAYS" << std::endl;
//	std::cout << "UNPAID TIME OF: " << emp.getUnpVacWorkDays() << " DAYS" << std::endl;
//	std::cout << "SICK TIME OF: " << emp.getSickWorkDays() << " DAYS" << std::endl;
//
//}

// 7. month Class


//int main() {
//	std::string month_name;
//	int month_num;
//	do {
//		std::cout << "Please enter a month name (e.i. \"January\")\n";
//		std::cout << "Name: "; std::getline(std::cin, month_name);
//
//	} while (!Month::confirmUserInput(month_name));
//
//	Month obj_name(month_name);
//
//
//	std::cout << obj_name;
//	
//
//	do {
//		std::cout << "Please enter a month number (e.i. 1-12)\n";
//		std::cout << "Number: "; std::cin >> month_num;
//	} while (!Month::confirmUserInput(month_num));
//
//	Month obj_number(month_num);
//
//
//	std::cout << obj_number;
//
//	for (int i = 0; i < 100; i++) {
//		++obj_number;
//		std::cout << obj_number.getMonthName() << std::endl;
//	}
//	std::cout << std::endl;
//	std::cout << "Copying Contents of 'obj_number' and placing them in 'obj_copy' using the '=' overloaded operator.\n";
//	Month obj_copy = obj_number;
//	std::cout << obj_copy;
//
//	//using the  overloaded << operator
//
//	do {
//		std::cout << "Please enter new info in to 'obj_copy'\n";
//		std::cin >> obj_copy;
//
//	} while (!Month::confirmUserInput(obj_copy.getMonthName()));
//
//	std::cout << "'obj_copy' is now  set to the following.\n";
//	std::cout << obj_copy;
//	return 0;
//}

// 8. Date Class Modifcation

//int main() {
//
//	int days_between_dates;
//	Date8 my_date;
//	std::cout << "New Object Created 'my_date'." << std::endl;
//	do {
//		std::cin >> my_date;
//	} while (!Date8::validInput(my_date.getDay(), my_date.getMonth(), my_date.getYear()));
//
//	std::cout << "ADDING 1000 DAYS" << std::endl;
//	for (int i = 0; i < 1000; i++) {
//		++my_date;
//		std::cout << my_date;
//	}
//	
//
//	
//	std::cout << std::endl;
//	std::cout << "New Object Created 'new_date'." << std::endl;
//
//	Date8 new_date;
//	do {
//		std::cin >> new_date;
//	} while (!Date8::validInput(new_date.getDay(), new_date.getMonth(), new_date.getYear()));
//	std::cout << "CONTENTS OF 'new_date'\n";
//	std::cout << new_date << std::endl;
//	std::cout << "CONTENTS OF 'my_date'\n";
//	std::cout << my_date << std::endl;
//	std::cout <<"Copying contents of 'new_date' to 'my_date'\n";
//	my_date = new_date;
//	std::cout << std::endl;
//	std::cout << "NEW CONTENTS OF 'my_date'\n";
//	std::cout << my_date;
//
//	std::cout << std::endl;
//	std::cout << "-------------------------------------" << std::endl;
//	std::cout << "RESET CONTENTS OF 'my_date' TO....\n";
//	my_date.setDate(12, 0, 2000);
//	std::cout << my_date;
//	std::cout << "-------------------------------------" << std::endl;
//	std::cout << "RESET CONTENTS OF 'new_date' TO....\n";
//	new_date.setDate(10, 0, 2002);
//	std::cout << new_date;
//	std::cout << "-------------------------------------" << std::endl;
//	std::cout << "DAYS BETWEEN 'new_date' AND 'my_date' ...\n";
//
//	days_between_dates = my_date - new_date;
//	std::cout << days_between_dates << std::endl;
//
//
//	return 0;
//
//}

// 9. FeetInches Modification

//int main() {
//	int feet, inches;
//	FeetInches9 my_obj;
//	FeetInches9 my_obj_2;
//
//	std::cout << "Please enter the following information for the \"my_obj\" object.\n";
//	std::cout << "Please enter a length in feet: "; std::cin >> feet;
//	std::cout << "Please enter a length in inches: "; std::cin >> inches;
//	my_obj.setFeet(feet);
//	my_obj.setInches(inches);
//
//	std::cout << "Please enter the following information for the \"my_obj_2\" object.\n";
//	std::cout << "Please enter a length in feet: "; std::cin >> feet;
//	std::cout << "Please enter a length in inches: "; std::cin >> inches;
//	my_obj_2.setFeet(feet);
//	my_obj_2.setInches(inches);
//
//	std::cout << std::endl;
//	std::cout << "\"my_obj\" object info.\n";
//	std::cout << my_obj.getFeet() << " feet "; std::cout << my_obj.getInches() << " inches.\n";
//
//	std::cout << std::endl;
//	std::cout << "\"my_obj_2\" object info.\n";
//	std::cout << my_obj_2.getFeet() << " feet "; std::cout << my_obj_2.getInches() << " inches.\n\n";
//
//	
//	
//	if (my_obj >= my_obj_2) {
//		std::cout << "\"my_obj\" object is greater in length than or equal to \"my_obj_2\" object!\n";
//	}
//	else if (my_obj <= my_obj_2) {
//		std::cout << "\"my_obj_2\" object is greater in length than or equal to \"my_obj\" object!\n";
//	}
//	
//	if (my_obj != my_obj_2) {
//		std::cout << "Objects are not equal to each other!\n\n";
//	}
//	
//
//	return 0;
//}

// 10. Corporate Sales

//int main() {
//	DivSales10 region[6];
//
//	for (int i = 0; i < 6; i++) {
//		std::cout << "ENTER FOR DIVISION " << i + 1 << std::endl;
//		std::cin >> region[i];
//		std::cout << std::endl;
//	}
//	std::cout << "------------------------------COMPLETE REPORT------------------------------" << std::endl;
//	for (int i = 0; i < 4; i++) {
//		double totalQuarter = 0;
//		for (int j = 0; j < 6; j++) {
//			totalQuarter += region[j].getDivQSal(i);
//		}
//		std::cout << "Quarter " << 1 + i << " Company Sales: $" << totalQuarter << std::endl;
//	}
//	std::cout << std::endl;
//	std::cout <<"TOTAL COMPANY SALES: $" << region[0].getTotalSales();
//	return 0;
//}


// 11. FeetInches Class Copy Constructor and multiply function

//int main() {
//	int feet, inches;
//	FeetInches11 my_obj;
//
//	std::cout << "ENTER FEET: "; std::cin >> feet;
//	std::cout << "ENTER INCHES: "; std::cin >> inches;
//
//	my_obj.setFeet(feet);
//	my_obj.setInches(inches);
//	std::cout << std::endl;
//
//	FeetInches11 object_copy(my_obj);
//
//	std::cout << "MY OBJECT FEET: "; std::cout << my_obj.getFeet() << std::endl;
//	std::cout << "MY OBJECT INCHES: "; std::cout << my_obj.getInches() << std::endl;
//
//	std::cout << std::endl;
//
//	std::cout << "OBJECT COPY FEET: "; std::cout << object_copy.getFeet() << std::endl;
//	std::cout << "OBJECT COPY INCHES: "; std::cout << object_copy.getInches() << std::endl;
//
//	object_copy = object_copy * my_obj;
//
//	std::cout << std::endl;
//	
//	std::cout << "OBJECT COPY (MULTIPLIED WITH MY OBJECT) FEET: "; std::cout << object_copy.getFeet() << std::endl;
//	std::cout << "OBJECT COPY (MULTIPLIED WITH MY OBJECT) INCHES: "; std::cout << object_copy.getInches() << std::endl;
//
//	
//	return 0;
//}

// 12. LandTract Class

//int main(){
//
//	LandTract area1, area2;
//
//	std::cout << "Area 1 Info" << std::endl;
//	std::cin >> area1;
//	std::cout << "Area 2 Info" << std::endl;
//	std::cout << std::endl;
//	std::cin >> area2;
//
//	std::cout << "AREA" << std::endl;
//	std::cout << area1 << std::endl;
//	std::cout << area2 << std::endl;
//
//	if (area1 == area2) {
//		std::cout << "The areas are equal.\n";
//	}
//	else
//	{
//		std::cout << "The areas are not equal to each other.\n";
//	}
//	return 0;
//
//}

// 13. Carpet Calculator

//int main() {
//
//	RoomCarpet13 my_room;
//	std::cin >> my_room;
//	std::cout << std::endl;
//	std::cout << my_room;
//	std::cout << std::fixed << std::setprecision(2) << std::showpoint;
//	std::cout << "Total Cost: $" <<my_room.getTotalCost();
//	return 0;
//}

// 14. Parkin Ticket Simulator

//int main() {
//	int m_minutes, p_minutes;
//	PoliceOfficer14 officer1;
//
//	std::cout << "Please Enter The Officers Information.\n";
//	std::cout << std::endl;
//	std::cin >> officer1;
//	std::cout << std::endl;
//	ParkingMeter14 meter;
//	std::cout << "Please Enter The Parking Meter Information.\n";
//	std::cout << std::endl;
//	std::cout << "Minutes Purchased: "; std::cin >> m_minutes;
//	meter.setMinutes(m_minutes);
//	std::cout << std::endl;
//
//	ParkedCar14 car;
//	std::cout << "Please Enter The Minutes The Car Has Been Parked.\n";
//	std::cout << std::endl;
//	std::cout << "Minutes Parked: "; std::cin >> p_minutes;
//	car.setMinutesParked(p_minutes);
//	std::cout << std::endl;
//
//	
//
//	std::cout << std::endl;
//
//	if (!officer1.isTicketRequired(car, meter)) {
//		std::cout << "Ticket is not required!\n";
//		std::cout << "Ending Program" << std::endl;
//		exit(0);
//	}
//
//	std::cout << "Ticket is required!\n";
//	std::cout << "Record Vehicle Information.\n";
//	std::cout << std::endl;
//	std::cin >> car;
//	std::cout << std::endl;
//	officer1.issueParkingTicket(car, p_minutes, m_minutes);
//	officer1.getTicketInformation();
//
//
//
//	return 0;
//}

//15. Car Instrument Simulator

//int main() {
//	
//	double fuel, mileage;
//	FuelGauge15 car_fg;
//	Odometer15 car_odo;
//	bool fill_up = false;
//	char choice;
//	do {
//
//
//		std::cout << "Please enter (x) gallons of fuel into the car.\n";
//		do {
//			std::cout << "CAR FUEL: "; std::cin >> fuel;
//			if (fuel > FuelGauge15::getMax()) {
//				std::cout << "ERROR: Fuel tank can only hold " << FuelGauge15::getMax() << " gallons.\n";
//			}
//			else if (fuel < 1) {
//				std::cout << "ERROR: Please enter atleast one gallon of gas.\n";
//			}
//		} while (fuel > FuelGauge15::getMax() || fuel < 1);
//
//		std::cout << std::endl;
//		std::cout << "Filling Tank Up..." << std::endl;
//
//		for (int i = 0; i < fuel; i++) {
//			std::cout << "Gallon: " << i + 1 << std::endl;
//			car_fg++;
//		}
//
//
//		std::cout << std::endl;
//		std::cout << "Miles Traveled..." << std::endl;
//		for (int i = 0; i < (fuel * Odometer15::getMpg()); i++) {
//			car_odo++;
//			if (car_odo.getMileage() > car_odo.getMax()) {
//				car_odo.setMileage(0);
//			}
//			std::cout << "Mile: " << car_odo.getMileage() << std::endl;
//			if (i % 24 == 0) {
//				car_fg--;
//			}
//		}
//		std::cout << "Current Gallons: " << car_fg.getGallons() << std::endl;
//		std::cout << "Current Mileage: " << car_odo.getMileage() << std::endl;
//
//
//		do {
//			std::cout << "Fuel up and continue?\n";
//			std::cout << "Enter 'Y' for YES and 'N' for NO.\n";
//			std::cout << "(Y/N): "; std::cin >> choice;
//			if (toupper(choice) != 'Y' && toupper(choice) != 'N') {
//				std::cout << "ERROR: Please enter a valid choice.\n";
//			}
//		} while (toupper(choice) != 'Y' && toupper(choice) != 'N');
//
//		if (toupper(choice) == 'Y') {
//			fill_up = true;
//		}
//		else if (toupper(choice) == 'N'){
//			fill_up = false;
//		}
//		std::cout << std::endl;
//	
//	} while (fill_up == true);
//
//
//	return 0;
//
//}