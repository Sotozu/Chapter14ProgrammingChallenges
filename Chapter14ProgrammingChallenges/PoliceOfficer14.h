#pragma once
#include <string>
#include "ParkedCar14.h"
#include "ParkingMeter14.h"
#include "ParkingTicket14.h"
#include <iostream>

class PoliceOfficer14; //forward declaration

std::ostream& operator << (std::ostream&, const PoliceOfficer14&);
std::istream& operator >> (std::istream&, PoliceOfficer14&);

class PoliceOfficer14
{
private:
	std::string officer_name;
	int officer_number;
	ParkingTicket14 ticket;
public:
	//Constructor
	PoliceOfficer14();

	//Accessor
	std::string getName();
	int getNumber();
	
	//Mutator
	void setName(std::string);
	void setNumber(int);


	//Overload functions

	friend std::ostream& operator << (std::ostream&, const PoliceOfficer14&);
	friend std::istream& operator >> (std::istream&, PoliceOfficer14&);

	//Other Functions
	bool isTicketRequired(ParkedCar14&, ParkingMeter14&);
	void issueParkingTicket(ParkedCar14&, int, int);
	void getTicketInformation();

};

