#pragma once
#include <iostream>
#include <iomanip>

class Numdays6
{
private:
	int hours;
	double work_days;
	void adjust_work_days() {
		work_days = hours / 8.0;
	}
public:
	//constructor
	Numdays6() {
		hours = 0;
		work_days = 0;
	}
	Numdays6(int i) {
		hours = i;
		work_days = i / 8.0;
	}

	//Accessor
	double getWorkDays() {
		return work_days;
	}
	int getHours() {
		return hours;
	}

	//Mutators
	void setWorkHours(int i) {
		hours = i;
		work_days = i / 8.0;
	}
	void setWorkDays(int i) {
		hours = i * 8;
		work_days = i;
	}

	//object conversion
	operator double() { //this was not explained in the book. Did not know how to create the prototype for 'type conversion'
		double temp = hours / 8.0f;
		return temp;
	}

	//Overloaded + Operator
	Numdays6 operator+(const Numdays6& right)
	{
		Numdays6 temp;
		temp.hours = hours + right.hours;
		temp.work_days = work_days + right.work_days;
		return temp;
	}
	Numdays6 operator-(const Numdays6& right)
	{
		Numdays6 temp;
		temp.hours = hours - right.hours;
		temp.work_days = work_days - right.work_days;
		return temp;
	}

	Numdays6 operator++() { //Prefix
		++hours;
		adjust_work_days();
		return *this;
	}
	Numdays6 operator--() { //Prefix
		--hours;
		adjust_work_days();
		return *this;
	}

	Numdays6 operator++(int) { //Postfix
		Numdays6 temp(hours);
		hours++;
		adjust_work_days();
		return *this;
	}
	Numdays6 operator--(int) { //Postfix
		Numdays6 temp(hours);
		hours--;
		adjust_work_days();
		return *this;
	}

	//Other Functions

	void printInfo() {
		std::cout << std::setprecision(2) << std::showpoint << std::fixed;
		std::cout << "Hours: " << hours << std::endl;
		std::cout << "Days Work: " << work_days << std::endl;
	}

};