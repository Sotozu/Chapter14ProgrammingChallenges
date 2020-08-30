#pragma once
#include "ParkedCar14.h"

class ParkingTicket14;

std::ostream& operator << (std::ostream&, const ParkingTicket14&);
//std::istream& operator >> (std::istream&, ParkingTicket14&);

class ParkingTicket14
{
private:
	ParkedCar14 car;
	std::string officer_name;
	int officer_number;	
	double total_amount, hours_parked;
	static const double fhf_amount, hr_amount; //first hour fine amount & hourly rate amount

public:
	//Constructor
	ParkingTicket14();

	//Mutators
	void setCarInfo(ParkedCar14&);
	void setOfficerInfo(std::string, int);

	//Overloaded Functions
	friend std::ostream& operator << (std::ostream&, const ParkingTicket14&);
	//friend std::istream& operator >> (std::istream&, ParkingTicket14&);

	//other function
	void calculateTotal(int, int);

};


