#pragma once
#include <iostream>
class Numdays4
{
private:
	int hours;
	double work_days;
	void adjust_work_days() {
		work_days = hours / 8.0;
	}
public:
	//constructor
	Numdays4();
	Numdays4(int);

	//Accessor
	double getWorkDays();
	int getHours();

	//Mutators
	void setWorkHours(int);
	void setWorkDays(int);




	//object conversion
	operator double(); //this was not explained in the book. Did not know how to create the prototype for 'type conversion'

	//Overloaded + Operator
	Numdays4 operator +(const Numdays4&);
	Numdays4 operator -(const Numdays4&);

	Numdays4 operator++();//Prefix
	Numdays4 operator--();

	Numdays4 operator++(int); //Postfix
	Numdays4 operator--(int);

	//Other Functions

	void printInfo();

};