#include "RoomCarpet13.h"
#include "RoomDimension13.h"


double RoomCarpet13::getTotalCost() {
	double cost = 0;
	area = r1.getArea();
	cost = (area.getFeet() * carpet_cost) + ((area.getInches() * carpet_cost) / 12);
	return cost;
}

std::ostream& operator << (std::ostream& strm, const RoomCarpet13& obj) {
	strm << obj.r1;
	return strm;
}
std::istream& operator >> (std::istream& strm, RoomCarpet13& obj) {

	strm >> obj.r1;

	return strm;
}
