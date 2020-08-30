#pragma once
#include <iostream>

class ParkingMeter14;

std::ostream& operator << (std::ostream&, const ParkingMeter14&);
std::istream& operator >> (std::istream&, ParkingMeter14&);


class ParkingMeter14
{
private:
	int purchased_minutes;
public:
	//Constructor
	ParkingMeter14();
	ParkingMeter14(int);


	//Accessor
	int getMinutes();

	//Mutator
	void setMinutes(int);

	//Overloaded Functions
	friend std::ostream& operator << (std::ostream&, const ParkingMeter14&);
	friend std::istream& operator >> (std::istream&, ParkingMeter14&);
};

