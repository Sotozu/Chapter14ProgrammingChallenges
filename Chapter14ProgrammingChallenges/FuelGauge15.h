#pragma once
class FuelGauge15
{
private:
	float gallons;
	static const float maxGallons;

public:
	//Constructor
	FuelGauge15();
	FuelGauge15(float);

	//Accessor
	float getGallons();
	//static member variable
	static float getMax();

	//Mutators
	void setGallons(float);

	//Overloaded Functions

	FuelGauge15 operator++();
	FuelGauge15 operator++(int);

	FuelGauge15 operator--();
	FuelGauge15 operator--(int);
};

