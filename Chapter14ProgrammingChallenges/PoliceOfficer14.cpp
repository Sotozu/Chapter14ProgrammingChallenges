#include "PoliceOfficer14.h"
//Constructor
PoliceOfficer14::PoliceOfficer14() {
	officer_name = "";
	officer_number = 0;
}

//Accessor
std::string PoliceOfficer14::getName() {
	return officer_name;
}

int PoliceOfficer14::getNumber() {
	return officer_number;
}

//Mutator
void PoliceOfficer14::setName(std::string n) {
	officer_name = n;
}
void PoliceOfficer14::setNumber(int id) {
	officer_number = id;
}




//Overloaded functions

std::ostream& operator << (std::ostream& strm, const PoliceOfficer14& obj) {
	strm << "Officer Name: " << obj.officer_name << std::endl;
	strm << "Officer Identification Number: " << obj.officer_number << std::endl;
	return strm;
}
std::istream& operator >> (std::istream& strm, PoliceOfficer14& obj) {
	std::cout << "Officer Name: "; getline(strm, obj.officer_name);
	std::cout << "Officer Identification Number: "; strm >> obj.officer_number;
	return strm;
}

//Othe Functions

bool PoliceOfficer14::isTicketRequired(ParkedCar14& car, ParkingMeter14& meter) {
	bool status;
	if (car.getMinutesParked() > meter.getMinutes()) {
		status = true;
	}
	else {
		status = false;
	}
	return status;
}


void PoliceOfficer14::issueParkingTicket(ParkedCar14& obj, int p_minutes, int m_minutes) {
	ticket.setCarInfo(obj);
	ticket.calculateTotal(p_minutes, m_minutes);
	ticket.setOfficerInfo(officer_name, officer_number);
}

void PoliceOfficer14::getTicketInformation() {
	std::cout << ticket;
}
