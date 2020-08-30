#pragma once
#include <string>
#include <iostream>

class ParkedCar14; //forward declaration

std::ostream& operator << (std::ostream&, const ParkedCar14&);
std::istream& operator >> (std::istream&, ParkedCar14&);

class ParkedCar14
{
private:
	std::string car_make, 
		car_model, 
		car_color,
		license_number;

	int minutes_parked;

public:

	//Constructor
	ParkedCar14();
	ParkedCar14(std::string, std::string, std::string, std::string, int);

	

	//Mutator
	void setCarMake(std::string);
	void setCarModel(std::string);
	void setCarColor(std::string);
	void setLicenseNumber(std::string);
	void setMinutesParked(int);
	
	

	//Accessors
	std::string getCarMake();
	std::string getCarModel();
	std::string getCarColor();
	std::string getLicenseNumber();
	int getMinutesParked();

	//Overloaded Functions
	friend std::ostream& operator << (std::ostream&, const ParkedCar14&);
	friend std::istream& operator >> (std::istream&, ParkedCar14&);

	//static member functions
	

	//friend function
};



