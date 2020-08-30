#include "Odometer15.h"
//Constructor
Odometer15::Odometer15() {
	mileage = 0;
}
Odometer15::Odometer15(double m) {
	mileage = m;
}

//Accessor
double Odometer15::getMileage() {
	return mileage;
}
//static member function
double Odometer15::getMax() {
	return max_mileage;
}

int  Odometer15::getMpg() {
	return mpg;
}

//Mutator
void Odometer15::setMileage(double m) {
	mileage = m;
}


//Operator Overloads
Odometer15 Odometer15::operator++() {
	++mileage;
	return *this;
}
Odometer15 Odometer15::operator++(int) {
	Odometer15 temp(mileage);
	mileage++;
	return temp;
}

Odometer15 Odometer15::operator--() {
	--mileage;
	return *this;
}
Odometer15 Odometer15::operator--(int) {
	Odometer15 temp(mileage);
	mileage--;
	return temp;
}

//Other functions

//definig static member variables
const double Odometer15::max_mileage = 999999;
const int Odometer15::mpg = 24;