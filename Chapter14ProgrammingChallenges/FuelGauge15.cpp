#include "FuelGauge15.h"
//Constructor
FuelGauge15::FuelGauge15() {
	gallons = 0;
}
FuelGauge15::FuelGauge15(float g) {
	gallons = g;
}

//Accessor
float FuelGauge15::getGallons() {
	return gallons;
}

float FuelGauge15::getMax() {
	return maxGallons;

}


//Mutators
void FuelGauge15::setGallons(float g) {
	gallons = g;
}

//Operator Overloads
FuelGauge15 FuelGauge15::operator++() {
	++gallons;
	return *this;
}
FuelGauge15 FuelGauge15::operator++(int) {
	FuelGauge15 temp(gallons);
	gallons++;
	return temp;
}

FuelGauge15 FuelGauge15::operator--() {
	--gallons;
	return *this;
}
FuelGauge15 FuelGauge15::operator--(int) {
	FuelGauge15 temp(gallons);
	gallons--;
	return temp;
}

//definig static member variables
const float FuelGauge15::maxGallons = 15;