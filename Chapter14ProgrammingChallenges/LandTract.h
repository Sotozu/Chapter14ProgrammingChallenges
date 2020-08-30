#pragma once
#include "FeetInches11.h"
#include "iostream"
class LandTract;
std::ostream& operator << (std::ostream&, const LandTract&);
std::istream& operator >> (std::istream&, LandTract&);
class LandTract
{
private:
	FeetInches11 obj1, obj2, area;

public:
	//Constructor
	LandTract();

	//Function


	//Overloaded >> & << Operator

	friend std::ostream& operator << (std::ostream&, const LandTract&);
	friend std::istream& operator >> (std::istream&, LandTract&);

	//Overload == Operator

	bool operator == (const LandTract&);
};

