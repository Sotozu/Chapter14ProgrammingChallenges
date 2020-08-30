#include "ParkedCar14.h"
#include <string>


//Constructor
ParkedCar14::ParkedCar14() {
	car_make = "";
	car_model = "";
	car_color = "";
	license_number = "";
	minutes_parked = 0;
}

ParkedCar14::ParkedCar14(std::string make, std::string model, std::string color, std::string lnumber, int minutes) {
	car_make = make;
	car_model = model;
	car_color = color;

	license_number = lnumber;
	minutes_parked = minutes;

}


//Mutator
void ParkedCar14::setCarMake(std::string make) {
	car_make = make;
}
void ParkedCar14::setCarModel(std::string model) {
	car_model = model;
}
void ParkedCar14::setCarColor(std::string color) {
	car_color = color;
}
void ParkedCar14::setLicenseNumber(std::string lnumber) {
	license_number = lnumber;
}



//Accessors
std::string ParkedCar14::getCarMake() {
	return car_make;
}
std::string ParkedCar14::getCarModel() {
	return car_model;

}
std::string ParkedCar14::getCarColor() {
	return car_color;

}
std::string ParkedCar14::getLicenseNumber() {
	return license_number;
}

//Static member functions
void ParkedCar14::setMinutesParked(int minutes) {
	minutes_parked = minutes;
}
int ParkedCar14::getMinutesParked() {
	return minutes_parked;  
}

//Overloaded Functions

std::ostream& operator << (std::ostream& strm, const ParkedCar14& obj) {
	strm << "Car Make: " << obj.car_make << std::endl;
	strm << "Car Model: " << obj.car_model << std::endl;
	strm << "Car Color: " << obj.car_color << std::endl;
	strm << "License Number: " << obj.license_number << std::endl;
	strm << "Minutes Parked: " << obj.minutes_parked << std::endl;

	return strm;
}
std::istream& operator >> (std::istream& strm, ParkedCar14& obj) {
	std::cout << "Car Make: "; strm >> obj.car_make;
	std::cout << "Car Model: "; strm >> obj.car_model;
	std::cout << "Car Color: "; strm >> obj.car_color;
	std::cout << "License Number: "; strm >> obj.license_number;
	
	return strm;
}
