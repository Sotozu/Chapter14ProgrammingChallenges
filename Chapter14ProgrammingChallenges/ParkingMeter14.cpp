#include "ParkingMeter14.h"


//Constructor
ParkingMeter14::ParkingMeter14() {
	purchased_minutes = 0;
}

ParkingMeter14::ParkingMeter14(int m) {
	purchased_minutes = m;
}

//Accessor
int ParkingMeter14::getMinutes() {
	return purchased_minutes;
}

//Mutator
void ParkingMeter14::setMinutes(int m) {
	purchased_minutes = m;
}

//Overloaded Function
std::ostream& operator << (std::ostream& strm, const ParkingMeter14& obj) {
	strm << "Purchased Minutes: " << obj.purchased_minutes << std::endl;
	return strm;
}
std::istream& operator >> (std::istream& strm, ParkingMeter14& obj) {
	std::cout << "Purchased Minutes: "; strm >> obj.purchased_minutes;
	return strm;
}