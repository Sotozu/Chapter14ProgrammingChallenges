// Implementation file for the FeetInches11 class 
#include <cstdlib>  // Needed for abs() 
#include "FeetInches11.h"
#include "iostream"

//************************************************************** 
// Definition of member function simplify. This function * 
// checks for values in the inches member greater than  * 
// twelve or less than zero. If such a value is found,  * 
// the numbers in feet and inches are adjusted to conform  * 
// to a standard feet & inches expression. For example,  * 
// 3 feet 14 inches would be adjusted to 4 feet 2 inches and  * 
// 5 feet -2 inches would be adjusted to 4 feet 10 inches.  * 
//************************************************************** 

//********************************************** 
// Copy Constructor            * 
//**********************************************

FeetInches11::FeetInches11(const FeetInches11& obj) {
	feet = obj.feet;
	inches = obj.inches;
}


void FeetInches11::simplify()
{
	if (inches >= 12)
	{
		feet += (inches / 12);
		inches = inches % 12;//gives me the remaining inches over % 12. so if 13 inches then it gives 1.
	}
	else if (inches < 0)
	{
		feet -= ((abs(inches) / 12) + 1);
		inches = 12 - (abs(inches) % 12);

	}
}
//********************************************** 
// Overloaded binary + operator.             * 
//**********************************************

FeetInches11 FeetInches11::operator + (const FeetInches11& right)
{
	FeetInches11 temp;
	temp.inches = inches + right.inches;
	temp.feet = feet + right.feet;
	temp.simplify();
	return temp;
}
//********************************************** 
// Overloaded binary - operator.             * 
//********************************************** 
FeetInches11 FeetInches11::operator - (const FeetInches11& right)
{
	FeetInches11 temp;
	temp.inches = inches - right.inches;
	temp.feet = feet - right.feet;
	temp.simplify();
	return temp;
}

//********************************************** 
// Overloaded binary <= operator.             * 
//********************************************** 
bool FeetInches11::operator<=(const FeetInches11& right) {
	bool status;
	if (inches == right.inches && feet == right.feet) {
		status = true;
	}
	else if (feet <= right.feet && inches < right.inches) {
		status = true;
	}
	else {
		status = false;
	}
	return status;
}

//********************************************** 
// Overloaded binary >= operator.             * 
//********************************************** 
bool FeetInches11::operator>=(const FeetInches11& right) {
	bool status;
	if (inches == right.inches && feet == right.feet) {
		status = true;
	}
	else if (feet >= right.feet && inches > right.inches) {
		status = true;
	}
	else {
		status = false;
	}
	return status;
}

//********************************************** 
// Overloaded binary != operator.             * 
//********************************************** 

bool FeetInches11::operator!=(const FeetInches11& right) {
	bool status;

	if (feet != right.feet || inches != right.inches) {
		status = true;
	}
	else {
		status = false;
	}
	return status;
}

//********************************************** 
// Overloaded binary == operator.             * 
//********************************************** 

bool FeetInches11::operator==(const FeetInches11& right) {
	bool status;

	if (feet == right.feet && inches == right.inches) {
		status = true;
	}
	else {
		status = false;
	}
	return status;
}

//********************************************** 
// Overloaded binary * operator.             * 
//********************************************** 

FeetInches11 FeetInches11::operator * (const FeetInches11& right)
{
	double square_area_fraction_inches;
	int square_area_whole_feet;
	double feet_fraction1, feet_fraction2;

	feet_fraction1 = feet + (static_cast<double>(inches) / 12);
	feet_fraction2 = right.feet + (static_cast<double>(right.inches) / 12);



	square_area_fraction_inches = feet_fraction1 * feet_fraction2; //will hold a number (feet) with decimals being the inches

	square_area_whole_feet = square_area_fraction_inches; //truncating the number so it only holds the feet.

	square_area_fraction_inches -= square_area_whole_feet; //subtracting only the feet from the fractional number leaving inches

	square_area_fraction_inches *= 12;

	FeetInches11 temp;
	temp.setFeet(square_area_whole_feet);
	temp.setInches(square_area_fraction_inches);

	return temp;

}



void FeetInches11::operator = (const FeetInches11& right) {
	inches = right.inches;
	feet = right.feet;
}

