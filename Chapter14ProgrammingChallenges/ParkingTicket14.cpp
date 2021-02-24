#include "ParkingTicket14.h"
#include <iostream>
#include <iomanip>
#include <cmath>


ParkingTicket14::ParkingTicket14() {
	hours_parked = 0;
	total_amount = 0;
	officer_name = "";
	officer_number = 0;
}

//Overloaded Functions

std::ostream& operator << (std::ostream& strm, const ParkingTicket14& obj) {
	strm << "-------------------" << std::endl;
	strm << "TICKET ISSUED" << std::endl;
	strm << "-------------------" << std::endl;
	strm << obj.car;
	strm << std::setprecision(2) << std::showpoint << std::fixed;
	strm << "Hours Parked: " << obj.hours_parked << std::endl;
	strm << "Total Fine: $" << obj.total_amount << std::endl;
	strm << "-------------------" << std::endl;
	strm << "Officer Information" << std::endl;
	strm << "-------------------" << std::endl;
	strm << "Officer Name: " << obj.officer_name << std::endl;
	strm << "Officer Identification Number: " << obj.officer_number << std::endl;
	return strm;
}

//Mutator
void ParkingTicket14::setOfficerInfo(std::string o_name, int o_id) {
	officer_name = o_name;
	officer_number = o_id;
}


//std::istream& operator >> (std::istream&, ParkingTicket14&) {
//
//}





//friend of ParkedCar14
void ParkingTicket14::setCarInfo(ParkedCar14& car_info) {
	car = car_info;
}


//definition of the static member varible, written outside the class
const double ParkingTicket14::fhf_amount = 25;
const double ParkingTicket14::hr_amount = 10;


void ParkingTicket14::calculateTotal(int p_minutes, int m_minutes) {
	int minutes_over = abs(m_minutes - p_minutes);
	hours_parked = minutes_over / 60.0;
	if (hours_parked > 1) {
		total_amount = fhf_amount + (hours_parked - 1) * hr_amount;
	}
	else {
		total_amount = fhf_amount;
	}
}
