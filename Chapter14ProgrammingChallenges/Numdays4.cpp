#include "Numdays4.h"

#include <iomanip>
Numdays4::Numdays4() {
	hours = 0; 
	work_days = 0;
}

Numdays4::Numdays4(int i) {
	hours = i;
	work_days = i/8.0;
}

//Mutators
void Numdays4::setWorkHours(int i) {
	hours = i;
	work_days = i / 8.0;
}

void Numdays4::setWorkDays(int i) {
	hours = i * 8;
	work_days = i;
}

//Accessors
double Numdays4::getWorkDays() {
	return work_days;
}
int Numdays4::getHours() {
	return hours;
}


//Operator Overloading

Numdays4::operator double() {
	double temp = hours / 8.0;
	return temp;
}

Numdays4 Numdays4::operator+(const Numdays4& right)
{
	Numdays4 temp;
	temp.hours = hours + right.hours;
	temp.work_days = work_days + right.work_days;
	return temp;
}

Numdays4 Numdays4::operator-(const Numdays4& right)
{
	Numdays4 temp;
	temp.hours = hours - right.hours;
	temp.work_days = work_days - right.work_days;
	return temp;
}

Numdays4 Numdays4::operator++() {
	++hours;
	adjust_work_days();
	return *this;
}
Numdays4 Numdays4::operator--() {
	--hours;
	adjust_work_days();
	return *this;
}

Numdays4 Numdays4::operator++(int) {
	Numdays4 temp(hours);
	hours++;
	adjust_work_days();
	return *this;
}
Numdays4 Numdays4::operator--(int) {
	Numdays4 temp(hours);
	hours--;
	adjust_work_days();
	return *this;
}

//Other Functions
void Numdays4::printInfo() {
	std::cout << std::setprecision(2) << std::showpoint << std::fixed;
	std::cout << "Hours: " << hours << std::endl;
	std::cout << "Days Work: " << work_days << std::endl;
}



