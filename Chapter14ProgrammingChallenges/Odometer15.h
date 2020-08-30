#pragma once
class Odometer15
{
private:
	double mileage;
	static const double max_mileage;
	static const int mpg;
public:
	//Constructor
	Odometer15();
	Odometer15(double);

	//Accessor
	double getMileage();
	static double getMax();
	static int getMpg();

	//Mutator
	void setMileage(double);


	Odometer15 operator++();
	Odometer15 operator++(int);

	Odometer15 operator--();
	Odometer15 operator--(int);
};

