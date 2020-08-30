#pragma once
#include "FeetInches11.h"
#include <iostream>

class RoomDimension13;

std::ostream& operator << (std::ostream&, const RoomDimension13&);
std::istream& operator >> (std::istream&, RoomDimension13&);


class RoomDimension13
{
private:
	FeetInches11 length, width;

public:
	FeetInches11 getArea();


	//Overloaded functions

	friend std::ostream& operator << (std::ostream&, const RoomDimension13&);
	friend std::istream& operator >> (std::istream&, RoomDimension13&);

};



